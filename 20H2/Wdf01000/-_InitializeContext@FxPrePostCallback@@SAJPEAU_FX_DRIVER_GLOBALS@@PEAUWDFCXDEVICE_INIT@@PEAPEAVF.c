/*
 * XREFs of ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C008540C
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C005167C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPrePostCallback::_InitializeContext(
        _FX_DRIVER_GLOBALS *Globals,
        WDFCXDEVICE_INIT *CxInit,
        FX_POOL ***Context,
        unsigned __int8 CallbackType)
{
  FX_POOL *EvtCxDevicePreDisarmWakeFromSx; // rbx
  FX_POOL *EvtCxDevicePostDisarmWakeFromSx; // rdi
  FX_POOL *EvtCxDevicePreArmWakeFromSxFailedCleanup; // rsi
  FX_POOL **v10; // rax
  void *Caller; // [rsp+48h] [rbp+0h]

  EvtCxDevicePreDisarmWakeFromSx = 0LL;
  EvtCxDevicePostDisarmWakeFromSx = 0LL;
  EvtCxDevicePreArmWakeFromSxFailedCleanup = 0LL;
  if ( CallbackType > 0xAu )
  {
    if ( CallbackType > 0x10u )
    {
      switch ( CallbackType )
      {
        case 0x11u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromSx;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostDisarmWakeFromSx;
          goto LABEL_46;
        case 0x12u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromS0Triggered;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostWakeFromS0Triggered;
          goto LABEL_46;
        case 0x13u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromSxTriggered;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostWakeFromSxTriggered;
          goto LABEL_46;
        case 0x14u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0ExitPreHardwareDisabled;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0ExitPreHardwareDisabled;
          goto LABEL_46;
      }
    }
    else
    {
      switch ( CallbackType )
      {
        case 0x10u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromS0;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostDisarmWakeFromS0;
          goto LABEL_46;
        case 0xBu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoSuspend;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoSuspend;
          goto LABEL_46;
        case 0xCu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoSuspendEx;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoSuspendEx;
          goto LABEL_46;
        case 0xDu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoFlush;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoFlush;
          goto LABEL_46;
        case 0xEu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoCleanup;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoCleanup;
          goto LABEL_46;
        case 0xFu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSurpriseRemoval;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSurpriseRemoval;
          goto LABEL_46;
      }
    }
  }
  else
  {
    if ( CallbackType == 10 )
    {
      EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0Exit;
      EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0Exit;
      goto LABEL_46;
    }
    if ( CallbackType > 5u )
    {
      switch ( CallbackType )
      {
        case 6u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSx;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSx;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxFailedCleanup;
          goto LABEL_46;
        case 7u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReason;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSxWithReason;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup;
          goto LABEL_46;
        case 8u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryPostHardwareEnabled;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0EntryPostHardwareEnabled;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryPostHardwareEnabledFailedCleanup;
          goto LABEL_46;
        case 9u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreReleaseHardware;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostReleaseHardware;
          goto LABEL_46;
      }
    }
    else
    {
      switch ( CallbackType )
      {
        case 5u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromS0;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0FailedCleanup;
          goto LABEL_46;
        case 0u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePrePrepareHardware;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostPrepareHardware;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePrePrepareHardwareFailedCleanup;
          goto LABEL_46;
        case 1u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0Entry;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0Entry;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryFailedCleanup;
          goto LABEL_46;
        case 2u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoInit;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoInit;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoInitFailedCleanup;
          goto LABEL_46;
        case 3u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestart;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoRestart;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartFailedCleanup;
          goto LABEL_46;
        case 4u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartEx;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoRestartEx;
          EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartExFailedCleanup;
LABEL_46:
          if ( EvtCxDevicePreDisarmWakeFromSx || EvtCxDevicePostDisarmWakeFromSx )
            goto LABEL_50;
          break;
      }
    }
  }
  if ( !EvtCxDevicePreArmWakeFromSxFailedCleanup )
  {
    *Context = 0LL;
    return 0LL;
  }
LABEL_50:
  v10 = FxPoolAllocator(Globals, &Globals->FxPoolFrameworks, ExDefaultNonPagedPoolType, 0x20uLL, Globals->Tag, Caller);
  if ( !v10 )
  {
    WPP_IFR_SF_(Globals, 2u, 0x12u, 0xAu, WPP_CxPnpPowerCallbacks_cpp_Traceguids);
    return 3221225626LL;
  }
  *(_BYTE *)v10 = CallbackType;
  *((_BYTE *)v10 + 1) = 0;
  *(_OWORD *)(v10 + 1) = 0LL;
  v10[3] = 0LL;
  v10[1] = EvtCxDevicePreDisarmWakeFromSx;
  v10[2] = EvtCxDevicePostDisarmWakeFromSx;
  v10[3] = EvtCxDevicePreArmWakeFromSxFailedCleanup;
  *Context = v10;
  return 0LL;
}
