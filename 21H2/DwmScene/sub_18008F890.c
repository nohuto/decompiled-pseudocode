/*
 * XREFs of sub_18008F890 @ 0x18008F890
 * Callers:
 *     sub_18008F9D4 @ 0x18008F9D4 (sub_18008F9D4.c)
 * Callees:
 *     sub_18008A568 @ 0x18008A568 (sub_18008A568.c)
 *     sub_18008F62C @ 0x18008F62C (sub_18008F62C.c)
 *     sub_18008F920 @ 0x18008F920 (sub_18008F920.c)
 */

_QWORD *__fastcall sub_18008F890(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD **v4; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned __int64 *v10; // rcx
  _QWORD *v11; // r8
  unsigned __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_QWORD **)(a1 + 1);
  v6 = (_QWORD *)a1[1];
  v7 = a3;
  if ( a3 == (_QWORD *)*v6 && a4 == v6 )
  {
    sub_18008F62C(a1 + 1);
    v10 = (unsigned __int64 *)a1[3];
    v13[0] = (unsigned __int64)*v4;
    sub_18008A568(v10, a1[4], v13);
    *a2 = **v4;
  }
  else
  {
    while ( v7 != a4 )
    {
      v11 = v7;
      v7 = (_QWORD *)*v7;
      sub_18008F920(a1, v13, v11);
    }
    *a2 = v7;
  }
  return a2;
}
