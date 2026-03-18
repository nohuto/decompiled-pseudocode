/*
 * XREFs of ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C002475C
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C0024798 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01DB5D0 (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01DB630 (FeedbackGetWindowSetting.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 */

__int64 *__fastcall Feedback::GetStore(__int64 *a1, __int64 a2)
{
  a1[1] = 0LL;
  *a1 = a2;
  *((_DWORD *)a1 + 2) = GetProp(a2, (unsigned __int16)gatomFeedbackSettings, 1LL);
  return a1;
}
