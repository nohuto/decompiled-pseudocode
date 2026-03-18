/*
 * XREFs of ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4
 * Callers:
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0113AF8 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01DF838 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     NtUserMNDragLeave @ 0x1C01FE3C0 (NtUserMNDragLeave.c)
 *     xxxMNStartMenuState @ 0x1C02225EC (xxxMNStartMenuState.c)
 *     xxxUnlockMenuState @ 0x1C0222AB0 (xxxUnlockMenuState.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C024963C (xxxMNDragOver.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x1C0221D60 (xxxMNEndMenuState.c)
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
