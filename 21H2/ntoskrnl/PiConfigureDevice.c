/*
 * XREFs of PiConfigureDevice @ 0x14072FFA4
 * Callers:
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PpDevCfgProcessDeviceClass @ 0x140730028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140730398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140739F50 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AAA4C (PpDevCfgProcessDeviceExtensions.c)
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
  if ( (unsigned int)(v2 - 787) <= 1 )
    return 3221225558LL;
  if ( v2 == 768 || v2 > 781 && (v2 <= 785 || v2 > 786 && v2 <= 788) )
    return 3221225473LL;
  v3 = *(_DWORD *)(a1 + 24) - 21;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
      return PpDevCfgProcessDeviceClass(v1);
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        return PpDevCfgProcessDeviceReset(v1);
      return 3221225473LL;
    }
    return PpDevCfgProcessDeviceExtensions(v1);
  }
  else if ( PiDevCfgMode )
  {
    return PiDevCfgProcessDevice(v1, 0LL, 0LL);
  }
  else
  {
    return 3221225659LL;
  }
}
