/*
 * XREFs of sub_180021070 @ 0x180021070
 * Callers:
 *     sub_18001C5F4 @ 0x18001C5F4 (sub_18001C5F4.c)
 *     sub_18001CAEC @ 0x18001CAEC (sub_18001CAEC.c)
 *     sub_180020FF0 @ 0x180020FF0 (sub_180020FF0.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180021070(__int64 a1, unsigned __int64 a2)
{
  DWORD LastError; // ebp
  SIZE_T v5; // rsi
  HANDLE ProcessHeap; // rax
  char *v7; // rdi
  HANDLE v8; // rax
  size_t v10; // r14
  void *v11; // r15
  HANDLE v12; // rax

  if ( *(_QWORD *)(a1 + 16) - *(_QWORD *)a1 < a2 )
  {
    LastError = GetLastError();
    v5 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v7 = (char *)HeapAlloc(ProcessHeap, 0, v5);
    if ( qword_18021F558 )
    {
      v8 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))qword_18021F558)(v8, v7);
    }
    if ( !v7 )
    {
      SetLastError(LastError);
      return 0;
    }
    v10 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    sub_18000F088(v7, v5, *(const void **)a1, v10);
    v11 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v7;
    if ( v11 )
    {
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v11);
    }
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = &v7[v10];
    *(_QWORD *)(a1 + 16) = &v7[v5];
    SetLastError(LastError);
  }
  return 1;
}
