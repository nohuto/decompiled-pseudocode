/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x14072EA64
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14071DFA8 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071E318 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14072E988 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgInitDeviceContext @ 0x14072FFD0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407ABC40 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A3840 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1408A7778 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A77EC (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
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
