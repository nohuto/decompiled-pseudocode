/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@InkFeedbackServer@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF5952
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AC2B0 (-ProcessInkFeedbackCommand@InkProcessor@@QAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     ?RunForAllProviders@InkFeedbackServer@@AAEJW4INK_FEEDBACK_COMMAND@@PBXIP6GJPAVInkFeedbackProviderBase@@01I@Z@Z @ 0xF5970 (-RunForAllProviders@InkFeedbackServer@@AAEJW4INK_FEEDBACK_COMMAND@@PBXIP6GJPAVInkFeedbackProvide.c)
 */

int __stdcall InkFeedbackServer::PreProcessInkFeedbackCommand_NoLock(int a1, int a2, int a3)
{
  return InkFeedbackServer::RunForAllProviders(
           a1,
           a2,
           a3,
           lambda_826f554c9a160ca3ab10588318342d50_::_lambda_invoker_stdcall_);
}
