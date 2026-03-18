/*
 * XREFs of CmpStartKcbStack @ 0x140626090
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpIsKeyDeleted @ 0x14069178C (CmpIsKeyDeleted.c)
 *     CmpSubtreeEnumeratorStart @ 0x14071621C (CmpSubtreeEnumeratorStart.c)
 *     CmpPartialPromoteSubkeys @ 0x14087BC9C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140408F80 (memset.c)
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
