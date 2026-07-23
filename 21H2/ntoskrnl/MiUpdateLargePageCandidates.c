/*
 * XREFs of MiUpdateLargePageCandidates @ 0x140309D50
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiInitializeRebuildCandidateCounts @ 0x140A69014 (MiInitializeRebuildCandidateCounts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateLargePageCandidates(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r11
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r10

  v4 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  if ( !*(_BYTE *)(v4 + 4830) )
    return 0LL;
  if ( a2 == 2 )
  {
    v5 = 32LL;
    v6 = a1 >> 9;
    v7 = a1 >> 18;
  }
  else
  {
    if ( a2 != 1 )
      return 0LL;
    v5 = 512LL;
    v6 = a1 >> 18;
    v7 = a1 >> 18;
  }
  if ( a3 <= 0 )
  {
    if ( a2 == 2 )
      --*(_BYTE *)(*(_QWORD *)(v4 + 5104) + v6);
    else
      --*(_WORD *)(*(_QWORD *)(v4 + 5128) + 2 * v6);
    return 0LL;
  }
  if ( a2 == 2 )
  {
    if ( (unsigned __int8)++*(_BYTE *)(v6 + *(_QWORD *)(v4 + 5104)) != v5 )
      return 0LL;
    _bittestandset64(*(signed __int64 **)(v4 + 5120), v7);
    return 1LL;
  }
  else
  {
    ++*(_WORD *)(*(_QWORD *)(v4 + 5128) + 2 * v6);
    if ( *(_WORD *)(2 * v6 + *(_QWORD *)(v4 + 5128)) != 512 || (KeFeatureBits & 0x2000000000LL) == 0 )
      return 0LL;
    _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 5136), 1, 0);
    return 1LL;
  }
}
