/*
 * XREFs of sub_18003ADE8 @ 0x18003ADE8
 * Callers:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 * Callees:
 *     sub_18003AE4C @ 0x18003AE4C (sub_18003AE4C.c)
 *     sub_180065FF4 @ 0x180065FF4 (sub_180065FF4.c)
 */

__int64 __fastcall sub_18003ADE8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // r8
  int v6; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = 0LL;
  v9 = 0LL;
  v4 = sub_18003AE4C(a1, a2, &v9);
  v6 = v4;
  if ( v4 < 0 )
  {
    sub_180065FF4(retaddr, 98LL, v5, (unsigned int)v4);
  }
  else
  {
    v2 = v9;
    v6 = 0;
  }
  if ( v6 < 0 )
  {
    sub_180065FF4(retaddr, 107LL, v5, (unsigned int)v6);
    return (unsigned int)v6;
  }
  else
  {
    *a2 = 4 * v2;
    return 0LL;
  }
}
