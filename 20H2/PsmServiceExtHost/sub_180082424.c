/*
 * XREFs of sub_180082424 @ 0x180082424
 * Callers:
 *     sub_180082368 @ 0x180082368 (sub_180082368.c)
 *     sub_1800823D0 @ 0x1800823D0 (sub_1800823D0.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_18007BE20 @ 0x18007BE20 (sub_18007BE20.c)
 */

_QWORD *__fastcall sub_180082424(__int64 a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  RtlPublishWnfStateData(*(_QWORD *)(*(_QWORD *)a1 + 728LL), 0LL, &v5, 4LL, 0LL);
  for ( result = sub_18003CF94(*(_QWORD *)a1 + 128LL, 0, 0LL); ; result = sub_18007BE20(v4) )
  {
    v4 = result;
    if ( !result )
      break;
    sub_1800093A0((__int64)result, 0);
    sub_18001CC80((__int64)v4, 0);
    sub_18000A110((__int64)v4);
  }
  return result;
}
