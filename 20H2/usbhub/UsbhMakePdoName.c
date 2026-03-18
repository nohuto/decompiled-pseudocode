/*
 * XREFs of UsbhMakePdoName @ 0x1C004373C
 * Callers:
 *     UsbhCreatePdo @ 0x1C0053F94 (UsbhCreatePdo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 */

__int64 __fastcall UsbhMakePdoName(__int64 a1, struct _UNICODE_STRING *a2, ULONG a3)
{
  WCHAR *PoolWithTag; // rax
  WCHAR *v6; // rdi
  __int128 v7; // xmm1
  NTSTATUS appended; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  __int128 v11; // [rsp+30h] [rbp-88h]
  __int128 v12; // [rsp+40h] [rbp-78h]
  WCHAR SourceString[32]; // [rsp+50h] [rbp-68h] BYREF

  v11 = *(_OWORD *)L"\\Device\\USBPDO-";
  v12 = *(_OWORD *)L"USBPDO-";
  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x60uLL, 0x42554855u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  v7 = v12;
  *(_OWORD *)v6 = v11;
  *((_OWORD *)v6 + 1) = v7;
  RtlInitUnicodeString(a2, v6);
  a2->MaximumLength = 96;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  appended = RtlIntegerToUnicodeString(a3, 0xAu, &DestinationString);
  if ( appended >= 0 )
    appended = RtlAppendUnicodeStringToString(a2, &DestinationString);
  if ( (appended & 0xC0000000) == 0xC0000000 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)appended;
}
