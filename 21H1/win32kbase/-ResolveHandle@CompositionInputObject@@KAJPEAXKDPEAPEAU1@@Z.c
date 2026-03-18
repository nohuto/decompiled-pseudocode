/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C001B7B0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001A50 (NtUpdateInputSinkTransforms.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001C48 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C0002AE0 (NtQueryCompositionInputSinkViewId.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C002DA10 (NtQueryCompositionInputSinkLuid.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C002FB64 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C0036600 (NtQueryCompositionInputIsImplicit.c)
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C0064348 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0096440 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtCompositionSetDropTarget @ 0x1C00B2540 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSink @ 0x1C00B53D0 (NtQueryCompositionInputSink.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00B8000 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00B8370 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0123AB0 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtUserAddVisualIdentifier @ 0x1C0137D50 (NtUserAddVisualIdentifier.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01AF368 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01BD5B0 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C001B7F4 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
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
