/*
 * XREFs of _MNFreePopup@8 @ 0x184632
 * Callers:
 *     _MNFlushDestroyedPopups@4 @ 0x184561 (_MNFlushDestroyedPopups@4.c)
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     ?xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z @ 0x196B8D (-xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _UnlockPopupMenu@8 @ 0x197868 (_UnlockPopupMenu@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

_DWORD *__stdcall MNFreePopup(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = safe_cast_fnid_to_PMENUWND(*(_DWORD **)(*(_DWORD *)a1 + 8));
  v3 = v2;
  if ( v2 && *(void *const *)a1 != _gpopupMenu )
  {
    *(_DWORD *)(v2 + 4) = 0;
    if ( *(_DWORD *)(v2 + 8) && *(_DWORD *)(v2 + 8) != *(_DWORD *)a1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    *(_DWORD *)(v3 + 8) = *(_DWORD *)a1;
  }
  HMAssignmentUnlock(*(_DWORD *)a1 + 12);
  HMAssignmentUnlock(*(_DWORD *)a1 + 16);
  UnlockPopupMenu(&a1, *(_DWORD *)a1 + 20);
  UnlockPopupMenu(&a1, *(_DWORD *)a1 + 24);
  HMAssignmentUnlock(*(_DWORD *)a1 + 4);
  HMAssignmentUnlock(*(_DWORD *)a1 + 28);
  HMAssignmentUnlock(*(_DWORD *)a1 + 8);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&a1);
}
