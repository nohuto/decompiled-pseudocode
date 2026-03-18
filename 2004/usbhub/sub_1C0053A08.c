/*
 * XREFs of sub_1C0053A08 @ 0x1C0053A08
 * Callers:
 *     sub_1C00513E0 @ 0x1C00513E0 (sub_1C00513E0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

char __fastcall sub_1C0053A08(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  _DWORD *v9; // rax
  char *v10; // r9
  __int16 v11; // dx
  _WORD *v12; // rcx

  sub_1C000F050(a1);
  v9 = sub_1C0011220(a2);
  v10 = *(char **)(a3 + 8);
  v11 = *(_WORD *)v10;
  if ( *(_WORD *)v10 )
  {
    v12 = *(_WORD **)(a3 + 8);
    do
    {
      if ( (unsigned __int16)(v11 - 32) > 0x5Fu || v11 == 44 )
      {
        sub_1C004A608(a1, *((_WORD *)v9 + 714), 0x27u, v10, *(_DWORD *)(a3 + 4), -1073741811, -1072693248, aDqC, 283, 0);
        goto LABEL_11;
      }
      v11 = *++v12;
    }
    while ( *v12 );
    if ( a4 )
      *a4 = 0;
    return 1;
  }
  else
  {
    *a5 = 1;
    sub_1C004A608(a1, *((_WORD *)v9 + 714), 0x27u, v10, *(_DWORD *)(a3 + 4), -1073741811, -1072693248, aDqC, 270, 0);
LABEL_11:
    if ( a4 )
      *a4 = -1072693248;
    return 0;
  }
}
