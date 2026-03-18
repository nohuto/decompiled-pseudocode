/*
 * XREFs of ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C59D0
 * Callers:
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1800C5868 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003F740 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _Init_thread_footer @ 0x1800E31B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3218 (_Init_thread_header.c)
 */

void __fastcall CVisual::SetTouchTargetBounds(__int64 a1, _QWORD *a2)
{
  CSparseStorage *v4; // rcx
  __int64 v5; // rax

  if ( __TSS0__1__SetTouchTargetBounds_CVisual__IEAAXV__TMilRect__MUMilRectF__UMil3DRectF__UMilPointAndSizeF__UNotNeeded_RectUniqueness_____Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__SetTouchTargetBounds_CVisual__IEAAXV__TMilRect__MUMilRectF__UMil3DRectF__UMilPointAndSizeF__UNotNeeded_RectUniqueness_____Z_4HA);
    if ( __TSS0__1__SetTouchTargetBounds_CVisual__IEAAXV__TMilRect__MUMilRectF__UMil3DRectF__UMilPointAndSizeF__UNotNeeded_RectUniqueness_____Z_4HA == -1 )
    {
      `CVisual::SetTouchTargetBounds'::`2'::sc_defaultValue = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      Init_thread_footer(&__TSS0__1__SetTouchTargetBounds_CVisual__IEAAXV__TMilRect__MUMilRectF__UMil3DRectF__UMilPointAndSizeF__UNotNeeded_RectUniqueness_____Z_4HA);
    }
  }
  v4 = (CSparseStorage *)(a1 + 216);
  v5 = *a2 - `CVisual::SetTouchTargetBounds'::`2'::sc_defaultValue;
  if ( *a2 == (_QWORD)`CVisual::SetTouchTargetBounds'::`2'::sc_defaultValue )
    v5 = a2[1] - *((_QWORD *)&`CVisual::SetTouchTargetBounds'::`2'::sc_defaultValue + 1);
  if ( v5 )
    CSparseStorage::SetData(v4, 0xCu, 0x10u, a2);
  else
    *(_DWORD *)(*(_QWORD *)v4 + 4LL) &= ~0x100000u;
}
