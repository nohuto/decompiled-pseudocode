/*
 * XREFs of MiMirrorRemoveBlackChildPartitionPages @ 0x140533210
 * Callers:
 *     <none>
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x14038507C (MiMirrorOmitPagesFromCopy.c)
 */

ULONG_PTR *__fastcall MiMirrorRemoveBlackChildPartitionPages(ULONG_PTR *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *result; // rax
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rsi

  result = &MiSystemPartition;
  if ( a1 != &MiSystemPartition )
  {
    v5 = (unsigned int *)a1[12];
    v6 = 0;
    v7 = *a2;
    if ( v5 )
    {
      if ( *v5 )
      {
        do
        {
          result = (ULONG_PTR *)MiMirrorOmitPagesFromCopy(
                                  v7,
                                  *(_QWORD *)&v5[4 * v6 + 4],
                                  *(_QWORD *)&v5[4 * v6 + 6],
                                  a4);
          ++v6;
        }
        while ( v6 < *v5 );
      }
    }
  }
  return result;
}
