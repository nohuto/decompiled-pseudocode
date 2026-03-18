/*
 * XREFs of CkptRestore @ 0x1C003A9C0
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0004878 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     UpdateCheckpoint @ 0x1C003A968 (UpdateCheckpoint.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D00AC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020AA68 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D400 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F894 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0241F5C (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0036AD0 (DesktopAlloc.c)
 *     CkptUpdate @ 0x1C003AA98 (CkptUpdate.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 */

_DWORD *__fastcall CkptRestore(__int64 a1, _OWORD *a2)
{
  _DWORD *Prop; // rbx
  _DWORD *v6; // rax

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    Prop = (_DWORD *)GetProp(a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1, a2, Prop);
      return Prop;
    }
    v6 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x34u);
    Prop = v6;
    if ( v6 )
    {
      if ( (unsigned int)InternalSetProp(a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), v6, 9LL) )
      {
        Prop[12] &= 0xFFFFFF80;
        Prop[8] = -1;
        Prop[9] = -1;
        Prop[10] = -1;
        Prop[11] = -1;
        *(_OWORD *)Prop = *a2;
        *((_OWORD *)Prop + 1) = *a2;
        goto LABEL_3;
      }
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, Prop);
    }
  }
  return 0LL;
}
