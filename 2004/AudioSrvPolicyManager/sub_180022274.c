/*
 * XREFs of sub_180022274 @ 0x180022274
 * Callers:
 *     sub_180021710 @ 0x180021710 (sub_180021710.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 */

__int64 *__fastcall sub_180022274(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v4; // rdi
  int v5; // r9d
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 *i; // rcx
  __int64 v11; // rcx
  __int64 *result; // rax

  v2 = (__int64 *)qword_18004F5A8;
  v4 = qword_18004F588;
  if ( qword_18004F5A8 )
    goto LABEL_12;
  v5 = qword_18004F5B0;
  if ( (_DWORD)qword_18004F5B0 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)qword_18004F5B0 < 0x18 )
    {
      v8 = 0LL;
      goto LABEL_9;
    }
    v6 = 24LL * (unsigned int)qword_18004F5B0;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (_QWORD *)o_malloc(v6 + 8);
  v8 = v7;
  if ( !v7 )
    goto LABEL_16;
  *v7 = qword_18004F5A0;
  v5 = qword_18004F5B0;
  v2 = (__int64 *)qword_18004F5A8;
  qword_18004F5A0 = (__int64)v7;
LABEL_9:
  if ( !v8 )
LABEL_16:
    sub_18000A174(-2147024882);
  v9 = v5 - 1;
  for ( i = &v8[2 * (v5 - 1) + 1 + (unsigned int)(v5 - 1)]; v9 >= 0; --v9 )
  {
    *i = (__int64)v2;
    v2 = i;
    qword_18004F5A8 = (__int64)i;
    i -= 3;
  }
LABEL_12:
  v11 = *v2;
  v2[2] = *a2;
  qword_18004F5A8 = v11;
  v2[1] = 0LL;
  *v2 = v4;
  ++qword_18004F598;
  if ( qword_18004F588 )
    *(_QWORD *)(qword_18004F588 + 8) = v2;
  else
    qword_18004F590 = (__int64)v2;
  result = v2;
  qword_18004F588 = (__int64)v2;
  return result;
}
