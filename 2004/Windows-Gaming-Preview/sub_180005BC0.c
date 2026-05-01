/*
 * XREFs of sub_180005BC0 @ 0x180005BC0
 * Callers:
 *     sub_180045F3B @ 0x180045F3B (sub_180045F3B.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180005BC0(__int64 a1)
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
