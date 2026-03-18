/*
 * XREFs of ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801FD2E0
 * Callers:
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD494 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  __int64 v2; // rbx
  const struct CShape *v3; // rsi
  void *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 20);
  v3 = a2;
  if ( v2 )
    goto LABEL_9;
  v5 = DefaultHeap::Alloc(0x60uLL);
  v2 = (__int64)v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x60uLL);
    *(_QWORD *)v2 = &CRegionShape::`vftable';
    *(_QWORD *)(v2 + 16) = v2 + 24;
    *(_DWORD *)(v2 + 24) = 0;
    *(_QWORD *)(v2 + 88) = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  a2 = (const struct CShape *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = v2;
  if ( a2 )
  {
    std::default_delete<CShape>::operator()(v6, (__int64 (__fastcall ***)(_QWORD, __int64))a2);
    v2 = *((_QWORD *)this + 20);
  }
  if ( v2 )
  {
LABEL_9:
    v8 = CShape::Combine(v2, (__int64)a2, (__int64)v3, 0LL, 0, &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xCEu, 0LL);
    }
    else
    {
      v10 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 20);
      v11 = v13;
      *((_QWORD *)this + 20) = v13;
      if ( v10 )
        std::default_delete<CShape>::operator()(v11, v10);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0xC7u, 0LL);
  }
  return v7;
}
