/*
 * XREFs of sub_180019BE4 @ 0x180019BE4
 * Callers:
 *     sub_180019A90 @ 0x180019A90 (sub_180019A90.c)
 * Callees:
 *     sub_180019AE8 @ 0x180019AE8 (sub_180019AE8.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_180019BE4(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char *v4; // r8
  unsigned __int64 v5; // rdx
  char *v6; // rcx
  __int64 v7; // rcx
  void **v8; // rsi
  void **v9; // rbx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    v3 = (*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v5 = v3 + 39;
      v6 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        __debugbreak();
        JUMPOUT(0x180019C9ELL);
      }
      v2 = v4;
    }
    sub_180039D98(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 8);
  **(_QWORD **)(v7 + 8) = 0LL;
  v8 = *(void ***)v7;
  if ( *(_QWORD *)v7 )
  {
    do
    {
      v9 = (void **)*v8;
      sub_180019AE8(v8 + 3);
      sub_180039D98(v8);
      v8 = v9;
    }
    while ( v9 );
  }
  return sub_180039D98(*(void **)(a1 + 8));
}
