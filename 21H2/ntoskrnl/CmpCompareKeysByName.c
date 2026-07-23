/*
 * XREFs of CmpCompareKeysByName @ 0x140875EB4
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14072A06C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryBegin @ 0x14072A2EC (CmpKeyEnumStackEntryBegin.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1408705A8 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x14087AA78 (CmpKeyEnumStackEntryAdvance.c)
 * Callees:
 *     CmpCompareUnicodeString @ 0x140667B50 (CmpCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1406DDE80 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x140875F88 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpCompareKeysByName(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int16 v3; // r9
  bool v4; // zf
  __int16 v5; // ax
  __int64 v6; // rdx
  unsigned __int16 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF

  v2 = a2 + 76;
  v3 = *(_WORD *)(a2 + 2) & 0x20;
  v4 = (*(_BYTE *)(a1 + 2) & 0x20) == 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( v4 )
  {
    *((_QWORD *)&v10 + 1) = a1 + 76;
    if ( v3 )
    {
      v8 = *(_WORD *)(a2 + 72);
      LOWORD(v10) = *(_WORD *)(a1 + 72);
      WORD1(v10) = v10;
      return CmpCompareCompressedName((__int64)&v10, (unsigned __int8 *)(a2 + 76), v8, 0);
    }
    else
    {
      LOWORD(v9) = *(_WORD *)(a2 + 72);
      WORD1(v9) = v9;
      LOWORD(v10) = *(_WORD *)(a1 + 72);
      WORD1(v10) = v10;
      *((_QWORD *)&v9 + 1) = a2 + 76;
      return CmpCompareUnicodeString((__int64)&v10, (__int64)&v9, 0);
    }
  }
  else
  {
    v5 = *(_WORD *)(a2 + 72);
    v6 = *(unsigned __int16 *)(a1 + 72);
    if ( v3 )
    {
      return CmpCompareTwoCompressedNames(a1 + 76, v6, v2);
    }
    else
    {
      *((_QWORD *)&v9 + 1) = v2;
      LOWORD(v9) = v5;
      WORD1(v9) = v5;
      return (unsigned int)-CmpCompareCompressedName((__int64)&v9, (unsigned __int8 *)(a1 + 76), v6, 0);
    }
  }
}
