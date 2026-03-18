/*
 * XREFs of ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x180097894
 * Callers:
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x180096720 (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x180097A64 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BF590 (-SetTouchTargetBounds@CVisual@@IEAAXV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1800C1A64 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1800C704C (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x1800CBB80 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800D2D00 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x18017CA68 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B29DC (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801B2C70 (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B2CB8 (-SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1801B2D0C (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B2D54 (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801B2DA8 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801B2DF0 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x1801CFB34 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x180097914 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 */

void __fastcall CSparseStorage::SetData(CSparseStorage *this, unsigned int a2, unsigned int a3, const void *a4)
{
  struct CSparseStorage::DataInfo *SlotForData; // rdi

  SlotForData = CSparseStorage::FindSlotForData(this, a2, a3);
  memcpy_0((char *)SlotForData + 4, a4, a3);
  *(_DWORD *)SlotForData ^= (*(_DWORD *)SlotForData ^ (a2 << 24)) & 0x7F000000;
  *(_DWORD *)(*(_QWORD *)this + 4LL) |= __ROR4__(1, a2);
}
