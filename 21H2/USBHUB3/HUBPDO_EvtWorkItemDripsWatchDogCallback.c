/*
 * XREFs of HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C007C1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x1C00132C0 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDDLd @ 0x1C0013824 (WPP_RECORDER_SF_DDDLd.c)
 *     WPP_RECORDER_SF_II @ 0x1C0013958 (WPP_RECORDER_SF_II.c)
 *     Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck @ 0x1C00143E8 (Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C0083640 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // bp
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // di
  NTSTATUS v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  NTSTATUS v20; // edx
  int v21; // edi
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // rax
  PVOID *Handle; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+98h] [rbp+10h] BYREF
  PVOID v32; // [rsp+A0h] [rbp+18h] BYREF

  v32 = 0LL;
  v31 = 0;
  v1 = 1;
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C00671C0);
  v3 = *(_QWORD *)(*v2 + 64LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = *(unsigned int *)(v4 + 1632);
  if ( (v5 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
        4u,
        2u,
        0x96u,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
    v6 = 1;
    goto LABEL_36;
  }
  v7 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v31);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0x97u,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
        v7);
    v6 = 2;
    goto LABEL_36;
  }
  if ( v31 )
  {
    v8 = *(_QWORD **)(v3 + 24);
    if ( (*((_DWORD *)v8 + 411) & 0x800000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v8[1] + 1432LL),
          3u,
          2u,
          0x99u,
          (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
      v6 = 4;
      goto LABEL_36;
    }
    v11 = MEMORY[0xFFFFF78000000014]
        - (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v8 + 584LL))(*(_QWORD *)(*v8 + 248LL), v8[3]);
    if ( v11 >= 300000000 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 1, 0) )
      {
        Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck(v10, v9);
        DbgkWerCaptureLiveKernelDump(L"UsbDripsBlockerSurpriseRemoval", 421LL, *v2, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
          WdfDriverGlobals,
          v19,
          2LL);
        v6 = 12;
      }
      else
      {
        v20 = PoRegisterPowerSettingCallback(
                0LL,
                &GUID_LOW_POWER_EPOCH,
                (PPOWER_SETTING_CALLBACK)HUBPDO_ReEnumerationCallback,
                *(PVOID *)(v3 + 24),
                &v32);
        if ( v20 >= 0 )
        {
          *(_QWORD *)(v3 + 408) = v32;
          v21 = IoRequestDeviceRemovalForReset(*v2, 0LL);
          if ( v21 >= 0 )
          {
            v1 = 0;
            v6 = 0;
          }
          else
          {
            PoUnregisterPowerSettingCallback(*(PVOID *)(v3 + 408));
            *(_QWORD *)(v3 + 408) = 0LL;
            _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 0, 1);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
                2u,
                2u,
                0x9Eu,
                (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
                v21);
            v6 = 8;
          }
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 0, 1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
              2u,
              2u,
              0x9Du,
              (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
              v20);
          v6 = 7;
        }
      }
      goto LABEL_36;
    }
    Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck(v10, v9);
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 404), 1, 0);
    if ( !v16 )
    {
      v17 = PoRegisterPowerSettingCallback(
              0LL,
              &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
              (PPOWER_SETTING_CALLBACK)HUBPDO_IdleResiliencyCallback,
              *(PVOID *)(v3 + 24),
              (PVOID *)(v3 + 416));
      v12 = (unsigned int)v17;
      if ( v17 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                  + 1640))(
          WdfDriverGlobals,
          v18,
          "DRIPS IO Tag",
          11215LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 404), 0, 1);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_24:
          Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck(v13, v12);
          v6 = v16 != 0 ? 11 : 5;
          goto LABEL_36;
        }
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0x9Au,
          (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
          v17);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = v11;
      WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL), v12, v14, v15, (int)Handle);
    }
    goto LABEL_24;
  }
  v6 = 3;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_38;
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
    3u,
    2u,
    0x98u,
    (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = *(_QWORD *)(v3 + 24);
    LODWORD(v30) = *(unsigned __int16 *)(v22 + 2000);
    LODWORD(v29) = *(unsigned __int16 *)(v22 + 1998);
    LODWORD(v28) = *(unsigned __int16 *)(v22 + 1996);
    WPP_RECORDER_SF_DDDLd(
      *(_QWORD *)(*(_QWORD *)(v22 + 8) + 1432LL),
      v1,
      *(unsigned __int16 *)(v22 + 2000),
      *(unsigned __int16 *)(v22 + 1998),
      (int)Handle);
  }
LABEL_38:
  if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
  {
    v23 = *(_QWORD *)(v3 + 24);
    LOWORD(v30) = *(_WORD *)(v23 + 2000);
    LOWORD(v29) = *(_WORD *)(v23 + 1998);
    LOWORD(v28) = *(_WORD *)(v23 + 1996);
    LODWORD(Handle) = v6;
    McTemplateK0pqhhh_EtwWriteTransfer(
      v5,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v23 + 1516),
      *(_QWORD *)(v23 + 24),
      Handle,
      v28,
      v29,
      v30);
  }
  if ( v6 != 1 )
  {
    if ( v6 == 12 )
    {
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        v24 = *(_QWORD *)(v3 + 24);
        LOWORD(v30) = *(_WORD *)(v24 + 2000);
        LOWORD(v29) = *(_WORD *)(v24 + 1998);
        LOWORD(v28) = *(_WORD *)(v24 + 1996);
        LODWORD(Handle) = 12;
        McTemplateK0pqhhh_EtwWriteTransfer(
          v5,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_INFO,
          (const GUID *)(v24 + 1516),
          *(_QWORD *)(v24 + 24),
          Handle,
          v28,
          v29,
          v30);
      }
    }
    else if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
    {
      v25 = *(_QWORD *)(v3 + 24);
      LOWORD(v30) = *(_WORD *)(v25 + 2000);
      LOWORD(v29) = *(_WORD *)(v25 + 1998);
      LOWORD(v28) = *(_WORD *)(v25 + 1996);
      LODWORD(Handle) = v6;
      McTemplateK0pqhhh_EtwWriteTransfer(
        v5,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING,
        (const GUID *)(v25 + 1516),
        *(_QWORD *)(v25 + 24),
        Handle,
        v28,
        v29,
        v30);
    }
  }
  if ( v1 )
  {
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v26,
      "DRIPS SR Tag",
      11368LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 424), "DRIPS SR Tag", 0x20u);
}
