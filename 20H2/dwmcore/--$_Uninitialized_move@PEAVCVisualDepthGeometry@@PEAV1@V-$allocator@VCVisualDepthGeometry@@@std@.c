/*
 * XREFs of ??$_Uninitialized_move@PEAVCVisualDepthGeometry@@PEAV1@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@YAPEAVCVisualDepthGeometry@@QEAV1@0PEAV1@AEAV?$allocator@VCVisualDepthGeometry@@@0@@Z @ 0x1801FA0EC
 * Callers:
 *     ??$_Emplace_reallocate@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAPEAVCVisualDepthGeometry@@QEAV2@$$QEAV2@@Z @ 0x1801F9E8C (--$_Emplace_reallocate@VCVisualDepthGeometry@@@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVi.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move<CVisualDepthGeometry *,CVisualDepthGeometry *,std::allocator<CVisualDepthGeometry>>(
        _OWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  _OWORD *result; // rax
  _OWORD *v4; // r9
  __int128 v5; // xmm0

  for ( result = a3; a1 != a2; v4[2] = v5 )
  {
    v4 = result + 8;
    *result = *a1;
    result[1] = a1[1];
    result[2] = a1[2];
    result[3] = a1[3];
    result[4] = a1[4];
    result[5] = a1[5];
    result[6] = a1[6];
    result += 11;
    *(v4 - 1) = a1[7];
    *v4 = a1[8];
    v4[1] = a1[9];
    v5 = a1[10];
    a1 += 11;
  }
  return result;
}
