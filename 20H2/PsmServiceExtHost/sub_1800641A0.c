/*
 * XREFs of sub_1800641A0 @ 0x1800641A0
 * Callers:
 *     sub_180065BE0 @ 0x180065BE0 (sub_180065BE0.c)
 * Callees:
 *     sub_1800383E4 @ 0x1800383E4 (sub_1800383E4.c)
 *     sub_180064644 @ 0x180064644 (sub_180064644.c)
 */

int __fastcall sub_1800641A0(_QWORD *a1)
{
  _UNKNOWN **v1; // rax
  char **v2; // rdi
  char **v4; // r14
  char *v5; // rbp
  char *v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = (char **)(a1 + 5);
  v4 = (char **)(a1 + 15);
  while ( v2 != v4 )
  {
    v5 = *v2;
    while ( v5 )
    {
      v6 = v5;
      v5 = (char *)*((_QWORD *)v5 + 1);
      sub_180064644(v6 + 16);
      ProcessHeap = GetProcessHeap();
      LODWORD(v1) = HeapFree(ProcessHeap, 0, v6);
    }
    *v2++ = 0LL;
  }
  v8 = (void *)a1[3];
  if ( v8 )
    LODWORD(v1) = sub_1800383E4(v8);
  v9 = (void *)a1[2];
  if ( v9 )
    LODWORD(v1) = sub_1800383E4(v9);
  v10 = (void *)a1[1];
  if ( v10 )
    LODWORD(v1) = sub_1800383E4(v10);
  return (int)v1;
}
