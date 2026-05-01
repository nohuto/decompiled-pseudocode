/*
 * XREFs of sub_180006264 @ 0x180006264
 * Callers:
 *     unknown_libname_3 @ 0x180045F4D (unknown_libname_3.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180006264(__int64 a1)
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
