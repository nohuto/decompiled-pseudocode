/*
 * XREFs of sub_180075688 @ 0x180075688
 * Callers:
 *     sub_1800759A8 @ 0x1800759A8 (sub_1800759A8.c)
 * Callees:
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 *     sub_180075D24 @ 0x180075D24 (sub_180075D24.c)
 */

void __fastcall sub_180075688(_WORD *a1, unsigned int a2, char a3)
{
  size_t v3; // rsi
  char v4; // r14
  bool v5; // r12
  char v6; // r13
  _WORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rbp
  int v11; // eax
  int (__cdecl *v12)(const void *, const void *); // r9

  v3 = a2;
  v4 = a3 & 1;
  v5 = 0;
  v6 = a3;
  if ( a2 )
  {
    v8 = a1 + 30;
    v9 = a2;
    do
    {
      v10 = *(_QWORD *)(v8 - 6);
      if ( v4 && (unsigned __int8)sub_180075D24(*(_QWORD *)(v8 - 6), v8 - 30) )
      {
        *v8 |= 0x8000u;
      }
      else if ( !v5 && sub_180071270(v10) )
      {
        v11 = sub_180033D1C(*(_QWORD *)(v10 + 48) + 400LL, v10, 1);
        v5 = (v11 & *(_DWORD *)(v10 + 1244)) != v11;
      }
      v8 += 32;
      --v9;
    }
    while ( v9 );
    v6 = a3;
  }
  v12 = (int (__cdecl *)(const void *, const void *))sub_1800750F0;
  if ( (v6 & 0x10) == 0 )
    v12 = (int (__cdecl *)(const void *, const void *))sub_180075180;
  qsort(a1, v3, 0x40uLL, v12);
}
