/*
 * XREFs of sub_180071050 @ 0x180071050
 * Callers:
 *     sub_180063764 @ 0x180063764 (sub_180063764.c)
 * Callees:
 *     sub_180001374 @ 0x180001374 (sub_180001374.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18007427C @ 0x18007427C (sub_18007427C.c)
 *     sub_1800765F8 @ 0x1800765F8 (sub_1800765F8.c)
 */

_QWORD *__fastcall sub_180071050(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = a1 + 6;
  sub_18001E380();
  if ( (*((_BYTE *)v2 + 44) & 1) != 0 )
    sub_18007427C(v2);
  sub_18000F390();
  if ( *v2 )
  {
    TpSetTimer(*v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*v2, 1LL);
  }
  v3 = a1[16];
  if ( v3 )
    TpWaitForTimer(v3, 1LL);
  v4 = a1[20];
  if ( v4 )
    TpWaitForTimer(v4, 1LL);
  sub_18001E380();
  while ( 1 )
  {
    v5 = sub_180001374(a1 + 22);
    if ( !v5 )
      break;
    sub_1800765F8(a1 + 22, v5 - 1168);
  }
  result = sub_18000F390();
  v7 = a1[24];
  if ( v7 )
  {
    TpSetTimer(v7, 0LL, 0LL, 0LL);
    result = (_QWORD *)TpWaitForTimer(a1[24], 1LL);
  }
  v8 = a1[27];
  if ( v8 )
  {
    TpWaitForWork(v8, 0LL);
    return (_QWORD *)TpReleaseWork(a1[27]);
  }
  return result;
}
