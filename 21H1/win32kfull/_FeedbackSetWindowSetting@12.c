/*
 * XREFs of _FeedbackSetWindowSetting@12 @ 0xA26BC
 * Callers:
 *     _NtUserSetWindowFeedbackSetting@20 @ 0xA25DE (_NtUserSetWindowFeedbackSetting@20.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

int __fastcall FeedbackSetWindowSetting(int a1, char a2, int a3)
{
  int v4; // edx

  v4 = (_GetProp(a1, (unsigned __int16)gatomFeedbackSettings, 1) | (0x10000 << a2)) & ~(1 << a2);
  if ( a3 )
    v4 |= 1 << a2;
  InternalSetProp(v4, 5);
  return 1;
}
