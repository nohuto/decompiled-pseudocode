/*
 * XREFs of _xxxSendSizeMessage@8 @ 0xB2C46
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxHandleWindowPosChanged@8 @ 0xAB7B6 (_xxxHandleWindowPosChanged@8.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     __GetClientRect@8 @ 0xB2C9E (__GetClientRect@8.c)
 */

int __fastcall xxxSendSizeMessage(int BugCheckParameter2, unsigned int HighLimit)
{
  int v5; // [esp+10h] [ebp-10h] BYREF
  int v6; // [esp+14h] [ebp-Ch]
  int v7; // [esp+18h] [ebp-8h]
  int v8; // [esp+1Ch] [ebp-4h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  _GetClientRect(BugCheckParameter2, &v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           BugCheckParameter2,
           5u,
           HighLimit,
           (unsigned __int16)(v7 - v5) | ((unsigned __int16)(v8 - v6) << 16),
           0,
           0,
           0,
           1u,
           0);
}
