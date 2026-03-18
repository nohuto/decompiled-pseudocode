/*
 * XREFs of _xxxSendHelpMessage@20 @ 0x1ACB94
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     __GetMessagePos@0 @ 0xA9662 (__GetMessagePos@0.c)
 */

int __fastcall xxxSendHelpMessage(int BugCheckParameter2, int a2, int a3, int a4, int a5)
{
  int MessagePos; // eax
  int v8[7]; // [esp+4h] [ebp-1Ch] BYREF

  v8[2] = a3;
  v8[3] = a4;
  v8[0] = 28;
  v8[1] = a2;
  v8[4] = a5;
  MessagePos = _GetMessagePos();
  v8[5] = (__int16)MessagePos;
  v8[6] = SHIWORD(MessagePos);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x53u, 0, (int)v8, 0, 0, 0, 1u, 1);
}
