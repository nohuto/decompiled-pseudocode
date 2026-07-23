/*
 * XREFs of CmpHashUnicodeComponent @ 0x14065F044
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 *     CmpAddStringToMapping @ 0x140621174 (CmpAddStringToMapping.c)
 *     CmpAddToLeaf @ 0x14065E93C (CmpAddToLeaf.c)
 *     CmpGetMappingHiveForString @ 0x140667A38 (CmpGetMappingHiveForString.c)
 *     CmpCheckLeaf @ 0x1406DB680 (CmpCheckLeaf.c)
 *     CmpGetNameControlBlock @ 0x1406DF370 (CmpGetNameControlBlock.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140729E3C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140766730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1407ACC90 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpWaitForHiveMount @ 0x1407C43A4 (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140880220 (CmpPartialPromoteSubkeys.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140A5BED4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
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
