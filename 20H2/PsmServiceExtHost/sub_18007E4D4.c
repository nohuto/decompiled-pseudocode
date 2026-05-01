/*
 * XREFs of sub_18007E4D4 @ 0x18007E4D4
 * Callers:
 *     sub_18007E664 @ 0x18007E664 (sub_18007E664.c)
 * Callees:
 *     sub_180032A20 @ 0x180032A20 (sub_180032A20.c)
 *     sub_180035594 @ 0x180035594 (sub_180035594.c)
 */

_QWORD *__fastcall sub_18007E4D4(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v3; // eax
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  int v6; // eax
  unsigned __int64 v7; // r9
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD **)(a1 + 72);
  v11 = *(_QWORD *)(a2 - 32);
  while ( 1 )
  {
    if ( !v2 )
      return 0LL;
    v3 = sub_180032A20(&v11, (__int64)v2);
    if ( !v3 )
      break;
    if ( v3 >= 0 )
      v2 = (_QWORD *)v2[1];
    else
      v2 = (_QWORD *)*v2;
  }
  v4 = (_QWORD *)*v2;
  v5 = 0LL;
  if ( *v2 )
  {
    while ( 1 )
    {
      v6 = sub_180032A20(&v11, (__int64)v4);
      if ( v6 < 0 )
        goto LABEL_13;
      if ( v6 <= 0 )
        break;
      v4 = (_QWORD *)v4[1];
LABEL_14:
      if ( !v4 )
      {
        if ( v5 )
          v2 = v5;
        goto LABEL_17;
      }
    }
    v5 = v4;
LABEL_13:
    v4 = (_QWORD *)*v4;
    goto LABEL_14;
  }
LABEL_17:
  v7 = v11;
  while ( 1 )
  {
    v8 = 0LL;
    if ( v2[3] != v7 )
      break;
    v9 = (_QWORD *)v2[8];
    if ( v9 != v2 + 8 )
      v8 = v9 - 2;
    if ( v8 )
      break;
    v2 = (_QWORD *)sub_180035594((unsigned __int64)v2);
    if ( !v2 )
      return 0LL;
  }
  return v8;
}
