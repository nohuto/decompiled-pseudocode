/*
 * XREFs of sub_180004B0C @ 0x180004B0C
 * Callers:
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 *     sub_180005394 @ 0x180005394 (sub_180005394.c)
 *     sub_1800067C4 @ 0x1800067C4 (sub_1800067C4.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180004B0C(__int64 a1, unsigned __int64 a2)
{
  SIZE_T v3; // rsi
  HANDLE ProcessHeap; // rax
  char *v5; // rdi
  HANDLE v6; // rax
  size_t v8; // rbp
  void *v9; // r14
  HANDLE v10; // rax

  if ( *(_QWORD *)(a1 + 16) - *(_QWORD *)a1 < a2 )
  {
    v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
    if ( qword_18005ABD0 )
    {
      v6 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))qword_18005ABD0)(v6, v5);
    }
    if ( !v5 )
      return 0;
    v8 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( v8 )
      sub_1800018E0(v5, v3, *(const void **)a1, v8);
    v9 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v5;
    if ( v9 )
    {
      v10 = GetProcessHeap();
      HeapFree(v10, 0, v9);
    }
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = &v5[v8];
    *(_QWORD *)(a1 + 16) = &v5[v3];
  }
  return 1;
}
