/*
 * XREFs of sub_180030498 @ 0x180030498
 * Callers:
 *     sub_1800301A0 @ 0x1800301A0 (sub_1800301A0.c)
 *     sub_18003CA71 @ 0x18003CA71 (sub_18003CA71.c)
 * Callees:
 *     sub_180019AE8 @ 0x180019AE8 (sub_180019AE8.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_180030498(_QWORD *a1, _QWORD *a2, unsigned __int8 *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx

  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = a3[v5++ + 16];
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  while ( v5 < 8 );
  v9 = a1[3];
  v10 = 2 * (v6 & a1[6]);
  if ( *(unsigned __int8 **)(v9 + 16 * (v6 & a1[6]) + 8) == a3 )
  {
    if ( *(unsigned __int8 **)(v9 + 16 * (v6 & a1[6])) == a3 )
    {
      *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = *((_QWORD *)a3 + 1);
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(unsigned __int8 **)(v9 + 16 * (v6 & a1[6])) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = *(_QWORD *)a3;
  }
  v12 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  sub_180019AE8((void **)a3 + 3);
  sub_180039D98(a3);
  *a2 = v12;
  return a2;
}
