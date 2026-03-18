/*
 * XREFs of ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8310
 * Callers:
 *     <none>
 * Callees:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180016F54 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5C00 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PE.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1800E2C04 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRects(
        CVisual *a1,
        CDesktopTree *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        float *a5)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  const struct CShape *v15; // r10
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CVisual::CollectAdditionalDirtyRects(a1, (__int64)a2, a3, (__int64)a4, a5);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x14Au);
  }
  else if ( *((_BYTE *)a1 + 914)
         && !*((_BYTE *)a1 + 915)
         && *((_BYTE *)a1 + 919)
         && (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v12 = CPtrArrayBase::operator[]((char *)a1 + 800, 0LL);
    LOBYTE(v13) = 1;
    CGdiSpriteBitmap::GetAccumShape(v12, v16, v13);
    if ( v16[0] )
    {
      v14 = CPtrArrayBase::operator[]((char *)a1 + 800, 0LL);
      if ( (int)CDesktopTree::AddNewComposeTopContent(
                  a2,
                  (struct IBitmapResource *)((v14 + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64)),
                  v15,
                  a4) >= 0 )
        *((_BYTE *)a1 + 915) = 1;
    }
    CShapePtr::Release((CShapePtr *)v16);
  }
  return v10;
}
