/*
 * XREFs of ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     _NtUserAcquireInteractiveControlBackgroundAccess@12 @ 0xD63AE (_NtUserAcquireInteractiveControlBackgroundAccess@12.c)
 *     _EditionDevicePnpNotification@4 @ 0xEAF6A (_EditionDevicePnpNotification@4.c)
 *     _EditionRimDeviceReadNotification@16 @ 0x1401E4 (_EditionRimDeviceReadNotification@16.c)
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 *     _NtUserGetInteractiveControlDeviceInfo@8 @ 0x163102 (_NtUserGetInteractiveControlDeviceInfo@8.c)
 *     _NtUserGetInteractiveControlInfo@8 @ 0x1631F7 (_NtUserGetInteractiveControlInfo@8.c)
 *     _NtUserGetInteractiveCtrlSupportedWaveforms@12 @ 0x1632FE (_NtUserGetInteractiveCtrlSupportedWaveforms@12.c)
 *     _NtUserInteractiveControlQueryUsage@20 @ 0x165A0F (_NtUserInteractiveControlQueryUsage@20.c)
 *     _NtUserSendInteractiveControlHapticsReport@12 @ 0x168680 (_NtUserSendInteractiveControlHapticsReport@12.c)
 *     _NtUserSetInteractiveControlFocus@12 @ 0x169551 (_NtUserSetInteractiveControlFocus@12.c)
 *     _NtUserSetInteractiveCtrlRotationAngle@20 @ 0x1695F9 (_NtUserSetInteractiveCtrlRotationAngle@20.c)
 *     ?GetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x19F98E (-GetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x19F99E (-SetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x19F9AF (-xxxRetrieveInteractiveControlInputMessage@@YG-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     _lambda_46e7683cae22722f297e69793ac65061_::_lambda_invoker_stdcall_ @ 0x1B167F (_lambda_46e7683cae22722f297e69793ac65061_--_lambda_invoker_stdcall_.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QAEJXZ @ 0x1B18A2 (-CreateDeadzone@InteractiveControlDevice@@QAEJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B1BC0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QAEIPAVInteractiveControlInput@@0@Z @ 0x1B1CCA (-DetermineMessageCreationFlags@InteractiveControlDevice@@QAEIPAVInteractiveControlInput@@0@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B269C (-SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B2C59 (-SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IAEXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2CE5 (-SetMessagePromotionType@InteractiveControlDevice@@IAEXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z @ 0x1B2D2A (-UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AAEJPAF@Z @ 0x1B37FF (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AAEJPAF@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AAEXPAUtagWND@@@Z @ 0x1B3AC8 (-Reset@InteractiveControlDefaultScroller@@AAEXPAUtagWND@@@Z.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AAEXKH@Z @ 0x1B3D5C (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AAEXKH@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AAEJXZ @ 0x1B3DBA (-UpdateBallistics@InteractiveControlDefaultScroller@@AAEJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AAEJPAH@Z @ 0x1B3E87 (-UpdateTime@InteractiveControlDefaultScroller@@AAEJPAH@Z.c)
 * Callees:
 *     ??0InteractiveControlManager@@AAE@XZ @ 0xD6520 (--0InteractiveControlManager@@AAE@XZ.c)
 */

struct InteractiveControlManager *__stdcall InteractiveControlManager::Instance()
{
  InteractiveControlManager *v1; // eax

  if ( !InteractiveControlManager::s_pInstance )
  {
    v1 = (InteractiveControlManager *)Win32AllocPool(280, 1819440195);
    if ( v1 )
      InteractiveControlManager::s_pInstance = InteractiveControlManager::InteractiveControlManager(v1);
  }
  return InteractiveControlManager::s_pInstance;
}
