/*
 * XREFs of sub_180034268 @ 0x180034268
 * Callers:
 *     sub_180033E20 @ 0x180033E20 (sub_180033E20.c)
 *     sub_180034380 @ 0x180034380 (sub_180034380.c)
 * Callees:
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B4834 @ 0x1800B4834 (sub_1800B4834.c)
 *     sub_1800B498C @ 0x1800B498C (sub_1800B498C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180034268(_QWORD *a1, unsigned __int64 a2)
{
  SIZE_T v4; // rsi
  HANDLE ProcessHeap; // rax
  char *v6; // rdi
  HANDLE v7; // rax
  __int64 v9; // rbp
  void *v10; // r14
  HANDLE v11; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a1[2] - *a1 < a2 )
  {
    sub_1800B4834(&v12);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v6 = (char *)HeapAlloc(ProcessHeap, 0, v4);
    if ( qword_18019E3A8 )
    {
      v7 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))qword_18019E3A8)(v7, v6);
    }
    if ( !v6 )
    {
      sub_1800B498C(&v12);
      return 0;
    }
    v9 = a1[1] - *a1;
    sub_18003447C(v6, v4, *a1, v9);
    v10 = (void *)a1[3];
    a1[3] = v6;
    if ( v10 )
    {
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v10);
    }
    *a1 = v6;
    a1[1] = &v6[v9];
    a1[2] = &v6[v4];
    sub_1800B498C(&v12);
  }
  return 1;
}
