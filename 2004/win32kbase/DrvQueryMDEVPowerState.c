/*
 * XREFs of DrvQueryMDEVPowerState @ 0x1C0062200
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C014B558 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvQueryMDEVPowerState(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  __int64 i; // rdx
  __int64 v5; // r8
  __int64 v7; // rax

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    return 1LL;
  for ( i = a1 + 40; ; i += 56LL )
  {
    v5 = *(_QWORD *)(*(_QWORD *)i + 2576LL);
    if ( !v5 )
      break;
    if ( *(int *)(v5 + 160) < 0 )
      return 0LL;
    if ( ++v2 >= v3 )
      return 1LL;
  }
  v7 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(56LL * v2 + a1 + 40);
  *(_QWORD *)(v7 + 32) = v2;
  WdLogEvent5_WdError(v7);
  return 0LL;
}
