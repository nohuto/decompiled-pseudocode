/*
 * XREFs of PiConfigureDevice @ 0x1409477A4
 * Callers:
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x14094EA0C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14094ED84 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14094F4CC (PpDevCfgProcessDeviceReset.c)
 */

__int64 __fastcall PiConfigureDevice(__int64 a1)
{
  __int64 v1; // r9
  int v2; // edx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  v2 = *(_DWORD *)(v1 + 300);
  if ( (unsigned int)(v2 - 789) <= 1 )
    return 3221225558LL;
  if ( v2 == 768 || v2 > 783 && (v2 <= 787 || v2 > 788 && v2 <= 790) )
    return 3221225473LL;
  v3 = *(_DWORD *)(a1 + 24) - 21;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
      return PpDevCfgProcessDeviceClass(v1);
    v5 = v4 - 1;
    if ( !v5 )
      return PpDevCfgProcessDeviceExtensions(v1);
    if ( v5 == 1 )
      return PpDevCfgProcessDeviceReset(v1);
    return 3221225473LL;
  }
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice(v1, 0LL, 0);
  else
    return 3221225659LL;
}
