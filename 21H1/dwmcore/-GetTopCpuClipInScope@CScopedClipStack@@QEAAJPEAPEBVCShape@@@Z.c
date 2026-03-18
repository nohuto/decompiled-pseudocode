/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x18004C638
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800A7084 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800C1988 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 */

__int64 __fastcall CScopedClipStack::GetTopCpuClipInScope(CScopedClipStack *this, const struct CShape **a2)
{
  int v2; // eax
  unsigned int v3; // edi
  int v6; // r10d
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int i; // esi
  __int64 v12; // r15
  _QWORD *v13; // rax
  struct CShape **v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  if ( v2 && (v6 = *(_DWORD *)(84LL * (unsigned int)(v2 - 1) + *(_QWORD *)this + 4)) != 0 )
  {
    v8 = *((_QWORD *)this + 109);
    v9 = v8;
    if ( !*(_QWORD *)(136LL * (unsigned int)(*((_DWORD *)this + 224) - 1) + v8 + 88) )
    {
      v10 = 0LL;
      for ( i = *((_DWORD *)this + 224) - v6; i < *((_DWORD *)this + 224); v10 = *(_QWORD *)(v12 + v9 + 88) )
      {
        v12 = 136LL * i;
        v13 = (_QWORD *)(v12 + v8);
        v14 = (struct CShape **)(v12 + v8 + 88);
        if ( !*v14 )
        {
          if ( v10 )
          {
            v17 = CShape::Combine(v10, v9, *v13, v13 + 2, 1, v14);
            v3 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xCEu, 0LL);
              return v3;
            }
          }
          else
          {
            v15 = CShapePtr::CopyShape((CShapePtr *)v13, (const struct CMILMatrix *)(v13 + 2), v14);
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC4u, 0LL);
              return v3;
            }
          }
        }
        v9 = *((_QWORD *)this + 109);
        ++i;
        v8 = v9;
      }
    }
    *a2 = *(const struct CShape **)(136LL * (unsigned int)(*((_DWORD *)this + 224) - 1) + v9 + 88);
  }
  else
  {
    *a2 = 0LL;
  }
  return v3;
}
