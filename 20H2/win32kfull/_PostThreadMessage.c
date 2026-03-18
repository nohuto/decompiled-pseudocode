/*
 * XREFs of _PostThreadMessage @ 0x1C00BE598
 * Callers:
 *     zzzCancelJournalling @ 0x1C002A378 (zzzCancelJournalling.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C007C9E4 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C007F77C (-EndShutdown@@YAXJ@Z.c)
 *     NtUserPostThreadMessage @ 0x1C00BE490 (NtUserPostThreadMessage.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     EditionPostInertiaMessage @ 0x1C0217E80 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C00BE604 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
