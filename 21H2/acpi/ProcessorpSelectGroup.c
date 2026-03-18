/*
 * XREFs of ProcessorpSelectGroup @ 0x1C009C38C
 * Callers:
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1C009C294 (ProcessorpSelectProcessorSetFromPartitions.c)
 *     ProcessorpSelectProcessorSetFromClusters @ 0x1C00B65EC (ProcessorpSelectProcessorSetFromClusters.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ProcessorpSelectGroup(char a1, char a2, __int64 a3, _QWORD *a4)
{
  _QWORD *result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // r8

  if ( *(_BYTE *)a3 )
  {
    result = *(_QWORD **)(a3 + 24);
    goto LABEL_8;
  }
  if ( !a1 )
  {
    result = *(_QWORD **)ProcessorGroupByNumber;
    v5 = **(_QWORD **)ProcessorGroupByNumber;
    if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)ProcessorGroupByNumber )
    {
      v6 = (_QWORD *)result[1];
      if ( (_QWORD *)*v6 == result )
      {
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        goto LABEL_6;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
  v8 = ProcessorGroupListHead;
  if ( (__int64 *)ProcessorGroupListHead == &ProcessorGroupListHead )
    goto LABEL_15;
  do
  {
    result = (_QWORD *)v8;
    if ( !a2 )
      goto LABEL_11;
    if ( *(_BYTE *)(v8 + 40) )
      break;
    v8 = *(_QWORD *)v8;
  }
  while ( (__int64 *)v8 != &ProcessorGroupListHead );
  if ( (__int64 *)v8 == &ProcessorGroupListHead )
    goto LABEL_15;
LABEL_11:
  v9 = *result;
  if ( *(_QWORD **)(*result + 8LL) != result )
    goto LABEL_15;
  v10 = (_QWORD *)result[1];
  if ( (_QWORD *)*v10 != result )
    goto LABEL_15;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
LABEL_6:
  v7 = (_QWORD *)qword_1C0080618;
  if ( *(__int64 **)qword_1C0080618 != &ProcessorGroupListHead )
    goto LABEL_15;
  *result = &ProcessorGroupListHead;
  result[1] = v7;
  *v7 = result;
  qword_1C0080618 = (__int64)result;
LABEL_8:
  *a4 = result;
  return result;
}
