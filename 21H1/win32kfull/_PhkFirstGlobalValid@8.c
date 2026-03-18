/*
 * XREFs of _PhkFirstGlobalValid@8 @ 0x6F434
 * Callers:
 *     _zzzUnhookWindowsHookEx@4 @ 0x127FE (_zzzUnhookWindowsHookEx@4.c)
 *     ?CheckWHFBits@@YGXPAUtagTHREADINFO@@H@Z @ 0x12872 (-CheckWHFBits@@YGXPAUtagTHREADINFO@@H@Z.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 *     _GetJournallingQueue@4 @ 0x6F3E4 (_GetJournallingQueue@4.c)
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     _xxxCallJournalPlaybackHook@4 @ 0x1527A2 (_xxxCallJournalPlaybackHook@4.c)
 *     _xxxCallJournalRecordHook@4 @ 0x152B33 (_xxxCallJournalRecordHook@4.c)
 * Callees:
 *     <none>
 */

int __fastcall PhkFirstGlobalValid(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(*(_DWORD *)(a1 + 252) + 4 * a2 + 24);
  if ( result )
  {
    if ( *(char *)(result + 32) < 0 )
      return PhkNextValid(*(_DWORD *)(*(_DWORD *)(a1 + 252) + 4 * a2 + 24));
  }
  return result;
}
