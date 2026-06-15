/*
 * XREFs of sub_1800B786C @ 0x1800B786C
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18005D370 @ 0x18005D370 (sub_18005D370.c)
 */

_QWORD *__fastcall sub_1800B786C(_QWORD *a1)
{
  _DWORD *v2; // rax
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  _DWORD *v6; // rbx

  v2 = sub_180055F40(0x50uLL);
  v6 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = off_180154DA0;
    sub_18005D370((__int64)(v2 + 4), v3, v4, v5);
  }
  else
  {
    v6 = 0LL;
  }
  a1[1] = v6;
  *a1 = v6 + 4;
  return a1;
}
