/*
 * XREFs of ?DiscardView@CD3DDevice@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x1800DD384
 * Callers:
 *     ?DiscardIfOccluded@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5984 (-DiscardIfOccluded@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqdddd_EventWriteTransfer @ 0x180115FA0 (McTemplateU0xqdddd_EventWriteTransfer.c)
 */

void __fastcall CD3DDevice::DiscardView(CD3DDevice *this, struct ID3D11View *a2, const struct tagRECT *a3)
{
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // r9d

  if ( a2 )
  {
    v4 = (int)a2;
    (*(void (__fastcall **)(_QWORD, struct ID3D11View *, const struct tagRECT *, __int64))(**((_QWORD **)this + 70)
                                                                                         + 1064LL))(
      *((_QWORD *)this + 70),
      a2,
      a3,
      1LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0xqdddd_EventWriteTransfer(v6, v5, v4, v7, a3->left, a3->top, a3->right, a3->bottom);
  }
}
