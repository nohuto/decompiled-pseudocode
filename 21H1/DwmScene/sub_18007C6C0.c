/*
 * XREFs of sub_18007C6C0 @ 0x18007C6C0
 * Callers:
 *     sub_18007DA58 @ 0x18007DA58 (sub_18007DA58.c)
 *     sub_180101AE4 @ 0x180101AE4 (sub_180101AE4.c)
 *     sub_180101BB4 @ 0x180101BB4 (sub_180101BB4.c)
 * Callees:
 *     sub_18007CFE4 @ 0x18007CFE4 (sub_18007CFE4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18007C6C0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  if ( a2 > 0x100 )
  {
    v4 = 0x7FFFFFFFFFFFFFFFLL;
    if ( a2 != 0x7FFFFFFFFFFFFFFFLL )
      v4 = a2;
    sub_18007CFE4(&v7, v4);
    if ( v8 <= 0x100 )
    {
      j__o_free(v7);
      v5 = a1 + 2;
      a1[1] = 256LL;
    }
    else
    {
      v5 = v7;
      a1[1] = v8;
    }
    *a1 = v5;
  }
  else
  {
    a1[1] = a2;
    *a1 = a1 + 2;
  }
  return a1;
}
