/*
 * XREFs of ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C7EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800C7F80 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionGeometry::GetShapeDataCore(
        CRegionGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v4; // esi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // rcx

  v4 = 0;
  v6 = operator new(0x60uLL);
  v8 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x60uLL);
    *v8 = &CRegionShape::`vftable';
    v8[2] = v8 + 3;
    *((_DWORD *)v8 + 6) = 0;
    v8[11] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 17);
    if ( (*((_QWORD *)this + 18) - v9) >> 4 )
    {
      CRegionShape::BuildFromRects(v8, v9);
    }
    else
    {
      *(_DWORD *)v8[2] = 0;
      v11 = v8[11];
      v8[11] = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v8;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v4;
}
