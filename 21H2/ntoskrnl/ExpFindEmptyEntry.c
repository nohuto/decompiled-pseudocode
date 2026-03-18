/*
 * XREFs of ExpFindEmptyEntry @ 0x14021CA10
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14032BD70 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x14021CE94 (ExpExpandResourceOwnerTable.c)
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
        goto LABEL_6;
    }
    KeGetCurrentThread()->ResourceIndex = ((__int64)result - v1) >> 4;
  }
  else
  {
LABEL_6:
    ExpExpandResourceOwnerTable();
    return 0LL;
  }
  return result;
}
