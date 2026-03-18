/*
 * XREFs of ?GetProperty@CPathGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801146D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800CE7E8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180113920 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CPathGeometry::GetProperty(CPathGeometry *this, int a2, struct CExpressionValue *a3)
{
  int Property; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx

  if ( a2 == 4 )
  {
    v6 = *((_QWORD *)this + 18);
    *((_DWORD *)a3 + 18) = 11;
    *((_BYTE *)a3 + 76) = 1;
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)a3 + 8, v6);
    return 0;
  }
  Property = CGeometry::GetProperty(this, a2, a3);
  v5 = Property;
  if ( Property >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, Property, 0x4Fu);
  return v5;
}
