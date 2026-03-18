/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00B2BA0
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00B2490 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C010B3CC (xxxWindowHitTest2.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2090 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionIsCompositeAppOrSelfDisabled @ 0x1C0209B30 (EditionIsCompositeAppOrSelfDisabled.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C02156E4 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0216B38 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C0022F60 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0068068 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00BF910 (IsMessageOnlyWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D2C18 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(const struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  unsigned int v2; // edi
  __int64 Prop; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  CompositionInputWindowUIOwner = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0 )
    return 1LL;
  v2 = 1;
  Prop = RealGetProp(*((_QWORD *)a1 + 18), CInputQueueProp::s_atom, 1LL);
  if ( Prop )
  {
    if ( !*(_DWORD *)(Prop + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    if ( (unsigned int)IsMessageOnlyWindow(CompositionInputWindowUIOwner) )
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  }
  if ( !CompositionInputWindowUIOwner )
    return 0;
  do
  {
    v6 = *((_QWORD *)CompositionInputWindowUIOwner + 13);
    if ( v6 )
    {
      v7 = *((_QWORD *)CompositionInputWindowUIOwner + 3);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( v9 )
          v8 = *(_QWORD *)(v9 + 24);
      }
      if ( v6 == v8 )
        break;
    }
    CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)CompositionInputWindowUIOwner + 13);
  }
  while ( v6 );
  if ( !CompositionInputWindowUIOwner )
    return 0;
  if ( (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 235LL) & 1) != 0 )
  {
    v12[0] = 0LL;
    if ( CWindowProp::GetProp<CoreWindowProp>((__int64)CompositionInputWindowUIOwner, v12) )
    {
      if ( *(_DWORD *)(v12[0] + 20) )
      {
        TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(CompositionInputWindowUIOwner);
        CompositionInputWindowUIOwner = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
      }
    }
  }
  if ( !CompositionInputWindowUIOwner || (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 31LL) & 8) == 0 )
    return 0;
  return v2;
}
