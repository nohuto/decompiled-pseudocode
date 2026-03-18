/*
 * XREFs of CmpHashUnicodeComponent @ 0x140703EC4
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpCheckLeaf @ 0x140670730 (CmpCheckLeaf.c)
 *     CmpGetNameControlBlock @ 0x140672990 (CmpGetNameControlBlock.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1406C4550 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpAddStringToMapping @ 0x1406E22A4 (CmpAddStringToMapping.c)
 *     CmpGetMappingHiveForString @ 0x1407014E0 (CmpGetMappingHiveForString.c)
 *     CmpAddToLeaf @ 0x140703C10 (CmpAddToLeaf.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140725ECC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140762F80 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpWaitForHiveMount @ 0x1407BFA84 (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140882B3C (CmpPartialPromoteSubkeys.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140A598A8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     NLS_UPCASE @ 0x140268110 (NLS_UPCASE.c)
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
