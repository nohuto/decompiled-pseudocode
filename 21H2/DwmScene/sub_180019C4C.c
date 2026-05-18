/*
 * XREFs of sub_180019C4C @ 0x180019C4C
 * Callers:
 *     sub_1800195DC @ 0x1800195DC (sub_1800195DC.c)
 *     sub_18001B77C @ 0x18001B77C (sub_18001B77C.c)
 *     sub_18001C824 @ 0x18001C824 (sub_18001C824.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 *     unknown_libname_20 @ 0x1801261B3 (unknown_libname_20.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180019C4C(_QWORD *a1)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax
  void *v4; // rdi
  HANDLE v5; // rax
  void *v6; // rdi
  HANDLE v7; // rax

  v1 = (void *)a1[22];
  a1[22] = 0LL;
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
  v4 = (void *)a1[14];
  a1[14] = 0LL;
  if ( v4 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
  }
  v6 = (void *)a1[6];
  a1[6] = 0LL;
  if ( v6 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
}
