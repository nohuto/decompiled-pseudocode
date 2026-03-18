/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0012B48
 * Callers:
 *     xxxWindowHitTest2 @ 0x1C0012520 (xxxWindowHitTest2.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B52C (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1420 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionIsCompositeAppOrSelfDisabled @ 0x1C0208CC0 (EditionIsCompositeAppOrSelfDisabled.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C0214864 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0215CB8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0012C50 (IsMessageOnlyWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00142DC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C004C7A4 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1E08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(const struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  unsigned int v2; // edi
  __int64 Prop; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct tagWND *TopLevelHostForComponent; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  CompositionInputWindowUIOwner = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0 )
    return 1LL;
  v2 = 1;
  Prop = RealGetProp(*((_QWORD *)a1 + 18), CInputQueueProp::s_atom, 1LL);
  if ( Prop )
  {
    if ( !*(_DWORD *)(Prop + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
    if ( (unsigned int)IsMessageOnlyWindow(CompositionInputWindowUIOwner) )
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  }
  if ( !CompositionInputWindowUIOwner )
    return 0;
  do
  {
    v8 = *((_QWORD *)CompositionInputWindowUIOwner + 13);
    if ( v8 )
    {
      v9 = *((_QWORD *)CompositionInputWindowUIOwner + 3);
      v10 = 0LL;
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 8);
        if ( v11 )
          v10 = *(_QWORD *)(v11 + 24);
      }
      if ( v8 == v10 )
        break;
    }
    CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)CompositionInputWindowUIOwner + 13);
  }
  while ( v8 );
  if ( !CompositionInputWindowUIOwner )
    return 0;
  if ( (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 235LL) & 1) != 0 )
  {
    v14[0] = 0LL;
    if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(CompositionInputWindowUIOwner, v14) )
    {
      if ( *(_DWORD *)(v14[0] + 20LL) )
      {
        TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(CompositionInputWindowUIOwner);
        CompositionInputWindowUIOwner = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
      }
    }
  }
  if ( !CompositionInputWindowUIOwner || (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 31LL) & 8) == 0 )
    return 0;
  return v2;
}
