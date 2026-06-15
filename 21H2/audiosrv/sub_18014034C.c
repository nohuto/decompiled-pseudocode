/*
 * XREFs of sub_18014034C @ 0x18014034C
 * Callers:
 *     sub_18013EE38 @ 0x18013EE38 (sub_18013EE38.c)
 * Callees:
 *     sub_18013FE74 @ 0x18013FE74 (sub_18013FE74.c)
 *     sub_180140398 @ 0x180140398 (sub_180140398.c)
 */

char __fastcall sub_18014034C(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v5[0] = 0LL;
  v3 = sub_18013FE74(a1, a2, &v7, &v6, v5);
  if ( v3 )
  {
    sub_180140398(a1, v3, v5[0]);
    LOBYTE(v3) = 1;
  }
  return v3;
}
