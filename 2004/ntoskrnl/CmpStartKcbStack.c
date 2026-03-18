/*
 * XREFs of CmpStartKcbStack @ 0x1405F0A70
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpIsKeyDeleted @ 0x14063FC08 (CmpIsKeyDeleted.c)
 *     CmpSubtreeEnumeratorStart @ 0x1407185AC (CmpSubtreeEnumeratorStart.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  PVOID v5; // rsi
  __int64 result; // rax
  SIZE_T v8; // rbp
  PVOID TransientPoolWithTag; // rax

  v5 = 0LL;
  if ( a2 <= 1 )
    goto LABEL_2;
  v8 = 8LL * (unsigned int)(a2 - 1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v8, 0x35364D43u, a4);
  v5 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v8);
LABEL_2:
    *(_WORD *)a1 = a2;
    *(_WORD *)(a1 + 2) = -1;
    result = 0LL;
    *(_QWORD *)(a1 + 24) = v5;
    return result;
  }
  return 3221225626LL;
}
