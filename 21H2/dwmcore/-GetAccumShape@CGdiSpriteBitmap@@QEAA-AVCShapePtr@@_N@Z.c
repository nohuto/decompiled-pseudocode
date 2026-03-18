/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1800E2C04
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18008CE74 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8310 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

CShapePtr *__fastcall CGdiSpriteBitmap::GetAccumShape(__int64 a1, CShapePtr *a2, char a3)
{
  int **v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v10; // eax
  struct CShape *v11; // rbx
  __int64 v12; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CShape *v14; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  if ( *(_BYTE *)(a1 + 145) )
  {
    v6 = (int **)(a1 + 256);
    **(_DWORD **)(a1 + 256) = 0;
    v7 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = FastRegion::CRegion::Copy(v6, (int **)(a1 + 168));
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    *(_BYTE *)(a1 + 145) = 0;
  }
  if ( a3 )
  {
    v10 = CShape::CopyShape((CShape *)(a1 + 240), 0LL, &v14);
    if ( v10 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
    v11 = v14;
    CShapePtr::Release(a2);
    *(_QWORD *)a2 = v11;
    *((_BYTE *)a2 + 8) = 1;
    **(_DWORD **)(a1 + 168) = 0;
    **(_DWORD **)(a1 + 256) = 0;
    v12 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    CShapePtr::Release(a2);
    *(_QWORD *)a2 = a1 + 240;
    *((_BYTE *)a2 + 8) = 0;
  }
  return a2;
}
