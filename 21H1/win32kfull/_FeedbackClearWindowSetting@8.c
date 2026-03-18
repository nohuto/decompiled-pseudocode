/*
 * XREFs of _FeedbackClearWindowSetting@8 @ 0x148D82
 * Callers:
 *     _NtUserSetWindowFeedbackSetting@20 @ 0xA25DE (_NtUserSetWindowFeedbackSetting@20.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

int __fastcall FeedbackClearWindowSetting(int a1, char a2)
{
  int Prop; // eax

  Prop = _GetProp(a1, (unsigned __int16)gatomFeedbackSettings, 1);
  InternalSetProp(a1, (unsigned __int16)gatomFeedbackSettings, Prop & ~(65537 << a2), 5);
  return 1;
}
