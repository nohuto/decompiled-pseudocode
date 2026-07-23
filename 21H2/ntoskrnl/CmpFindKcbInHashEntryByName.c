/*
 * XREFs of CmpFindKcbInHashEntryByName @ 0x1406DF2A4
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140729E3C (CmpSubtreeEnumeratorAdvance.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpPartialPromoteSubkeys @ 0x140880220 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpCompareUnicodeString @ 0x140667B50 (CmpCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1406DDE80 (CmpCompareCompressedName.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 i; // rdi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v13 = 0LL;
  v6 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1640)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v9 = *(_QWORD *)(i + 64);
      v10 = *(_WORD *)(v9 + 24);
      if ( (*(_DWORD *)v9 & 1) != 0 )
      {
        v11 = CmpCompareCompressedName(a4, (unsigned __int8 *)(v9 + 26), v10, 2);
      }
      else
      {
        *((_QWORD *)&v13 + 1) = v9 + 26;
        LOWORD(v13) = v10;
        WORD1(v13) = v10;
        v11 = CmpCompareUnicodeString(a4, (__int64)&v13, 2);
      }
      if ( !v11 )
        return i - 16;
    }
  }
  return v6;
}
