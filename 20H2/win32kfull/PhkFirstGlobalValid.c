/*
 * XREFs of PhkFirstGlobalValid @ 0x1C00D7DDC
 * Callers:
 *     zzzCancelJournalling @ 0x1C002A378 (zzzCancelJournalling.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0074694 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0074CC4 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00D799C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C00D7D80 (GetJournallingQueue.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C015B154 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E61E4 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E6604 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0074F10 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8LL * a2 + 48);
  if ( v2 && (*(_DWORD *)(v2 + 64) & 0x80u) != 0 )
    return PhkNextValid(v2);
  return v2;
}
