/*
 * XREFs of __PostThreadMessage@16 @ 0x8262A
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     ?DestroyDesktop@@YGHPAUtagDESKTOP@@@Z @ 0x82432 (-DestroyDesktop@@YGHPAUtagDESKTOP@@@Z.c)
 *     _NtUserPostThreadMessage@16 @ 0x82578 (_NtUserPostThreadMessage@16.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     ?EndShutdown@@YGXJ@Z @ 0xD40DC (-EndShutdown@@YGXJ@Z.c)
 *     _EditionPostInertiaMessage@24 @ 0x17C9FA (_EditionPostInertiaMessage@24.c)
 * Callees:
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 */

int __fastcall _PostThreadMessage(int a1, int a2, int a3, int a4)
{
  _DWORD v7[2]; // [esp+8h] [ebp-8h] BYREF

  v7[0] = 0;
  v7[1] = 0;
  SetUnavailableInputSource(v7);
  return _PostThreadMessageEx(a1, a2, a3, a4, v7);
}
