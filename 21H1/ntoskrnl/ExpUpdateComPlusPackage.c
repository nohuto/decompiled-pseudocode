/*
 * XREFs of ExpUpdateComPlusPackage @ 0x140946EE8
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 */

__int64 __fastcall ExpUpdateComPlusPackage(int a1)
{
  NTSTATUS v1; // ebx
  int Data; // [rsp+50h] [rbp+8h] BYREF
  ULONG Disposition; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a1;
  Disposition = 0;
  KeyHandle = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x40000000u, &stru_140C0EFA0);
  if ( v1 == -1073741772 )
    v1 = ZwCreateKey(&KeyHandle, 0x40000000u, &stru_140C0EFA0, 0, 0LL, 0, &Disposition);
  if ( v1 >= 0 )
  {
    v1 = ZwSetValueKey(KeyHandle, &stru_140C020B8, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v1;
}
