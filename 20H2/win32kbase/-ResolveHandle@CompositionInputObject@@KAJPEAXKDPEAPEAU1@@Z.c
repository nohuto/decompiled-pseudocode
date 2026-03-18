/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0094F70
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001BA0 (NtUpdateInputSinkTransforms.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001D98 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C0002C30 (NtQueryCompositionInputSinkViewId.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C0030C84 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C0034978 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0061220 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0063A60 (NtDuplicateCompositionInputSink.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C006A6EC (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtCompositionSetDropTarget @ 0x1C0098E20 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C009B910 (NtQueryCompositionInputSinkLuid.c)
 *     NtQueryCompositionInputSink @ 0x1C00A2930 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C00A7010 (NtQueryCompositionInputIsImplicit.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011B0DC (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtUserAddVisualIdentifier @ 0x1C012FA10 (NtUserAddVisualIdentifier.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01A7288 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01B54E0 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0094FB4 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct CompositionInputObject **a4)
{
  __int64 result; // rax
  struct CompositionInputObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 2LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
