/*
 * XREFs of sub_18006A214 @ 0x18006A214
 * Callers:
 *     sub_180042B54 @ 0x180042B54 (sub_180042B54.c)
 *     sub_180042BF4 @ 0x180042BF4 (sub_180042BF4.c)
 *     sub_180042CF4 @ 0x180042CF4 (sub_180042CF4.c)
 *     sub_1800630C4 @ 0x1800630C4 (sub_1800630C4.c)
 *     sub_180063764 @ 0x180063764 (sub_180063764.c)
 *     sub_180069D40 @ 0x180069D40 (sub_180069D40.c)
 *     sub_180069DF0 @ 0x180069DF0 (sub_180069DF0.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_180027644 @ 0x180027644 (sub_180027644.c)
 *     sub_18006A338 @ 0x18006A338 (sub_18006A338.c)
 */

_QWORD *__fastcall sub_18006A214(__int64 a1)
{
  __int64 v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rcx
  char v5; // al
  int v6; // ebp
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *result; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx

  v1 = a1 + 40;
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      sub_18006A338(v4, 1LL);
      if ( !v10 )
        break;
      v4 = v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v11 = *(_QWORD **)(a1 + 32);
  if ( v11 )
    sub_180027644(v11);
  if ( *(_DWORD *)(a1 + 24) || *(_DWORD *)(a1 + 28) )
    NtDeleteWnfStateName(a1 + 24);
  result = (_QWORD *)sub_180008938((_QWORD *)(a1 + 8));
  if ( !(_DWORD)result )
  {
    v14 = *v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (result = (_QWORD *)v13[1], (_QWORD *)*result != v13) )
      __fastfail(3u);
    *result = v14;
    *(_QWORD *)(v14 + 8) = result;
  }
  return result;
}
