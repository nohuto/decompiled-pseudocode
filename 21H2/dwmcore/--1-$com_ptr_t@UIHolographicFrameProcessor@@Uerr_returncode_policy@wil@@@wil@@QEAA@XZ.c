/*
 * XREFs of ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18006FA04 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800B4BB0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BBB7C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x1800F0DD0 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801A8160 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A8404 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x1801C5AD0 (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 *     ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x1801E4238 (--1CComputeScribbleRenderer@@EEAA@XZ.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x1801EB1D8 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x1801EB25C (--1CComputeScribbleSynchronizer@@QEAA@XZ.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180215330 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180218970 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x180232820 (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180240ED0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180264424 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18027D8EC (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
