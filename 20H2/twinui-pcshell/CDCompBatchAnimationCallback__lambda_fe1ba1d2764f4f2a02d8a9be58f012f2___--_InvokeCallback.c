/*
 * XREFs of CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InvokeCallback @ 0x1804116C4
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::OnAnimationCompleted @ 0x18040E950 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--OnAnimationCompleted.c)
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::OnEndBatchUpdate @ 0x18040EA80 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--OnEndBatchUpdate.c)
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::s_TimerWndProc @ 0x1804118B0 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--s_TimerWndProc.c)
 * Callees:
 *     _lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::operator() @ 0x18040C8A4 (_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_--operator().c)
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_CleanupTimer @ 0x180411474 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--_CleanupTimer.c)
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InvokeCallback(__int64 a1)
{
  BOOL result; // eax

  if ( *(_DWORD *)(a1 + 28) != 3 )
  {
    lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::operator()((WindowArrangementView **)(a1 + 16));
    *(_DWORD *)(a1 + 28) = 3;
    return CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_CleanupTimer(a1);
  }
  return result;
}
