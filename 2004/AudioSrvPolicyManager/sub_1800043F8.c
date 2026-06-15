/*
 * XREFs of sub_1800043F8 @ 0x1800043F8
 * Callers:
 *     sub_180004E28 @ 0x180004E28 (sub_180004E28.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_1800043F8(__int64 a1)
{
  char *v1; // rbx
  char *v3; // rsi
  char *v4; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax
  BOOL result; // eax

  v1 = *(char **)(a1 + 24);
  v3 = &v1[80 * *(unsigned __int16 *)(a1 + 32)];
  if ( v1 != v3 )
  {
    v4 = v1 + 64;
    do
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)v4);
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      v4 += 80;
    }
    while ( v4 - 64 != v3 );
    v1 = *(char **)(a1 + 24);
  }
  v6 = GetProcessHeap();
  result = HeapFree(v6, 0, v1);
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
