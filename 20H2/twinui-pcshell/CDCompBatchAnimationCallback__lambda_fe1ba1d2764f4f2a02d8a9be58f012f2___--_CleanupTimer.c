/*
 * XREFs of CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_CleanupTimer @ 0x180411474
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x180411670 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_InvokeCallback @ 0x1804116C4 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--_InvokeCallback.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x180411790 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc.c)
 *     CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::s_TimerWndProc @ 0x1804118B0 (CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--s_TimerWndProc.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::_CleanupTimer(__int64 a1)
{
  HWND v1; // rbx
  BOOL result; // eax

  v1 = *(HWND *)(a1 + 32);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    KillTimer(v1, 0x64uLL);
    return DestroyWindow(v1);
  }
  return result;
}
