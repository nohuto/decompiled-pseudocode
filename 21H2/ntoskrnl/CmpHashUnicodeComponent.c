/*
 * XREFs of CmpHashUnicodeComponent @ 0x140718B68
 * Callers:
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpCheckLeaf @ 0x14069A7B0 (CmpCheckLeaf.c)
 *     CmpAddStringToMapping @ 0x1406E236C (CmpAddStringToMapping.c)
 *     CmpGetMappingHiveForString @ 0x140717660 (CmpGetMappingHiveForString.c)
 *     CmpAddToLeaf @ 0x1407187D4 (CmpAddToLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14071B730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpGetNameControlBlock @ 0x1407C3E50 (CmpGetNameControlBlock.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14082F314 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpWaitForHiveMount @ 0x140853BB8 (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 *     CmpCreateRegistryRoot @ 0x140B15C50 (CmpCreateRegistryRoot.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r10d
  __int16 v2; // ax
  unsigned __int16 *v3; // r11
  __int64 v4; // rbx
  unsigned __int16 v5; // dx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v8; // dx

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
        {
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          v5 = NLS_UPCASE(CurrentServerSiloGlobals[154], v8);
        }
        else
        {
          v5 -= 32;
        }
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
