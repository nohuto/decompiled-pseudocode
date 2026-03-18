/*
 * XREFs of PiDevCfgMigrateRootDevice @ 0x1408A9A4C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PnpRegistryValueExists @ 0x1403949A8 (PnpRegistryValueExists.c)
 *     PnpValidateRegistryDword @ 0x14039A558 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     IopGetRegistryValue @ 0x1407372E4 (IopGetRegistryValue.c)
 *     PiDevCfgMigrateDevice @ 0x14076A524 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1408A9B40 (PiDevCfgOpenDeviceMigrationKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateRootDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  const WCHAR *v5; // rcx
  int v7; // edi
  int v8; // ebx
  unsigned int *v9; // rcx
  UNICODE_STRING v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0LL;
  v5 = *(const WCHAR **)(a2 + 8);
  v11 = 0LL;
  LOBYTE(v7) = 0;
  v8 = PiDevCfgOpenDeviceMigrationKey(v5);
  if ( v8 >= 0 )
  {
    if ( IopGetRegistryValue(0LL, L"ConfigFlags", 0, &v12) >= 0 )
    {
      if ( PnpValidateRegistryDword(v12) )
        v7 = *(unsigned int *)((char *)v9 + v9[2]);
      ExFreePoolWithTag(v9, 0);
    }
    if ( (v7 & 1) == 0 )
      return (unsigned int)-1073741823;
    v11.Buffer = L"DriverInfName";
    *(_DWORD *)&v11.Length = 1835034;
    if ( PnpRegistryValueExists(0LL, &v11) )
      return (unsigned int)-1073741823;
    else
      return (unsigned int)PiDevCfgMigrateDevice(a1, a2, 0LL, 0LL, a3, 0LL);
  }
  return (unsigned int)v8;
}
