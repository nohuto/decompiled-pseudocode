/*
 * XREFs of sub_1C0031080 @ 0x1C0031080
 * Callers:
 *     sub_1C0002D20 @ 0x1C0002D20 (sub_1C0002D20.c)
 *     sub_1C0003070 @ 0x1C0003070 (sub_1C0003070.c)
 *     sub_1C0003180 @ 0x1C0003180 (sub_1C0003180.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001BAA4 @ 0x1C001BAA4 (sub_1C001BAA4.c)
 *     sub_1C002EB90 @ 0x1C002EB90 (sub_1C002EB90.c)
 *     sub_1C0033FC4 @ 0x1C0033FC4 (sub_1C0033FC4.c)
 *     sub_1C00342BC @ 0x1C00342BC (sub_1C00342BC.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C003A5DC @ 0x1C003A5DC (sub_1C003A5DC.c)
 *     sub_1C003B69C @ 0x1C003B69C (sub_1C003B69C.c)
 */

void __fastcall sub_1C0031080(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  __int16 v6; // r9
  __int16 v7; // r13
  unsigned __int16 i; // bp
  int v9; // r10d
  _DWORD *v10; // rbx
  void *v11; // rcx
  void *v12; // rcx
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 2048, 1114862657, 0LL, 0LL);
  sub_1C002EB90(a1);
  sub_1C000FD80(a1, 2048, 1346458929, 0LL, 0LL);
  v5 = *((_QWORD *)v4 + 382);
  v7 = v6 + 1;
  for ( i = v6 + 1; i <= *((unsigned __int8 *)sub_1C000F050(a1) + 2938); i += v7 )
  {
    v13 = 0;
    sub_1C00342BC(a1, i, a2);
    sub_1C000A080(a1, i, (__int64)&v13, 0LL);
    sub_1C000FD80(a1, 2048, 1937010756, v5, (unsigned __int16)v13);
    if ( v9 >= 0 && (v13 & 2) != 0 )
      sub_1C0037200(a1, v5);
    sub_1C0033FC4(a1, v5, a2);
    v5 += 2928LL;
  }
  sub_1C003A5DC(a1, a2);
  v10 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 4, 1212764791, a1, (int)v10[685]);
  sub_1C001BAA4(a1);
  KeWaitForSingleObject(v10 + 686, Executive, 0, 0, 0LL);
  sub_1C003B69C(a1, v4 + 680);
  sub_1C003B69C(a1, v4 + 682);
  sub_1C003B69C(a1, v4 + 692);
  sub_1C003B69C(a1, v4 + 694);
  IoFreeIrp(*((PIRP *)v4 + 333));
  v11 = (void *)*((_QWORD *)v4 + 334);
  *((_QWORD *)v4 + 333) = 0LL;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v4 + 334) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v4 + 335);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v4 + 335) = 0LL;
  }
}
