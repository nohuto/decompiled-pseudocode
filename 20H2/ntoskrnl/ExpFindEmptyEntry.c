/*
 * XREFs of ExpFindEmptyEntry @ 0x140315240
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402A1EA0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B3370 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1403152A0 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindEmptyEntry(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    a3 = (_QWORD *)(v3 + 16LL * *(unsigned int *)(v3 + 8));
    result = (_QWORD *)(v3 + 16);
    while ( *result )
    {
      result += 2;
      if ( result == a3 )
        goto LABEL_5;
    }
    KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)result - v3) >> 4;
  }
  else
  {
LABEL_5:
    ExpExpandResourceOwnerTable(a1, a2, a3);
    return 0LL;
  }
  return result;
}
