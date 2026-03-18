/*
 * XREFs of ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0112B9C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01E04F8 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     NtUserMNDragLeave @ 0x1C01FF230 (NtUserMNDragLeave.c)
 *     xxxMNStartMenuState @ 0x1C022347C (xxxMNStartMenuState.c)
 *     xxxUnlockMenuState @ 0x1C0223940 (xxxUnlockMenuState.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C024AC44 (xxxMNDragOver.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x1C0222BF0 (xxxMNEndMenuState.c)
 */

__int64 __fastcall xxxUnlockMenuStateInternal(struct tagMENUSTATE *a1, int a2)
{
  int v3; // r9d

  if ( (*((_DWORD *)a1 + 10))-- != 1 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 2);
  if ( (v3 & 4) != 0 && (**(_DWORD **)a1 & 0x8000) == 0 )
    return 0LL;
  if ( !a2 && (v3 & 0x1000000) == 0 )
    return 0LL;
  xxxMNEndMenuState(a1);
  return 1LL;
}
