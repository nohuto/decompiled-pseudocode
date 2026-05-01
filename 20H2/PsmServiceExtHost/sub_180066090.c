/*
 * XREFs of sub_180066090 @ 0x180066090
 * Callers:
 *     sub_1800661E4 @ 0x1800661E4 (sub_1800661E4.c)
 * Callees:
 *     sub_18003A22C @ 0x18003A22C (sub_18003A22C.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180064028 @ 0x180064028 (sub_180064028.c)
 *     sub_1800640A4 @ 0x1800640A4 (sub_1800640A4.c)
 *     sub_180065F7C @ 0x180065F7C (sub_180065F7C.c)
 *     sub_180065FA8 @ 0x180065FA8 (sub_180065FA8.c)
 */

int __fastcall sub_180066090(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  int v4; // eax
  _QWORD *v5; // r15
  _QWORD *v6; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  SIZE_T v13; // rdi
  __int64 v14; // rbp
  HANDLE ProcessHeap; // rax
  char *v16; // rcx
  char *v17; // rbx
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax

  *(_DWORD *)(a1 + 4) = a3;
  v3 = (_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 4);
  v5 = (_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = (_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 8) = v4;
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 56);
  LOBYTE(v4) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 26) = v4;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 128);
  v9 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 48) = v9;
  v10 = sub_180065FA8(*(_QWORD *)(a2 + 16));
  v11 = sub_180065F7C(*(_QWORD *)(a2 + 48)) + v10;
  v12 = sub_180065F7C(*(_QWORD *)(a2 + 120));
  v13 = v12 + v11;
  if ( !*(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 72) < v13 )
  {
    v12 = (__int64)sub_18003A22C(8u, v13);
    v14 = v12;
    if ( v12 )
    {
      ProcessHeap = GetProcessHeap();
      LODWORD(v12) = HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 64));
      *(_QWORD *)(a1 + 64) = v14;
      *(_QWORD *)(a1 + 72) = v13;
    }
  }
  v16 = *(char **)(a1 + 64);
  if ( v16 )
  {
    v17 = &v16[*(_QWORD *)(a1 + 72)];
    v18 = sub_180064028(v16, v17, *(_BYTE **)(a2 + 48), v3);
    v19 = sub_180064028(v18, v17, *(_BYTE **)(a2 + 120), v5);
    v20 = sub_1800640A4(v19, v17, *(_WORD **)(a2 + 16), v6);
    LODWORD(v12) = (unsigned int)memset(v20, 0, v17 - v20);
  }
  return v12;
}
