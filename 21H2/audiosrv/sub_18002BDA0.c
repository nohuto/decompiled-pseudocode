/*
 * XREFs of sub_18002BDA0 @ 0x18002BDA0
 * Callers:
 *     sub_18002B430 @ 0x18002B430 (sub_18002B430.c)
 *     sub_1800CE6DC @ 0x1800CE6DC (sub_1800CE6DC.c)
 *     sub_1800CFB48 @ 0x1800CFB48 (sub_1800CFB48.c)
 *     sub_1800CFC78 @ 0x1800CFC78 (sub_1800CFC78.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180056C2C @ 0x180056C2C (sub_180056C2C.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

char __fastcall sub_18002BDA0(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 v4; // rsi
  SIZE_T v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rax

  v4 = a2;
  if ( *(_QWORD *)a1 )
  {
    sub_180033A70();
    *(_QWORD *)a1 = 0LL;
  }
  if ( !a3 )
    goto LABEL_8;
  v6 = 8 * v4;
  if ( !is_mul_ok(v4, 8uLL) )
    v6 = -1LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, v6);
  *(_QWORD *)a1 = v8;
  if ( v8 )
  {
    memset(v8, 0, 8 * v4);
LABEL_8:
    *(_DWORD *)(a1 + 16) = v4;
    sub_180056C2C(a1);
    LOBYTE(v8) = 1;
  }
  return (char)v8;
}
