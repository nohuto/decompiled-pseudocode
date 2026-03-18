/*
 * XREFs of GetWindowCloakState @ 0x1C004042C
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000F220 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C000F768 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C0012418 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C003CBF8 (GetWindowCloakStateComponentUIAware.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C003ED78 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C004033C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 *     ShouldProcessHungWindow @ 0x1C011EBC0 (ShouldProcessHungWindow.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C0153EC0 (_ChildWindowFromPointEx.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B52C (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E47D0 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01F2D88 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F3B5C (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C021686C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C0217D38 (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x1C0248D8C (_RealChildWindowFromPoint.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetWindowCloakState(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 Prop; // rax
  unsigned int v7; // edx
  unsigned int v8; // ecx

  v2 = a1[13];
  if ( v2 )
  {
    v3 = a1[3];
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 24);
    }
    if ( v2 == v4 )
      goto LABEL_6;
  }
  if ( (*(_BYTE *)(a1[5] + 26LL) & 8) != 0 && GetTopLevelWindow(a1) )
  {
LABEL_6:
    Prop = RealGetProp(a1[18], (unsigned __int16)atomDWMProp, 1LL);
    if ( Prop )
      LODWORD(Prop) = *(_OWORD *)Prop;
    v7 = 0;
    if ( (Prop & 0x400) != 0 || (Prop & 0x2000) != 0 )
      v7 = 1;
    v8 = v7 | 2;
    if ( (Prop & 0x800) == 0 )
      return v7;
  }
  else
  {
    return 0;
  }
  return v8;
}
