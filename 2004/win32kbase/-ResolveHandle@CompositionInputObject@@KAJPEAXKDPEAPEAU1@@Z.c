/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C002FA20
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001BA0 (NtUpdateInputSinkTransforms.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001D98 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C0002C30 (NtQueryCompositionInputSinkViewId.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C000E31C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtCompositionSetDropTarget @ 0x1C00330D0 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C003C510 (NtQueryCompositionInputSinkLuid.c)
 *     NtQueryCompositionInputSink @ 0x1C0040450 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C0045D20 (NtQueryCompositionInputIsImplicit.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C006C664 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C006F8F8 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C009D4E0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00A8420 (NtDuplicateCompositionInputSink.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011D41C (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtUserAddVisualIdentifier @ 0x1C0131D60 (NtUserAddVisualIdentifier.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01A9608 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01B7850 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C002FA64 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
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
