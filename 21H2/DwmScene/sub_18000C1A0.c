/*
 * XREFs of sub_18000C1A0 @ 0x18000C1A0
 * Callers:
 *     sub_18012549A @ 0x18012549A (sub_18012549A.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000C1A0(void **a1)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
