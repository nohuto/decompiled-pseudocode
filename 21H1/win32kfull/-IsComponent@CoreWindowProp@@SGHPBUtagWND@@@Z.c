/*
 * XREFs of ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A
 * Callers:
 *     ?SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z @ 0x11AF6 (-SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z @ 0x11E02 (-IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x18B9E (-IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CC2 (-GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _GetWindowCloakStateComponentUIAware@4 @ 0x25400 (_GetWindowCloakStateComponentUIAware@4.c)
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 *     _ValidateHwndIAMComponetUIAware@4 @ 0x260B6 (_ValidateHwndIAMComponetUIAware@4.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC317E (-IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC31B8 (-IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z.c)
 *     _IsWindowShellCloaked@8 @ 0xC3F32 (_IsWindowShellCloaked@8.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 */

int __thiscall CoreWindowProp::IsComponent(_DWORD *this)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  if ( this )
  {
    if ( (*(_BYTE *)(this[5] + 147) & 1) != 0 )
    {
      v3 = 0;
      if ( CWindowProp::GetProp<CoreWindowProp>((int)this, &v3) )
        return *(_DWORD *)(v3 + 12);
    }
  }
  return v1;
}
