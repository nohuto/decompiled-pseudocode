/*
 * XREFs of sub_180019CD0 @ 0x180019CD0
 * Callers:
 *     unknown_libname_21 @ 0x1801261BF (unknown_libname_21.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180019CD0(__int64 a1)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
