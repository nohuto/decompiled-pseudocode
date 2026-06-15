/*
 * XREFs of sub_18014059C @ 0x18014059C
 * Callers:
 *     sub_18013EE38 @ 0x18013EE38 (sub_18013EE38.c)
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_18013ED04 @ 0x18013ED04 (sub_18013ED04.c)
 *     sub_18013FE74 @ 0x18013FE74 (sub_18013FE74.c)
 */

__int64 __fastcall sub_18014059C(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = sub_18013FE74(a1, a2, (int *)&v9, (unsigned int *)&v11, v10);
  v7 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 8) != *a3 )
      sub_1800579A4((_QWORD *)(v6 + 8), *a3);
  }
  else
  {
    v7 = sub_18013ED04(a1, a2, v9, v11);
    v11 = v7;
    if ( *(_QWORD *)(v7 + 8) != *a3 )
      sub_1800579A4((_QWORD *)(v7 + 8), *a3);
  }
  return v7;
}
