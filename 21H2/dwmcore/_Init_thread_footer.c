/*
 * XREFs of _Init_thread_footer @ 0x180101100
 * Callers:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180018E78 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800381B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800388E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetAnimationScenarioGUID@CBaseExpression@@IEAAXU_GUID@@@Z @ 0x180042EF8 (-SetAnimationScenarioGUID@CBaseExpression@@IEAAXU_GUID@@@Z.c)
 *     ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800657D8 (-SetTouchTargetBounds@CVisual@@IEAAXV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180065B74 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ @ 0x180080C30 (-GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x18021CF94 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_1803D2DB8);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_1803D2DB8);
  return Init_thread_notify();
}
