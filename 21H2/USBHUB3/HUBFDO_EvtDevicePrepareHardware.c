/*
 * XREFs of HUBFDO_EvtDevicePrepareHardware @ 0x1C0075090
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x1C0001360 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x1C00018E0 (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer @ 0x1C000195C (McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0001B50 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006D20 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBPARENT_GetHubSymbolicLinkName @ 0x1C000733C (HUBPARENT_GetHubSymbolicLinkName.c)
 *     HUBSM_AddHsmEvent @ 0x1C000A238 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C0030194 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 *     HUBFDO_SetFriendlyNameForBlockedHub @ 0x1C00742A8 (HUBFDO_SetFriendlyNameForBlockedHub.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1C0078B7C (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x1C007D594 (HUBCONNECTOR_MapHubPorts.c)
 *     HUBREG_QueryValuesInHubHardwareKey @ 0x1C00805C0 (HUBREG_QueryValuesInHubHardwareKey.c)
 *     HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey @ 0x1C0083F40 (HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00854D0 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_RegisterHub @ 0x1C00866C4 (WMI_RegisterHub.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00871F8 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBFDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  const WCHAR *v5; // rax
  const void *v6; // rax
  int v7; // esi
  __int64 Pool2; // rax
  int FirmwareUpdateDevice; // eax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  int v16; // r11d
  int v17; // r15d
  int v18; // r12d
  int v19; // r13d
  int v20; // r10d
  char v21; // r14
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  const EVENT_DESCRIPTOR *v25; // rdx
  int v26; // eax
  int v27; // r15d
  int v28; // r12d
  int v29; // r13d
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rdx
  void *v34; // rax
  void *v35; // r14
  __int64 v36; // rax
  _QWORD *v37; // r8
  _QWORD *v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v42; // [rsp+28h] [rbp-79h]
  __int64 *v43; // [rsp+30h] [rbp-71h]
  __int64 v44; // [rsp+38h] [rbp-69h]
  __int64 v45; // [rsp+48h] [rbp-59h]
  __int64 v46; // [rsp+50h] [rbp-51h]
  __int64 v47; // [rsp+58h] [rbp-49h]
  __int64 v48; // [rsp+60h] [rbp-41h]
  __int64 v49; // [rsp+68h] [rbp-39h]
  __int64 v50; // [rsp+70h] [rbp-31h]
  __int64 v51; // [rsp+78h] [rbp-29h]
  __int64 v52; // [rsp+80h] [rbp-21h]
  __int64 v53; // [rsp+88h] [rbp-19h]
  __int64 v54; // [rsp+90h] [rbp-11h]
  int v55; // [rsp+98h] [rbp-9h]
  int v56; // [rsp+98h] [rbp-9h]
  int v57; // [rsp+9Ch] [rbp-5h]
  int v58; // [rsp+9Ch] [rbp-5h]
  __int64 v59; // [rsp+A0h] [rbp-1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+7h] BYREF
  UNICODE_STRING SourceString; // [rsp+B8h] [rbp+17h] BYREF
  void *Src[2]; // [rsp+C8h] [rbp+27h] BYREF
  int AcpiPortAttributes; // [rsp+120h] [rbp+7Fh]

  SourceString = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0067198);
  v4 = v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v2 + 248));
  HUBREG_QueryValuesInHubHardwareKey(v4);
  HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey(v4);
  if ( *(_BYTE *)(v4 + 240) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL) + 24LL) + 8LL) + 204LL) & 0x800) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v4 + 2496), 1u);
  }
  else
  {
    v43 = &v59;
    v59 = 0LL;
    HIDWORD(v42) = 0;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 656))(
           WdfDriverGlobals,
           a1,
           22LL) >= 0 )
    {
      DestinationString = 0LL;
      v5 = (const WCHAR *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            v59,
                            0LL);
      RtlInitUnicodeString(&DestinationString, v5);
      if ( !RtlEqualUnicodeString(&DestinationString, &g_SystemContainerId, 1u) )
        _InterlockedOr((volatile signed __int32 *)(v4 + 2496), 1u);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v59);
    }
  }
  KeResetEvent((PRKEVENT)(v4 + 1152));
  HUBSM_AddHsmEvent(v4, 2031LL);
  v6 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v4);
  HUBMISC_WaitForSignal((PVOID)(v4 + 1152), "Hub FDO PnpCallback", v6);
  v7 = *(_DWORD *)(v4 + 1176);
  AcpiPortAttributes = v7;
  if ( v7 >= 0 )
  {
    if ( (*(_DWORD *)(v4 + 40) & 0x800000) != 0 )
      HUBFDO_SetFriendlyNameForBlockedHub(v4);
    RtlInitUnicodeString(&SourceString, 0LL);
    HUBPARENT_GetHubSymbolicLinkName(v4);
    if ( !SourceString.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v4 + 2520),
          2u,
          3u,
          0x19u,
          (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids);
      v7 = -1073741823;
LABEL_17:
      AcpiPortAttributes = v7;
      goto LABEL_34;
    }
    Pool2 = ExAllocatePool2(64LL, 2LL * SourceString.Length, 1748191317LL);
    *(_QWORD *)(v4 + 2552) = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v4 + 2520),
          2u,
          3u,
          0x1Au,
          (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids);
      v7 = -1073741670;
      goto LABEL_17;
    }
    *(_WORD *)(v4 + 2544) = 0;
    *(_WORD *)(v4 + 2546) = SourceString.Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 2544), &SourceString);
    AcpiPortAttributes = HUBACPI_GetAcpiPortAttributes(v4);
    v7 = AcpiPortAttributes;
    if ( AcpiPortAttributes >= 0 )
    {
      HUBCONNECTOR_MapHubPorts(v4);
      WMI_RegisterHub(a1);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 552))(*(_QWORD *)(v4 + 248)) )
        _InterlockedOr((volatile signed __int32 *)(v4 + 760), 1u);
      if ( *(_BYTE *)(v4 + 2728) == 1 )
      {
        if ( *(_BYTE *)(v4 + 240) )
        {
          if ( *(_DWORD *)(v4 + 160) )
          {
            if ( !*(_QWORD *)(v4 + 2656) )
            {
              FirmwareUpdateDevice = FWUPDATE_CreateFirmwareUpdateDevice(v4);
              if ( FirmwareUpdateDevice < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v43) = FirmwareUpdateDevice;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(v4 + 2520),
                  2u,
                  2u,
                  0x1Cu,
                  (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
                  v43);
              }
            }
          }
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2520), 2u, 3u, 0x1Bu, (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids);
    }
  }
LABEL_34:
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C00671E8);
  *(_QWORD *)&DestinationString.Length = v10;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 32),
    0LL);
  if ( (*(_DWORD *)(v10 + 4) & 0x1000) != 0 && v7 >= 0 )
  {
    if ( *(_DWORD *)(v4 + 2216) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
      {
        LODWORD(v42) = 71;
        McTemplateK0pnq_EtwWriteTransfer(
          v4 + 1180,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB20_HUB_INFORMATION,
          0LL,
          *(_QWORD *)(v4 + 248),
          v42,
          v4 + 1180,
          *(_DWORD *)(v4 + 2600));
      }
    }
    else
    {
      v11 = (unsigned int)(*(_DWORD *)(v4 + 2216) - 2);
      if ( *(_DWORD *)(v4 + 2216) == 2 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v42) = 12;
          McTemplateK0pnq_EtwWriteTransfer(
            v4 + 1180,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB30_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v42,
            v4 + 1180,
            *(_DWORD *)(v4 + 2600));
        }
      }
      else if ( *(_DWORD *)(v4 + 2216) == 4 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v42) = *(_DWORD *)(v4 + 2600);
          McTemplateK0pq_EtwWriteTransfer(
            v11,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ROOT_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v42);
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer(
          v11,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_UNKNOWN_HUB_TYPE,
          0LL,
          *(_QWORD *)(v4 + 248));
      }
    }
    v12 = v4 + 2360;
    v13 = *(_QWORD *)(v4 + 2360);
    v14 = v13 - 248;
    if ( v4 + 2360 != v13 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 1256);
        if ( v15 == 3000 )
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_79;
          v16 = *(_DWORD *)(v4 + 168);
          if ( v16 == 1 )
          {
            v27 = *(unsigned __int16 *)(v4 + 184);
            v28 = *(_DWORD *)(v4 + 180);
            v29 = *(_DWORD *)(v4 + 176);
            LODWORD(v59) = *(_DWORD *)(v4 + 196);
            v58 = *(_DWORD *)(v4 + 192);
            v56 = *(_DWORD *)(v4 + 188);
          }
          else
          {
            v27 = 0;
            LODWORD(v59) = 0;
            v28 = 0x7FFFFFFF;
            v58 = 0;
            v29 = 0x7FFFFFFF;
            v56 = 0;
          }
          v20 = *(_DWORD *)(v14 + 204) >> 1;
          if ( (*(_DWORD *)(v14 + 204) & 2) != 0 )
            v21 = *(_BYTE *)(v14 + 1341);
          else
            v21 = 0;
          v30 = 0LL;
          v31 = 0LL;
          if ( v16 == 2 )
            v30 = v4 + 186;
          v24 = 0LL;
          v54 = v30;
          if ( v16 == 2 )
            v31 = v4 + 181;
          v53 = v31;
          if ( v16 == 2 )
            v24 = v4 + 176;
          v25 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_20_PORT_V1;
          v52 = v24;
          LODWORD(v51) = v27;
          LODWORD(v50) = v28;
          LODWORD(v49) = v29;
          LODWORD(v48) = v59;
          LODWORD(v47) = v58;
          v26 = v56;
        }
        else
        {
          if ( v15 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_79;
          v16 = *(_DWORD *)(v4 + 168);
          if ( v16 == 1 )
          {
            v17 = *(unsigned __int16 *)(v4 + 184);
            v18 = *(_DWORD *)(v4 + 180);
            v19 = *(_DWORD *)(v4 + 176);
            v55 = *(_DWORD *)(v4 + 196);
            v57 = *(_DWORD *)(v4 + 192);
            LODWORD(v59) = *(_DWORD *)(v4 + 188);
          }
          else
          {
            v17 = 0;
            v55 = 0;
            v18 = 0x7FFFFFFF;
            v57 = 0;
            v19 = 0x7FFFFFFF;
            LODWORD(v59) = 0;
          }
          v20 = *(_DWORD *)(v14 + 204) >> 1;
          if ( (*(_DWORD *)(v14 + 204) & 2) != 0 )
            v21 = *(_BYTE *)(v14 + 1341);
          else
            v21 = 0;
          v22 = 0LL;
          v23 = 0LL;
          if ( v16 == 2 )
            v22 = v4 + 186;
          v24 = 0LL;
          v54 = v22;
          if ( v16 == 2 )
            v23 = v4 + 181;
          v53 = v23;
          if ( v16 == 2 )
            v24 = v4 + 176;
          v25 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_30_PORT_V1;
          v52 = v24;
          LODWORD(v51) = v17;
          LODWORD(v50) = v18;
          LODWORD(v49) = v19;
          LODWORD(v48) = v55;
          LODWORD(v47) = v57;
          v26 = v59;
        }
        LODWORD(v46) = v26;
        LODWORD(v45) = v16;
        LOBYTE(v44) = v21;
        LOBYTE(v43) = v20 & 1;
        LODWORD(v42) = *(unsigned __int16 *)(v14 + 200);
        McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer(
          v24,
          v25,
          0LL,
          *(_QWORD *)(v4 + 248),
          v42,
          v43,
          v44,
          *(_QWORD *)(v14 + 1416),
          v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        v12 = v4 + 2360;
LABEL_79:
        v32 = *(_DWORD *)(v14 + 204);
        if ( (v32 & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v43) = 12;
          LODWORD(v42) = *(unsigned __int16 *)(v14 + 200);
          McTemplateK0pqn_EtwWriteTransfer(
            *(unsigned __int16 *)(v14 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_UPC,
            0LL,
            *(_QWORD *)(v4 + 248),
            v42,
            v43,
            v14 + 1340);
          v32 = *(_DWORD *)(v14 + 204);
        }
        if ( (v32 & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v43) = 16;
          LODWORD(v42) = *(unsigned __int16 *)(v14 + 200);
          McTemplateK0pqn_EtwWriteTransfer(
            *(unsigned __int16 *)(v14 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_PLD,
            0LL,
            *(_QWORD *)(v4 + 248),
            v42,
            v43,
            v14 + 1352);
          v32 = *(_DWORD *)(v14 + 204);
        }
        if ( (v32 & 0x800) != 0 )
        {
          v33 = *(_QWORD *)(v14 + 1464);
          *(_OWORD *)Src = 0LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
            WdfDriverGlobals,
            v33,
            Src);
          v34 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
          v35 = v34;
          if ( v34 )
          {
            memmove(v34, Src[1], LOWORD(Src[0]));
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
            {
              LODWORD(v42) = *(unsigned __int16 *)(v14 + 200);
              McTemplateK0pqz_EtwWriteTransfer(
                *(unsigned __int16 *)(v14 + 200),
                &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_DSD_USB4,
                0LL,
                *(_QWORD *)(v4 + 248),
                v42,
                v35);
            }
            ExFreePoolWithTag(v35, 0x64334855u);
          }
        }
        v36 = *(_QWORD *)(v14 + 248);
        v14 = v36 - 248;
        if ( v12 == v36 )
        {
          v7 = AcpiPortAttributes;
          v10 = *(_QWORD *)&DestinationString.Length;
          break;
        }
      }
    }
  }
  v37 = *(_QWORD **)(v10 + 24);
  v38 = (_QWORD *)(v4 + 2432);
  if ( *v37 != v10 + 16 )
    __fastfail(3u);
  *v38 = v10 + 16;
  *(_QWORD *)(v4 + 2440) = v37;
  *v37 = v38;
  *(_QWORD *)(v10 + 24) = v38;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 32));
  if ( v7 >= 0 )
  {
    v40 = HUBFDO_RegisterSleepstudyBlockerReasons(*(_QWORD *)(v4 + 24), v4);
    if ( v40 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v43) = v40;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2520),
        2u,
        2u,
        0x1Du,
        (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
        v43);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v42) = v7;
    McTemplateK0pq_EtwWriteTransfer(
      v39,
      &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v4 + 248),
      v42);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v43) = *(_DWORD *)(v4 + 40);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 2520),
      2u,
      3u,
      0x1Eu,
      (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
      v43);
  }
  return (unsigned int)v7;
}
