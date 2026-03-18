/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C009B8F8
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C00024B0 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0002CD0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004480 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0004B60 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionReleaseAllResources @ 0x1C001C800 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C001DAB0 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionGetDeletedResources @ 0x1C0043770 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C00445D0 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0045A20 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionSetChannelConnectionId @ 0x1C0046D20 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionWaitForChannel @ 0x1C0049AB0 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C004A4F0 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C004BEF0 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C004BFF0 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionSetDebugCounter @ 0x1C0055960 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionSynchronize @ 0x1C009B730 (NtDCompositionSynchronize.c)
 *     NtDCompositionSuspendAnimations @ 0x1C01CF190 (NtDCompositionSuspendAnimations.c)
 *     NtVisualCaptureBits @ 0x1C01CF4A0 (NtVisualCaptureBits.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C01D164C (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C01D16CC (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C009CA40 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
