/*
 * XREFs of sub_180036608 @ 0x180036608
 * Callers:
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 * Callees:
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 */

_QWORD *__fastcall sub_180036608(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  result = (_QWORD *)(a1 + 72);
  if ( (_QWORD *)*result != result )
    result = (_QWORD *)sub_18003667C(qword_1800B3DB0);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    TpSetTimer(v3, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 88), 1LL);
    return (_QWORD *)TpReleaseTimer(*(_QWORD *)(a1 + 88));
  }
  return result;
}
