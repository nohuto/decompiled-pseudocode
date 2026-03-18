/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QAEJKIIPAUtagWND@@@Z @ 0xD6454 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QAEJKIIPAUtagWND@@@Z.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QAEJK@Z @ 0x1ADAB0 (-ClearBackgroundAccessors@InteractiveControlManager@@QAEJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QAEJK@Z @ 0x1ADB4B (-ClearDeviceFocus@InteractiveControlManager@@QAEJK@Z.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QAEJKPAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1ADC2F (-GetDeviceInfo@InteractiveControlManager@@QAEJKPAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QAEJKPAPAU_WAVEFORM_INFO@@PAJ@Z @ 0x1ADDA6 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QAEJKPAPAU_WAVEFORM_INFO@@PAJ@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1ADE87 (-GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z @ 0x1ADF4C (-GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1AE0E2 (-GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE439 (-OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z @ 0x1AE50E (-OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QAEJKABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1AE647 (-SendDeviceHapticsOutput@InteractiveControlManager@@QAEJKABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE72E (-SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@@Z @ 0x1AE851 (-SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE936 (-SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1AEA0E (-SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B2C59 (-SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z @ 0x1B415E (-CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z.c)
 *     ?DeInitialize@SimpleHapticsController@@QAEJXZ @ 0x1B4278 (-DeInitialize@SimpleHapticsController@@QAEJXZ.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z @ 0x1B4305 (-HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8 (-Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ @ 0x1B479D (-InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IAEJXZ @ 0x1B4B32 (-IntializePreparssedData@SimpleHapticsController@@IAEJXZ.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IAEJXZ @ 0x1B4C38 (-OpenHapticsDevice@SimpleHapticsController@@IAEJXZ.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC (-SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z.c)
 *     ?SendHapticFeedbackOutput@SimpleHapticsController@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B4F4C (-SendHapticFeedbackOutput@SimpleHapticsController@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z @ 0x1B5113 (-SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QAEJPBU_DEVPROPKEY@@KKKKPAX@Z @ 0x1B5432 (-SetDevicePropertyData@SimpleHapticsController@@QAEJPBU_DEVPROPKEY@@KKKKPAX@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        int a6)
{
  const char *v7; // edx
  unsigned int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-44h] BYREF
  const char *v12; // [esp+2Ch] [ebp-24h]
  int v13; // [esp+30h] [ebp-20h]
  unsigned int v14; // [esp+34h] [ebp-1Ch]
  int v15; // [esp+38h] [ebp-18h]
  int v16; // [esp+3Ch] [ebp-14h]
  int v17; // [esp+40h] [ebp-10h]
  int v18; // [esp+44h] [ebp-Ch]
  int v19; // [esp+48h] [ebp-8h]

  v16 = a6;
  v18 = 4;
  v17 = 0;
  v7 = *a5;
  v19 = 0;
  if ( v7 )
  {
    v9 = strlen(v7) + 1;
  }
  else
  {
    v7 = byte_FC858;
    v9 = 1;
  }
  v12 = v7;
  v13 = 0;
  v14 = v9;
  v15 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 4u, &UserData);
}
