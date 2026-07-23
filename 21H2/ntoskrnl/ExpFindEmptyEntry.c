/*
 * XREFs of ExpFindEmptyEntry @ 0x1402367CC
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1403294A0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B4FA0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x14023682C (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindEmptyEntry(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    result = (_QWORD *)(v1 + 16);
    while ( *result )
    {
      result += 2;
      if ( result == (_QWORD *)(v1 + 16LL * *(unsigned int *)(v1 + 8)) )
        goto LABEL_5;
    }
    KeGetCurrentThread()->ResourceIndex = ((__int64)result - v1) >> 4;
  }
  else
  {
LABEL_5:
    ExpExpandResourceOwnerTable();
    return 0LL;
  }
  return result;
}
