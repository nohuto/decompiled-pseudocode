/*
 * XREFs of HalpInsertProfileSource @ 0x1404BF050
 * Callers:
 *     EmonAddProfileSource @ 0x1404D3000 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DD700 (Amd64AddProfileSource.c)
 * Callees:
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 */

char __fastcall HalpInsertProfileSource(__int64 a1, _QWORD **a2, int a3, _QWORD *a4)
{
  int v4; // esi
  _QWORD *v5; // rdi
  _QWORD **v9; // rbx
  _DWORD *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rcx

  *a4 = 0LL;
  v4 = a3 + 1;
  v5 = *a2;
  v9 = a2;
  if ( *a2 == a2 )
  {
LABEL_7:
    *(_DWORD *)a1 = v4;
    v11 = (_QWORD *)(a1 + 8);
    v12 = v9[1];
    if ( (_QWORD **)*v12 != v9 )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(a1 + 16) = v12;
    *v12 = v11;
    v9[1] = v11;
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v10 = v5 - 1;
      if ( !wcsncmp((const wchar_t *)v5[24], *(const wchar_t **)(a1 + 200), 0xFFuLL) )
        break;
      if ( v4 == *v10 )
      {
        v9 = (_QWORD **)*v5;
        ++v4;
      }
      if ( !v4 )
        return 0;
      v5 = (_QWORD *)*v5;
      if ( v5 == a2 )
        goto LABEL_7;
    }
    *a4 = v10;
    return 0;
  }
}
