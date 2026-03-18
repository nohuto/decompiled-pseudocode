/*
 * XREFs of sub_1C003321C @ 0x1C003321C
 * Callers:
 *     sub_1C0033580 @ 0x1C0033580 (sub_1C0033580.c)
 *     sub_1C0053330 @ 0x1C0053330 (sub_1C0053330.c)
 *     sub_1C0053480 @ 0x1C0053480 (sub_1C0053480.c)
 *     sub_1C0053670 @ 0x1C0053670 (sub_1C0053670.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C003321C(unsigned __int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  char v3; // r9
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int16 *v7; // rax

  v2 = *a2;
  v3 = 1;
  v4 = (*a2)[1];
  if ( v4 == 2 || v4 == 1 )
  {
    if ( *v2 < 8u )
      goto LABEL_12;
    v5 = v2[3];
    v6 = (unsigned int)v5 < 0xC;
  }
  else
  {
    v5 = *v2;
    v6 = (unsigned int)v5 < 4;
  }
  if ( v6 )
    goto LABEL_12;
  v7 = (unsigned __int16 *)((char *)v2 + v5);
  if ( v7 == (unsigned __int16 *)a1 )
  {
LABEL_13:
    *a2 = 0LL;
    return v3;
  }
  if ( (unsigned __int64)v7 > a1 || (unsigned __int64)(v7 + 2) > a1 || (unsigned __int64)v7 + *v7 > a1 )
  {
LABEL_12:
    v3 = 0;
    goto LABEL_13;
  }
  *a2 = v7;
  return v3;
}
