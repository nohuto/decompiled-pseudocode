/*
 * XREFs of sub_180065874 @ 0x180065874
 * Callers:
 *     sub_180009ED0 @ 0x180009ED0 (sub_180009ED0.c)
 *     sub_180017CA0 @ 0x180017CA0 (sub_180017CA0.c)
 *     sub_180065760 @ 0x180065760 (sub_180065760.c)
 *     sub_1800B5788 @ 0x1800B5788 (sub_1800B5788.c)
 *     sub_1800B5B00 @ 0x1800B5B00 (sub_1800B5B00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

LPVOID __fastcall sub_180065874(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rbx
  HANDLE v7; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  if ( qword_18019E3A8 )
  {
    v7 = GetProcessHeap();
    ((void (__fastcall *)(HANDLE, LPVOID))qword_18019E3A8)(v7, v5);
  }
  return v5;
}
