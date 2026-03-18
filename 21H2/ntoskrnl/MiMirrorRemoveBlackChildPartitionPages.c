/*
 * XREFs of MiMirrorRemoveBlackChildPartitionPages @ 0x14058CEF0
 * Callers:
 *     <none>
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x14038F830 (MiMirrorOmitPagesFromCopy.c)
 */

ULONG_PTR *__fastcall MiMirrorRemoveBlackChildPartitionPages(ULONG_PTR *a1, __int64 *a2)
{
  ULONG_PTR *result; // rax
  unsigned int *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rsi

  result = &MiSystemPartition;
  if ( a1 != &MiSystemPartition )
  {
    v3 = (unsigned int *)a1[12];
    v4 = 0;
    v5 = *a2;
    if ( v3 )
    {
      if ( *v3 )
      {
        do
        {
          result = (ULONG_PTR *)MiMirrorOmitPagesFromCopy(v5, *(_QWORD *)&v3[4 * v4 + 4], *(_QWORD *)&v3[4 * v4 + 6]);
          ++v4;
        }
        while ( v4 < *v3 );
      }
    }
  }
  return result;
}
