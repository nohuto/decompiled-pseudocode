/*
 * XREFs of _PostThreadMessage @ 0x1C00BE8A8
 * Callers:
 *     zzzCancelJournalling @ 0x1C004BD98 (zzzCancelJournalling.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00938D0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C00BC134 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C00BE7A0 (NtUserPostThreadMessage.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C00BF3E8 (-EndShutdown@@YAXJ@Z.c)
 *     EditionPostInertiaMessage @ 0x1C0218D10 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C00BE914 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  SetUnavailableInputSource(v7);
  return PostThreadMessageEx(a1, a2, a3);
}
