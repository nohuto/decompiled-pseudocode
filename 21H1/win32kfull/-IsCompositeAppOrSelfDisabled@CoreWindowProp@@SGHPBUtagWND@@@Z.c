/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     _EditionIsCompositeAppOrSelfDisabled@4 @ 0x16F395 (_EditionIsCompositeAppOrSelfDisabled@4.c)
 *     ?BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@3PAIPAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x17996A (-BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _IsMessageOnlyWindow@4 @ 0xADBD2 (_IsMessageOnlyWindow@4.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __thiscall CoreWindowProp::IsCompositeAppOrSelfDisabled(struct tagWND *this)
{
  struct tagWND *TopLevelWindow; // esi
  int v2; // edi
  int Prop; // eax
  struct tagWND *CompositionInputWindowUIOwner; // eax
  int v5; // edx
  struct tagWND *v6; // ecx
  int v7; // edx
  struct tagWND *TopLevelHostForComponent; // eax
  const struct tagWND *v10; // [esp+0h] [ebp-Ch]

  TopLevelWindow = this;
  if ( (*(_BYTE *)(*((_DWORD *)this + 5) + 23) & 8) != 0 )
    return 1;
  v2 = 1;
  Prop = RealGetProp(*((_DWORD *)this + 20), CInputQueueProp::s_atom, 1);
  if ( Prop )
  {
    if ( !*(_DWORD *)(Prop + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( IsMessageOnlyWindow(TopLevelWindow) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v10);
      goto LABEL_12;
    }
  }
  while ( TopLevelWindow )
  {
    CompositionInputWindowUIOwner = (struct tagWND *)*((_DWORD *)TopLevelWindow + 14);
    if ( CompositionInputWindowUIOwner )
    {
      v5 = *((_DWORD *)TopLevelWindow + 3);
      v6 = 0;
      if ( v5 )
      {
        v7 = *(_DWORD *)(v5 + 4);
        if ( v7 )
          v6 = *(struct tagWND **)(v7 + 12);
      }
      if ( CompositionInputWindowUIOwner == v6 )
        break;
    }
LABEL_12:
    TopLevelWindow = CompositionInputWindowUIOwner;
  }
  if ( !TopLevelWindow )
    return 0;
  if ( CoreWindowProp::IsComponent(v10) )
  {
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
    TopLevelWindow = (struct tagWND *)_GetTopLevelWindow(TopLevelHostForComponent);
  }
  if ( !TopLevelWindow || (*(_BYTE *)(*((_DWORD *)TopLevelWindow + 5) + 23) & 8) == 0 )
    return 0;
  return v2;
}
