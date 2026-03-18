/*
 * XREFs of PiDevCfgVerifyService @ 0x14067996C
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x140744E30 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1402088DC (PnpValidateRegistryDword.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x14067B470 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgVerifyService(PCWSTR SourceString, bool *a2, _DWORD *a3)
{
  int v3; // r12d
  unsigned int v6; // r15d
  int RegistryValue; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rcx
  unsigned int *v11; // rcx
  char v12; // [rsp+20h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  LOBYTE(v3) = 0;
  DestinationString = 0LL;
  v6 = 4;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v12 = 0;
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &Handle, 0LL, v12);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( PnpValidateRegistryDword(0LL) )
        v3 = *(unsigned int *)((char *)v8 + v8[2]);
      else
        RegistryValue = -1073741823;
      ExFreePoolWithTag(v8, 0);
      if ( RegistryValue >= 0 )
      {
        if ( (v3 & 0xB) == 0 )
          goto LABEL_23;
        RegistryValue = IopGetRegistryValue(Handle);
        if ( RegistryValue < 0 )
          goto LABEL_20;
        if ( PnpValidateRegistryDword(0LL) )
          v6 = *(unsigned int *)((char *)v9 + v9[2]);
        else
          RegistryValue = -1073741823;
        ExFreePoolWithTag(v9, 0);
        if ( RegistryValue < 0 )
          goto LABEL_20;
        if ( v6 <= 4 )
        {
          if ( a2 )
            *a2 = v6 == 0;
          if ( a3 && (int)IopGetRegistryValue(Handle) >= 0 )
          {
            if ( PnpValidateRegistryDword(0LL) )
              *a3 = *(unsigned int *)((char *)v11 + v11[2]);
            ExFreePoolWithTag(v11, 0);
          }
        }
        else
        {
LABEL_23:
          RegistryValue = -1073741823;
        }
      }
    }
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValue;
}
