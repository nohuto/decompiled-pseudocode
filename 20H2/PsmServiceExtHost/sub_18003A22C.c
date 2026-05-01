/*
 * XREFs of sub_18003A22C @ 0x18003A22C
 * Callers:
 *     sub_18003A184 @ 0x18003A184 (sub_18003A184.c)
 *     sub_1800655B4 @ 0x1800655B4 (sub_1800655B4.c)
 *     sub_18006570C @ 0x18006570C (sub_18006570C.c)
 *     sub_180066090 @ 0x180066090 (sub_180066090.c)
 *     sub_1800661E4 @ 0x1800661E4 (sub_1800661E4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

LPVOID __fastcall sub_18003A22C(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rbx
  HANDLE v6; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  if ( qword_1800B4EC8 )
  {
    v6 = GetProcessHeap();
    ((void (__fastcall *)(HANDLE, LPVOID))qword_1800B4EC8)(v6, v5);
  }
  return v5;
}
