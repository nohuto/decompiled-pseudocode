/*
 * XREFs of ?PostIAMPosChangedNotification@@YGXPAUtagCVR@@PAUtagWND@@@Z @ 0x3871C
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 */

void __fastcall PostIAMPosChangedNotification(_DWORD *a1, int a2)
{
  if ( (a1[6] & 0x10000) != 0 && (*(_BYTE *)(*(_DWORD *)(a2 + 20) + 146) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 31, *a1);
}
