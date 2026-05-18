/*
 * XREFs of sub_1800A71B4 @ 0x1800A71B4
 * Callers:
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800A71B4(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // rcx
  _QWORD *v5; // rax
  char *v6; // r8
  __int64 v7; // r10
  signed __int64 v8; // r8
  unsigned __int16 v9; // r11
  int v10; // eax

  if ( a1 == a2 )
    return 1;
  v3 = (_QWORD *)(a3 + 16);
  v4 = (__int64)a1 - a3;
  while ( 1 )
  {
    v5 = v3 - 2;
    if ( v3[1] >= 8uLL )
      v5 = (_QWORD *)*v5;
    v6 = (char *)v3 + v4 - 16;
    if ( *(_QWORD *)((char *)v3 + v4 + 8) >= 8uLL )
      v6 = *(char **)v6;
    v7 = *(_QWORD *)((char *)v3 + v4);
    if ( v7 != *v3 )
      return 0;
    if ( v7 )
    {
      v8 = v6 - (char *)v5;
      while ( 1 )
      {
        v9 = *(_WORD *)((char *)v5 + v8);
        if ( v9 != *(_WORD *)v5 )
          break;
        v5 = (_QWORD *)((char *)v5 + 2);
        if ( !--v7 )
          goto LABEL_12;
      }
      v10 = v9 < *(_WORD *)v5 ? -1 : 1;
    }
    else
    {
LABEL_12:
      v10 = 0;
    }
    if ( v10 )
      return 0;
    v3 += 4;
    if ( (_QWORD *)((char *)v3 + v4 - 16) == a2 )
      return 1;
  }
}
