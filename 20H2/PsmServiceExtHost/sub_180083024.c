/*
 * XREFs of sub_180083024 @ 0x180083024
 * Callers:
 *     sub_1800826B0 @ 0x1800826B0 (sub_1800826B0.c)
 * Callees:
 *     sub_180082F4C @ 0x180082F4C (sub_180082F4C.c)
 */

void __fastcall sub_180083024(__int64 a1)
{
  __int64 v1; // rdi
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // esi
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx

  v1 = a1 + 16;
  v3 = (*(_BYTE *)(a1 + 24) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v6 = (_QWORD *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v6 = 0LL;
        }
        v7 = *(_QWORD *)(v4 + 8);
        if ( !v7 )
          break;
        v8 = v4;
        if ( v5 )
          v4 ^= v7;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v8 + 8) = 0LL;
      }
      v9 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= v4;
      sub_180082F4C((void *)v4);
      if ( !v9 )
        break;
      v4 = v9;
    }
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_DWORD *)(a1 + 32) &= ~1u;
}
