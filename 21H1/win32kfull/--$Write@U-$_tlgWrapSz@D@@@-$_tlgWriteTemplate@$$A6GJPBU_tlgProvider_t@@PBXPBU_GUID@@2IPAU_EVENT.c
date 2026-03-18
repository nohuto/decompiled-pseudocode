/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9
 * Callers:
 *     _EditionHandleMitSignal@4 @ 0xAFAEE (_EditionHandleMitSignal@4.c)
 *     _xxxInternalKeyEventDirect@20 @ 0xAFD06 (_xxxInternalKeyEventDirect@20.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     _lambda_3ef8aac84d3e2e990d213b9149cc4885_::operator() @ 0xF1856 (_lambda_3ef8aac84d3e2e990d213b9149cc4885_--operator().c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AAEXXZ @ 0x143A83 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AAEXXZ.c)
 *     ?CursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x156472 (-CursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1ADE87 (-GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z @ 0x1B4305 (-HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8 (-Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z.c)
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInteractiveControlDevice@@@Z @ 0x1B58D8 (-BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInterac.c)
 *     ?ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1B5FB3 (-ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIV.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        const char **a5)
{
  char *v5; // esi
  int v7; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-34h] BYREF
  char *v10; // [esp+34h] [ebp-14h]
  int v11; // [esp+38h] [ebp-10h]
  int v12; // [esp+3Ch] [ebp-Ch]
  int v13; // [esp+40h] [ebp-8h]

  v5 = (char *)*a5;
  if ( *a5 )
  {
    v7 = &(*a5)[strlen(*a5) + 1] - v5;
  }
  else
  {
    v5 = byte_FC858;
    v7 = 1;
  }
  v11 = 0;
  v13 = 0;
  v10 = v5;
  v12 = v7;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, a3, a4, 3u, &UserData);
}
