/*
 * XREFs of IopBuildFullDriverPath @ 0x1407404C8
 * Callers:
 *     PpCheckInDriverDatabase @ 0x14073DC80 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     PiNormalizeDeviceText @ 0x14076AE00 (PiNormalizeDeviceText.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     IopQueryRegistryKeySystemPath @ 0x1407411A0 (IopQueryRegistryKeySystemPath.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildFullDriverPath(UNICODE_STRING *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS appended; // ebx
  __int64 v7; // r14
  unsigned __int16 Length; // bx
  unsigned int v9; // edx
  wchar_t *Pool; // rax
  UNICODE_STRING v12; // xmm0
  UNICODE_STRING String2; // [rsp+20h] [rbp-39h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING v17; // [rsp+60h] [rbp+7h]
  UNICODE_STRING v18; // [rsp+70h] [rbp+17h] BYREF
  UNICODE_STRING v19; // [rsp+80h] [rbp+27h] BYREF

  *(_QWORD *)&String1.Length = 1703960LL;
  *(_QWORD *)&v17.Length = 2359330LL;
  String1.Buffer = L"\\SystemRoot\\";
  v17.Buffer = L"System32\\Drivers\\";
  DestinationString = 0LL;
  Source = 0LL;
  v18 = 0LL;
  String2 = 0LL;
  v19 = 0LL;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&v18, 0LL);
  RtlInitUnicodeString(&String2, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  appended = IopQueryRegistryKeySystemPath(a2, &DestinationString);
  if ( appended < 0 )
    goto LABEL_14;
  if ( (int)IopGetRegistryValue(a2) < 0 || MEMORY[0xC] < 2u )
  {
    Source = DestinationString;
    v12 = *a1;
    v18 = v17;
    String2 = v12;
    RtlInitUnicodeString(&v19, L".SYS");
    Length = String2.Length;
  }
  else
  {
    if ( MEMORY[0xC] > 0xFFFFu )
    {
LABEL_18:
      appended = -2147483643;
      goto LABEL_14;
    }
    v7 = MEMORY[8];
    String2.MaximumLength = MEMORY[0xC];
    Length = MEMORY[0xC] - 2;
    String2.Buffer = (wchar_t *)MEMORY[8];
    String2.Length = MEMORY[0xC] - 2;
    if ( *(_WORD *)MEMORY[8] == 92 )
    {
      if ( RtlPrefixUnicodeString(&String1, &String2, 1u) )
      {
        Length -= 24;
        Source = DestinationString;
        String2.Length = Length;
        String2.Buffer = (wchar_t *)(v7 + 24);
      }
      else
      {
        RtlInitUnicodeString(&Source, 0LL);
      }
    }
    else
    {
      Source = DestinationString;
    }
  }
  v9 = Source.Length + 2 + v18.Length + v19.Length + Length;
  if ( v9 > 0xFFFF )
    goto LABEL_18;
  a3->MaximumLength = v9;
  a3->Length = 0;
  Pool = (wchar_t *)IopVerifierExAllocatePool(PagedPool, (unsigned __int16)v9);
  a3->Buffer = Pool;
  if ( Pool )
  {
    appended = RtlAppendUnicodeStringToString(a3, &Source);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(a3, &v18);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(a3, &String2);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(a3, &v19);
          if ( appended >= 0 )
            a3->Buffer[(unsigned __int64)a3->Length >> 1] = 0;
        }
      }
    }
  }
  else
  {
    appended = -1073741670;
  }
LABEL_14:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)appended;
}
