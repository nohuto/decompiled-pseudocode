/*
 * XREFs of DispatchDwmDiagnosticsControlMessage @ 0x180212524
 * Callers:
 *     McGenControlCallbackV2 @ 0x1800D6430 (McGenControlCallbackV2.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TreeDumping@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180197ED0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TreeDumping@@@details@wil@@QEAAX_NW4Repor.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 *     ?HandleMessage@DwmDiagnosticsControlMessage_0@@SAXPEBU1@@Z @ 0x180212604 (-HandleMessage@DwmDiagnosticsControlMessage_0@@SAXPEBU1@@Z.c)
 */

void __fastcall DispatchDwmDiagnosticsControlMessage(struct DwmDiagnosticsControlMessage_0 *a1, __int64 a2, __int64 a3)
{
  DWORD CurrentProcessId; // eax
  signed int LastError; // eax
  DWORD pSessionId[6]; // [rsp+20h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a1 + 6) == -1 )
    goto LABEL_21;
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, pSessionId) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT(LastError, retaddr);
  }
  if ( pSessionId[0] == *((_DWORD *)a1 + 6) )
  {
LABEL_21:
    if ( !*((_BYTE *)a1 + 2) )
    {
      if ( *(_WORD *)a1 )
      {
        if ( *(_WORD *)a1 == 1 )
        {
          if ( *((_DWORD *)a1 + 4) == 40 )
          {
            g_HeatMaps_TargetProcessId = *((_DWORD *)a1 + 7);
            g_HeatMaps_Type = *((_DWORD *)a1 + 8);
            g_HeatMaps_OverdrawContentKinds = *((_DWORD *)a1 + 9);
          }
        }
        else if ( *(_WORD *)a1 == 2 && *((_DWORD *)a1 + 4) >= 0x22u )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_TreeDumping>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_TreeDumping>::GetImpl'::`2'::impl,
            0,
            a3);
        }
      }
      else if ( *((_DWORD *)a1 + 4) >= 0x24u )
      {
        DwmDiagnosticsControlMessage_0::HandleMessage(a1);
      }
    }
  }
}
