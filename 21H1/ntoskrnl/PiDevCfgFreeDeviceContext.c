/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x140735338
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14071C028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071C398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073525C (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgInitDeviceContext @ 0x1407368A4 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407A8AE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A2520 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1408A6458 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A64CC (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *(int *)a1 < 0 )
  {
    v4 = *(void **)(a1 + 16);
    if ( v4 )
      ZwClose(v4);
  }
  v2 = (UNICODE_STRING *)(a1 + 24);
  v3 = 3LL;
  do
  {
    RtlFreeAnsiString(v2++);
    --v3;
  }
  while ( v3 );
}
