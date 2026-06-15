/*
 * XREFs of sub_180008E98 @ 0x180008E98
 * Callers:
 *     sub_180008C50 @ 0x180008C50 (sub_180008C50.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_180008E98(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char *v4; // r8
  unsigned __int64 v5; // rdx
  char *v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx

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
        JUMPOUT(0x180008F52LL);
      }
      v2 = v4;
    }
    sub_180039D98(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v7 = *(_QWORD ***)(a1 + 8);
  *v7[1] = 0LL;
  v8 = *v7;
  if ( *v7 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      sub_180009CF0(v8 + 2);
      sub_180039D98(v8);
      v8 = v9;
    }
    while ( v9 );
  }
  return sub_180039D98(*(void **)(a1 + 8));
}
