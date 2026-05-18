/*
 * XREFs of sub_1800197E0 @ 0x1800197E0
 * Callers:
 *     sub_1801261CB @ 0x1801261CB (sub_1801261CB.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800197E0(__int64 a1)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
