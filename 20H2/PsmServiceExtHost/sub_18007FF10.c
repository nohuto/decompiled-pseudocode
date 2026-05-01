/*
 * XREFs of sub_18007FF10 @ 0x18007FF10
 * Callers:
 *     sub_1800806D0 @ 0x1800806D0 (sub_1800806D0.c)
 *     sub_180080768 @ 0x180080768 (sub_180080768.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 */

_QWORD *__fastcall sub_18007FF10(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *result; // rax
  __int64 v3; // rbx

  v1 = 0LL;
  while ( 1 )
  {
    result = sub_18003CF94(a1, 3, v1);
    v3 = (__int64)result;
    if ( !result )
      break;
    RtlWakeAllConditionVariable(result + 85);
    sub_1800093A0(v3, 0);
    sub_18001CC80(v3, 0);
    sub_18000A110(v3);
    v1 = (_QWORD *)v3;
    a1 = *(_QWORD *)(*(_QWORD *)(v3 + 776) + 88LL);
  }
  return result;
}
