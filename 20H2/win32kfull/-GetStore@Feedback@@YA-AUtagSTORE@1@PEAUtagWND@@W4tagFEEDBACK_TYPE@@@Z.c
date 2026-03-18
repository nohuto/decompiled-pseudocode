/*
 * XREFs of ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00C7330
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C00C71B4 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01DA910 (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01DA970 (FeedbackGetWindowSetting.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 */

__int64 *__fastcall Feedback::GetStore(__int64 *a1, __int64 a2)
{
  a1[1] = 0LL;
  *a1 = a2;
  *((_DWORD *)a1 + 2) = GetProp(a2, (unsigned __int16)gatomFeedbackSettings, 1LL);
  return a1;
}
