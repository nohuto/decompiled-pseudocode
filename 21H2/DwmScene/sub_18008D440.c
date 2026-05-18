/*
 * XREFs of sub_18008D440 @ 0x18008D440
 * Callers:
 *     sub_180071EE8 @ 0x180071EE8 (sub_180071EE8.c)
 *     sub_18008BBC4 @ 0x18008BBC4 (sub_18008BBC4.c)
 *     sub_18008CA30 @ 0x18008CA30 (sub_18008CA30.c)
 *     sub_18008CAD4 @ 0x18008CAD4 (sub_18008CAD4.c)
 *     sub_18008CBC4 @ 0x18008CBC4 (sub_18008CBC4.c)
 *     sub_18008CF70 @ 0x18008CF70 (sub_18008CF70.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_18008DF3C @ 0x18008DF3C (sub_18008DF3C.c)
 *     sub_18008E204 @ 0x18008E204 (sub_18008E204.c)
 *     sub_18008EA94 @ 0x18008EA94 (sub_18008EA94.c)
 *     sub_1800C27F0 @ 0x1800C27F0 (sub_1800C27F0.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 *     sub_18011DC10 @ 0x18011DC10 (sub_18011DC10.c)
 *     sub_18011DE50 @ 0x18011DE50 (sub_18011DE50.c)
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 *     sub_18011E370 @ 0x18011E370 (sub_18011E370.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18008D440(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 40);
  }
  *a2 = *(_QWORD *)(a1 + 32);
  result = a2;
  a2[1] = v2;
  return result;
}
