/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x1407476FC
 * Callers:
 *     PiDevCfgInitDeviceContext @ 0x1407448BC (PiDevCfgInitDeviceContext.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14074761C (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14084F060 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14094C2D0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14094E998 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x14094EA0C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14094ED84 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14094F4CC (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
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
    RtlFreeUnicodeString(v2++);
    --v3;
  }
  while ( v3 );
}
