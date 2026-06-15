/*
 * XREFs of sub_180018B08 @ 0x180018B08
 * Callers:
 *     sub_18001802C @ 0x18001802C (sub_18001802C.c)
 *     sub_180018138 @ 0x180018138 (sub_180018138.c)
 *     sub_180018BEC @ 0x180018BEC (sub_180018BEC.c)
 * Callees:
 *     sub_180018FD4 @ 0x180018FD4 (sub_180018FD4.c)
 *     memset @ 0x18003A7D8 (memset.c)
 */

char __fastcall sub_180018B08(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 v4; // rsi
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  SIZE_T v8; // rbx
  HANDLE v9; // rax
  void *v10; // rax

  v4 = a2;
  v6 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
    *(_QWORD *)a1 = 0LL;
  }
  if ( !a3 )
    goto LABEL_8;
  v8 = 8 * v4;
  if ( !is_mul_ok(v4, 8uLL) )
    v8 = -1LL;
  v9 = GetProcessHeap();
  v10 = HeapAlloc(v9, 0, v8);
  *(_QWORD *)a1 = v10;
  if ( v10 )
  {
    memset(v10, 0, 8 * v4);
LABEL_8:
    *(_DWORD *)(a1 + 16) = v4;
    sub_180018FD4(a1);
    LOBYTE(v10) = 1;
  }
  return (char)v10;
}
