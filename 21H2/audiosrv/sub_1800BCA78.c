/*
 * XREFs of sub_1800BCA78 @ 0x1800BCA78
 * Callers:
 *     sub_1800BCCD0 @ 0x1800BCCD0 (sub_1800BCCD0.c)
 *     sub_180132A3C @ 0x180132A3C (sub_180132A3C.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800BA78C @ 0x1800BA78C (sub_1800BA78C.c)
 *     sub_1800BCC48 @ 0x1800BCC48 (sub_1800BCC48.c)
 */

__int64 __fastcall sub_1800BCA78(_WORD *a1, size_t a2, _WORD *a3, _QWORD *a4, _QWORD *a5, int a6)
{
  __int16 v6; // r15
  size_t v8; // rdi
  int v11; // ebx
  _WORD *v12; // rbp
  _WORD *v13; // rax
  size_t v15[2]; // [rsp+30h] [rbp-38h] BYREF
  _WORD *v16; // [rsp+78h] [rbp+10h] BYREF

  v6 = a6;
  v8 = a2 >> 1;
  v11 = 0;
  if ( (a6 & 0x100) != 0 )
  {
    if ( !a1 && v8 || v8 > 0x7FFFFFFF )
      v11 = -2147024809;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *a1 = 0;
    return (unsigned int)v11;
  }
  v16 = a1;
  v12 = a1;
  v15[0] = a2 >> 1;
  if ( (a6 & 0x100) != 0 )
  {
    v13 = &unk_18015C744;
    if ( a3 )
      v13 = a3;
    a3 = v13;
  }
  v11 = 0;
  if ( (a6 & 0xFFFFE000) == 0 )
  {
    if ( v8 )
    {
      v16 = 0LL;
      v11 = sub_1800BCC48(a1, v8, &v16, a3);
      v8 -= (unsigned __int64)v16;
      v15[0] = v8;
      v12 = &a1[(_QWORD)v16];
      v16 = v12;
      if ( v11 < 0 )
        goto LABEL_24;
      if ( (v6 & 0x200) != 0 )
      {
        a3 = (_WORD *)((a2 & 1) + 2 * v8);
        if ( (unsigned __int64)a3 > 2 )
          memset(v12 + 1, (unsigned __int8)v6, (size_t)(a3 - 1));
      }
    }
    else
    {
      if ( !*a3 )
        goto LABEL_29;
      v11 = a1 != 0LL ? -2147024774 : -2147024809;
    }
    if ( v11 < 0 )
      goto LABEL_24;
LABEL_29:
    if ( a4 )
      *a4 = v12;
    if ( a5 )
      *a5 = (a2 & 1) + 2 * v8;
    return (unsigned int)v11;
  }
  v11 = -2147024809;
  if ( v8 )
    *a1 = 0;
LABEL_24:
  if ( (v6 & 0x1C00) != 0 && a2 )
  {
    sub_1800BA78C(a1, a2, (__int64)a3, &v16, v15, v6);
    v12 = v16;
    v8 = v15[0];
  }
  if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147024774 )
    goto LABEL_29;
  return (unsigned int)v11;
}
