/*
 * XREFs of ??$emplace_back@AEAPEAVCVisual@@AEA_NAEA_N@?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@QEAAAEAVCPreWalkVisual@CPreComputeContext@@AEAPEAVCVisual@@AEA_N1@Z @ 0x1800B82B0
 * Callers:
 *     ?Add@CPreWalkVisual@CPreComputeContext@@SAXPEAVCVisual@@PEBVCVisualTree@@_N2PEAV?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@@Z @ 0x1800D104C (-Add@CPreWalkVisual@CPreComputeContext@@SAXPEAVCVisual@@PEBVCVisualTree@@_N2PEAV-$vector@VCPreWa.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@?$vector@VCPreWalkVisual@CPreComputeContext@@V?$allocator@VCPreWalkVisual@CPreComputeContext@@@std@@@std@@QEAAPEAVCPreWalkVisual@CPreComputeContext@@QEAV23@AEAPEAVCVisual@@AEA_N2@Z @ 0x1800B8134 (--$_Emplace_reallocate@AEAPEAVCVisual@@AEA_NAEA_N@-$vector@VCPreWalkVisual@CPreComputeContext@@V.c)
 */

char *__fastcall std::vector<CPreComputeContext::CPreWalkVisual>::emplace_back<CVisual * &,bool &,bool &>(
        __int64 a1,
        _QWORD *a2,
        char *a3,
        char *a4)
{
  char *v5; // rdx
  char *result; // rax
  char v7; // r9
  char v8; // r8

  v5 = *(char **)(a1 + 8);
  if ( v5 == *(char **)(a1 + 16) )
    return std::vector<CPreComputeContext::CPreWalkVisual>::_Emplace_reallocate<CVisual * &,bool &,bool &>(
             (__int128 **)a1,
             v5,
             a2,
             a3,
             a4);
  v7 = *a4;
  v8 = *a3;
  *(_QWORD *)v5 = *a2;
  v5[8] = v8;
  v5[9] = v7;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
