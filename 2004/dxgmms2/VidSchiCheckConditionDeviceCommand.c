/*
 * XREFs of VidSchiCheckConditionDeviceCommand @ 0x1C00136F8
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00059B0 (VidSchSubmitDeviceCommand.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A620 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C00306F8 (VidSchiProcessPrimariesTerminationList.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0013E08 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 */

__int64 __fastcall VidSchiCheckConditionDeviceCommand(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 156) && !*(_DWORD *)(a2 + 104) )
  {
    if ( (*(_BYTE *)(a2 + 25) & 1) != 0 )
      LOBYTE(v2) = !_VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(a2 + 96));
    else
      return 1;
  }
  return v2;
}
