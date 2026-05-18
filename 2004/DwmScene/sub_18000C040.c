/*
 * XREFs of sub_18000C040 @ 0x18000C040
 * Callers:
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 * Callees:
 *     sub_18000C404 @ 0x18000C404 (sub_18000C404.c)
 */

void __fastcall sub_18000C040(char **a1)
{
  char **v1; // rbp
  char **v2; // rdi
  char *v3; // rsi
  char *v4; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 10;
  v2 = a1;
  do
  {
    v3 = *v2;
    while ( v3 )
    {
      v4 = v3;
      v3 = (char *)*((_QWORD *)v3 + 1);
      sub_18000C404(v4 + 16);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *v2++ = 0LL;
  }
  while ( v2 != v1 );
}
