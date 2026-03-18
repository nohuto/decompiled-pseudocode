/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00B8C98
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0002360 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0002B80 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004330 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0004A10 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0036300 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionWaitForChannel @ 0x1C003C8D0 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C003D280 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C003F4A0 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C003F5A0 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionSetDebugCounter @ 0x1C0047EE0 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C00B23F0 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionReleaseAllResources @ 0x1C00B3780 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelConnectionId @ 0x1C00B5AC0 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionGetDeletedResources @ 0x1C00B5C90 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C00B5E50 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionSynchronize @ 0x1C00B8AD0 (NtDCompositionSynchronize.c)
 *     NtDCompositionSuspendAnimations @ 0x1C01D5110 (NtDCompositionSuspendAnimations.c)
 *     NtVisualCaptureBits @ 0x1C01D5420 (NtVisualCaptureBits.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C01D75CC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C01D764C (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00B9DE0 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        unsigned int a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  int v3; // edi
  struct DirectComposition::CApplicationChannel *v4; // rbx
  struct DirectComposition::CChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CChannel *))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
    {
      *a2 = v4;
    }
    else
    {
      v3 = -1073741811;
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
