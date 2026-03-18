/*
 * XREFs of xxxSendSizeMessage @ 0x1C003C4E4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetClientRect @ 0x1C003C56C (_GetClientRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendSizeMessage(__int64 a1, int a2)
{
  int v3; // edi
  __int128 v5; // [rsp+50h] [rbp-18h] BYREF

  v3 = a1;
  v5 = 0LL;
  GetClientRect(a1, &v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           v3,
           5,
           a2,
           (unsigned __int16)(WORD4(v5) - v5) | ((unsigned __int16)(WORD6(v5) - WORD2(v5)) << 16),
           0,
           0,
           0LL,
           1,
           0);
}
