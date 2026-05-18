/*
 * XREFs of sub_18000C0E0 @ 0x18000C0E0
 * Callers:
 *     sub_18011FBCA @ 0x18011FBCA (sub_18011FBCA.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000C0E0(void **a1)
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
