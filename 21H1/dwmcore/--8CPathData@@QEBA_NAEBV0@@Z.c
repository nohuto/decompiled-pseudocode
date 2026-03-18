/*
 * XREFs of ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801B56AC
 * Callers:
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180043050 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801E6904 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800EBD5F (memcmp_0.c)
 */

bool __fastcall CPathData::operator==(__int64 a1, __int64 a2)
{
  char v2; // bl
  size_t v3; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24);
  if ( v3 == *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24) )
    return memcmp_0(*(const void **)(a1 + 24), *(const void **)(a2 + 24), v3) == 0;
  return v2;
}
