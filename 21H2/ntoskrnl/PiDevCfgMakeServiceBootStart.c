/*
 * XREFs of PiDevCfgMakeServiceBootStart @ 0x1408A6F54
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x14036F128 (PnpValidateStringData.c)
 *     PnpValidateRegistryDword @ 0x14039AB18 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     PnpRegSzToString @ 0x1407401EC (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMakeServiceBootStart(PCWSTR SourceString)
{
  int RegistryValue; // ebx
  char *v2; // rdi
  void *v3; // rcx
  unsigned int v4; // edx
  _WORD *v5; // rcx
  unsigned __int16 v6; // ax
  __int64 v7; // rbx
  char *v8; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Data; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+98h] [rbp+38h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  v13 = 4;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&Data.Length = 0LL;
  DestinationString = 0LL;
  Data.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 0x2001Fu, &KeyHandle, 0LL, 0);
  if ( RegistryValue < 0 )
    goto LABEL_17;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Start", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_14;
  v2 = (char *)P;
  if ( !PnpValidateRegistryDword((__int64)P) )
  {
LABEL_4:
    RegistryValue = -1073741823;
    goto LABEL_15;
  }
  v13 = *(_DWORD *)&v2[*((unsigned int *)v2 + 2)];
  ExFreePoolWithTag(v3, 0);
  P = 0LL;
  if ( (v13 & 0xFFFFFFFB) == 0 )
    goto LABEL_17;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"ImagePath", 0, &P);
  if ( RegistryValue < 0 )
  {
LABEL_14:
    v2 = (char *)P;
  }
  else
  {
    v2 = (char *)P;
    if ( (unsigned int)(*((_DWORD *)P + 1) - 1) > 1
      || !PnpValidateStringData((__int64)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3)) )
    {
      goto LABEL_4;
    }
    LODWORD(P) = 0;
    PnpRegSzToString(v5, v4, (int *)&P);
    v6 = *((_WORD *)v2 + 6);
    v7 = *((unsigned int *)v2 + 2);
    String2.Length = (unsigned __int16)P;
    v8 = &v2[v7];
    String2.Buffer = (wchar_t *)v8;
    String2.MaximumLength = v6;
    if ( RtlPrefixUnicodeString(&PiDevCfgSystemRoot, &String2, 1u) )
    {
      RtlInitUnicodeString(&Data, (PCWSTR)v8 + 12);
      *(_DWORD *)&DestinationString.Length = 1310738;
      DestinationString.Buffer = L"ImagePath";
      RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, *((_DWORD *)v2 + 1), Data.Buffer, Data.Length + 2);
      if ( RegistryValue < 0 )
        goto LABEL_15;
    }
    else if ( !RtlPrefixUnicodeString(&PiDevCfgSystem32, &String2, 1u) )
    {
      goto LABEL_4;
    }
    *(_DWORD *)&DestinationString.Length = 786442;
    DestinationString.Buffer = L"Start";
    v13 = 0;
    RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v13, 4u);
  }
LABEL_15:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
