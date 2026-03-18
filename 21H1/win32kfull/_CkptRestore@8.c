/*
 * XREFs of _CkptRestore@8 @ 0xB487A
 * Callers:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _UpdateCheckpoint@4 @ 0xB4838 (_UpdateCheckpoint@4.c)
 *     ?_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z @ 0xC2790 (-_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z @ 0x171112 (-GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 *     ?xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z @ 0x1A0652 (-xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z.c)
 * Callees:
 *     _DesktopAlloc@12 @ 0x1EAD0 (_DesktopAlloc@12.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _CkptUpdate@12 @ 0xB48F4 (_CkptUpdate@12.c)
 *     _CkptInit@8 @ 0xB4EF2 (_CkptInit@8.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

void *__fastcall CkptRestore(int a1, int a2)
{
  void *Prop; // esi
  PVOID v6; // eax

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 13) & 1) == 0 )
  {
    Prop = (void *)_GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1, a2, Prop);
      return Prop;
    }
    v6 = DesktopAlloc(*(_DWORD *)(a1 + 12), 0x34u, 1952674645);
    Prop = v6;
    if ( v6 )
    {
      if ( InternalSetProp(v6, 9) )
      {
        CkptInit(a2, Prop);
        goto LABEL_3;
      }
      RtlFreeHeap(*(PVOID *)(*(_DWORD *)(a1 + 12) + 64), 0, Prop);
    }
  }
  return 0;
}
