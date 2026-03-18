/*
 * XREFs of _GetWindowCloakState@4 @ 0x26960
 * Callers:
 *     _GetWindowCloakStateComponentUIAware@4 @ 0x25400 (_GetWindowCloakStateComponentUIAware@4.c)
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 *     ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176 (-DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z @ 0x2624C (-PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 *     _IsWindowEffectivelyCloaked@4 @ 0xAB818 (_IsWindowEffectivelyCloaked@4.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _ShouldProcessHungWindow@4 @ 0xC25A4 (_ShouldProcessHungWindow@4.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _DCELogicalSpeedTopLevelHitTest@8 @ 0x150A63 (_DCELogicalSpeedTopLevelHitTest@8.c)
 *     ?_IsTaskWindow@@YGHPAUtagWND@@0@Z @ 0x15C703 (-_IsTaskWindow@@YGHPAUtagWND@@0@Z.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 *     __ChildWindowFromPointEx@16 @ 0x17BE7F (__ChildWindowFromPointEx@16.c)
 *     _xxxTouchTargetWindow@28 @ 0x17C92C (_xxxTouchTargetWindow@28.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     __RealChildWindowFromPoint@12 @ 0x1A6C64 (__RealChildWindowFromPoint@12.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

int __thiscall GetWindowCloakState(_DWORD *this)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edx
  const void *Prop; // eax
  __int16 v8; // ax
  _WORD v10[18]; // [esp+Ch] [ebp-24h] BYREF

  v2 = 0;
  v3 = this[14];
  if ( v3 )
  {
    v4 = this[3];
    v5 = 0;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( v6 )
        v5 = *(_DWORD *)(v6 + 12);
    }
    if ( v3 == v5 )
      goto LABEL_6;
  }
  if ( (*(_BYTE *)(this[5] + 18) & 8) != 0 && _GetTopLevelWindow(this) )
  {
LABEL_6:
    Prop = (const void *)RealGetProp(this[20], (unsigned __int16)atomDWMProp, 1);
    if ( Prop )
    {
      qmemcpy(v10, Prop, sizeof(v10));
      v8 = v10[0];
    }
    else
    {
      v8 = 0;
    }
    if ( (v8 & 0x2400) != 0 )
      v2 = 1;
    if ( (v8 & 0x800) != 0 )
      return v2 | 2;
  }
  return v2;
}
