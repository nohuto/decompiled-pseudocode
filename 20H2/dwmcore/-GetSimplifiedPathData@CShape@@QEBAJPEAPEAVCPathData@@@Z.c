/*
 * XREFs of ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18025AE18
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801B54FC (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D7190 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathData(CShape *this, struct CPathData **a2)
{
  unsigned int v2; // edi
  __int64 *v3; // rbx
  int v5; // eax
  __int64 v6; // rcx
  struct CPathData *v7; // rcx
  struct CPathData *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 8);
  v9 = 0LL;
  if ( *((_QWORD *)this + 1) )
  {
LABEL_5:
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v9, v3);
    v7 = 0LL;
    *a2 = v9;
    goto LABEL_6;
  }
  v5 = (*(__int64 (__fastcall **)(CShape *, struct CPathData **))(*(_QWORD *)this + 64LL))(this, &v9);
  v2 = v5;
  if ( v5 >= 0 )
  {
    if ( !_InterlockedCompareExchange64(v3, (signed __int64)v9, 0LL) )
      v9 = 0LL;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3B1u, 0LL);
  v7 = v9;
LABEL_6:
  if ( v7 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v2;
}
