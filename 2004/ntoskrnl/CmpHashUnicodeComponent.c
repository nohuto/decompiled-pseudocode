/*
 * XREFs of CmpHashUnicodeComponent @ 0x140641348
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpGetNameControlBlock @ 0x1405E7DD0 (CmpGetNameControlBlock.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14063F3EC (CmpFindSubKeyByHashWithStatus.c)
 *     CmpGetMappingHiveForString @ 0x140640178 (CmpGetMappingHiveForString.c)
 *     CmpAddToLeaf @ 0x1406410D8 (CmpAddToLeaf.c)
 *     CmpCheckLeaf @ 0x14066F290 (CmpCheckLeaf.c)
 *     CmpAddStringToMapping @ 0x14070FA60 (CmpAddStringToMapping.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140717F0C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140754340 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpWaitForHiveMount @ 0x1407B1B44 (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140A59228 (CmpCreateRegistryRoot.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  __int16 v2; // ax
  unsigned __int16 *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // ax

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
          v5 = NLS_UPCASE(v5);
        else
          v5 -= 32;
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
