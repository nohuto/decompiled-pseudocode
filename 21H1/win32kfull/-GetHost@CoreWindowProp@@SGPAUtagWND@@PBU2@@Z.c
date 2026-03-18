/*
 * XREFs of ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _GetWindowCloakStateComponentUIAware@4 @ 0x25400 (_GetWindowCloakStateComponentUIAware@4.c)
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 *     _ValidateHwndIAMComponetUIAware@4 @ 0x260B6 (_ValidateHwndIAMComponetUIAware@4.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC31B8 (-IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z.c)
 *     ?IsPwndComponentWebview@@YG_NPBUtagWND@@@Z @ 0xC42C2 (-IsPwndComponentWebview@@YG_NPBUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__thiscall CoreWindowProp::GetHost(void *this)
{
  int v2; // [esp+4h] [ebp-4h] BYREF

  v2 = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>((int)this, &v2) )
    return *(struct tagWND **)(v2 + 16);
  else
    return 0;
}
