/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004D320
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B660 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18008AF48 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008EBAC (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180093FA0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18017CDBC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

char __fastcall CVisual::UpdateWorldTransform(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  __int64 v8; // rax
  const struct CMILMatrix *v9; // rsi
  __int64 v10; // r8
  char v11; // si
  CComposition *v13; // rbx
  int ManipulationManager; // eax
  _BYTE v15[64]; // [rsp+30h] [rbp-61h] BYREF
  int v16; // [rsp+70h] [rbp-21h]
  _BYTE v17[64]; // [rsp+80h] [rbp-11h] BYREF
  int v18; // [rsp+C0h] [rbp+2Fh]
  bool v19; // [rsp+108h] [rbp+77h] BYREF

  v8 = *((_QWORD *)this + 31);
  v16 = 0;
  v18 = 0;
  v9 = (const struct CMILMatrix *)(((unsigned __int64)a5 + 312) & -(__int64)(a5 != 0LL));
  CVisual::CalcTransform(
    this,
    a2,
    v9,
    &v19,
    (struct CMILMatrix *)v15,
    (struct CMILMatrix *)((unsigned __int64)v17 & -(__int64)(v8 != 0)));
  if ( a4 || !v9 )
  {
    LOBYTE(v10) = 1;
  }
  else if ( v19 )
  {
    LOBYTE(v10) = CMILMatrix::IsEqualTo<0>(v9, v15) ^ 1;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  v11 = (*(__int64 (__fastcall **)(struct CTreeData *, _BYTE *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
          a3,
          v15,
          v10,
          (unsigned __int64)v17 & -(__int64)(*((_QWORD *)this + 31) != 0LL));
  if ( v11 && CVisual::GetInteractionInternal(this) && *((char *)this + 101) < 0 )
  {
    a5 = 0LL;
    v13 = (CComposition *)*((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
    ManipulationManager = CComposition::GetManipulationManager(v13, &a5);
    if ( ManipulationManager >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, this, (const struct CMILMatrix *)v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  }
  return v11;
}
