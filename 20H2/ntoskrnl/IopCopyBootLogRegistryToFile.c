/*
 * XREFs of IopCopyBootLogRegistryToFile @ 0x140790B40
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407909DC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     RtlInitAnsiString @ 0x14023DB90 (RtlInitAnsiString.c)
 *     ExSystemTimeToLocalTime @ 0x140330FF0 (ExSystemTimeToLocalTime.c)
 *     RtlStringCchPrintfW @ 0x140340D00 (RtlStringCchPrintfW.c)
 *     RtlTimeToTimeFields @ 0x14036E6A0 (RtlTimeToTimeFields.c)
 *     RtlStringCchPrintfA @ 0x1403B6BA4 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403F9BF0 (ZwDeleteKey.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1406FDE90 (RtlCreateUnicodeString.c)
 *     IopGetRegistryValue @ 0x1407372E4 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140766324 (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x1408938F4 (IopBootLogToFile.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

_QWORD *IopCopyBootLogRegistryToFile()
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int i; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v4; // rdi
  PUNICODE_STRING v5; // rcx
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE TimeFields; // [rsp+60h] [rbp-A8h] BYREF
  _TIME_FIELDS TimeFields_8; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v13; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v14; // [rsp+B8h] [rbp-50h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+1C8h] [rbp+C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+3E0h] [rbp+2D8h] BYREF

  result = &retaddr;
  KeyHandle = 0LL;
  TimeFields = 0LL;
  LocalTime.QuadPart = 0LL;
  v13 = 0LL;
  TimeFields_8 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  v14 = 0LL;
  if ( qword_140D2D030 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140D2D030[4], 1u);
    IopBootLogToFile(&qword_140D2D030[3]);
    ExSystemTimeToLocalTime(&KeBootTime, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields_8);
    RtlStringCchPrintfA(
      pszDest,
      0x100uLL,
      "%2d %2d %4d %02d:%02d:%02d.%03d\r\n",
      TimeFields_8.Month,
      TimeFields_8.Day,
      TimeFields_8.Year,
      TimeFields_8.Hour,
      TimeFields_8.Minute,
      TimeFields_8.Second,
      TimeFields_8.Milliseconds);
    RtlInitAnsiString(&DestinationString, pszDest);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    IopBootLogToFile(&UnicodeString);
    RtlFreeAnsiString(&UnicodeString);
    if ( IopOpenRegistryKey(&TimeFields, 0LL, &CmRegistryMachineSystemCurrentControlSetControlBootLog, 0xF003Fu, 0) < 0 )
    {
      v5 = qword_140D2D030;
    }
    else
    {
      for ( i = 0; i < LODWORD(qword_140D2D030[10].Buffer); ++i )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%d", i);
        RtlCreateUnicodeString(&v13, SourceString);
        if ( IopOpenRegistryKey(&KeyHandle, TimeFields, &v13, 0xF003Fu, 0) >= 0 )
        {
          P = 0LL;
          RegistryValue = IopGetRegistryValue(KeyHandle, &word_1407D36E0, 256, &P);
          v4 = P;
          if ( RegistryValue >= 0 )
          {
            RtlInitUnicodeString(&v14, (PCWSTR)((char *)P + *((unsigned int *)P + 2)));
            IopBootLogToFile(&v14);
          }
          ExFreePoolWithTag(v4, 0);
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
      }
      ZwDeleteKey(TimeFields);
      ZwClose(TimeFields);
      v5 = qword_140D2D030;
      BYTE4(qword_140D2D030[10].Buffer) = 1;
    }
    ExReleaseResourceLite((PERESOURCE)&v5[4]);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
