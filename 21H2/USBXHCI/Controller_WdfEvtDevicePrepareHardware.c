/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00028EC (Debug_FreAssertMsg.c)
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0014EA4 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016478 (XilDeviceSlot_PrepareHardware.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018D38 (Controller_AllocateIrqlTrackingArray.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_DeallocateIrqlTrackingArray @ 0x1C00313E8 (Controller_DeallocateIrqlTrackingArray.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     SleepstudyHelper_GenerateGuid @ 0x1C0052A98 (SleepstudyHelper_GenerateGuid.c)
 *     DmaEnabler_Create @ 0x1C006E4E0 (DmaEnabler_Create.c)
 *     CommonBuffer_Create @ 0x1C006E6D0 (CommonBuffer_Create.c)
 *     Command_PrepareHardware @ 0x1C006EBBC (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006ED2C (Interrupter_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C006F968 (RootHub_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x1C0071244 (Register_PrepareHardware.c)
 *     SecureDmaEnabler_Create @ 0x1C0078584 (SecureDmaEnabler_Create.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x1C00795F4 (SleepstudyHelper_RegisterComponentEx.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // edx
  char IsSecureDevice; // r14
  NTSTATUS v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // ecx
  __int64 *v13; // r8
  char v14; // dl
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // r9d
  int v20; // ecx
  int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  GUID v25; // [rsp+50h] [rbp-B0h] BYREF
  GUID v26; // [rsp+60h] [rbp-A0h] BYREF
  GUID v27; // [rsp+70h] [rbp-90h] BYREF
  GUID v28; // [rsp+80h] [rbp-80h] BYREF
  char v29; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  DestinationString.Buffer = (wchar_t *)&v29;
  v28 = 0LL;
  v27 = 0LL;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00613D8)
                 + 8);
  IsSecureDevice = Controller_IsSecureDevice(v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_i(*(_QWORD *)(v6 + 72), v7, 4, 46, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, a1);
  }
  if ( *(_DWORD *)(v6 + 816) != KeQueryActiveProcessorCountEx(0xFFFFu) )
  {
    Controller_DeallocateIrqlTrackingArray(v6);
    Controller_AllocateIrqlTrackingArray(v6, v16, v17, v18);
  }
  v9 = Register_PrepareHardware(*(_QWORD *)(v6 + 88), a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 47;
LABEL_21:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 72),
        v10,
        4,
        v19,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v9);
      goto LABEL_29;
    }
    goto LABEL_29;
  }
  if ( !IsSecureDevice )
    goto LABEL_43;
  if ( !*(_QWORD *)(v6 + 104) )
  {
    v11 = SecureDmaEnabler_Create(v6);
    if ( v11 < 0 )
      goto LABEL_29;
  }
  if ( *(_DWORD *)(v6 + 556) == 2 )
  {
LABEL_43:
    if ( !*(_QWORD *)(v6 + 96) )
    {
      v11 = DmaEnabler_Create(a1, v6, (__int64 *)(v6 + 96));
      if ( v11 < 0 )
        goto LABEL_29;
    }
  }
  v12 = *(_DWORD *)(v6 + 556);
  if ( !v12 )
    goto LABEL_10;
  v20 = v12 - 1;
  if ( v20 )
  {
    if ( v20 != 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
        1365);
      v11 = -1073741630;
      goto LABEL_29;
    }
LABEL_10:
    v13 = (__int64 *)(v6 + 120);
    if ( *(_QWORD *)(v6 + 120) )
    {
LABEL_13:
      v11 = Interrupter_PrepareHardware(*(_QWORD *)(v6 + 128), a2, a3);
      if ( v11 < 0 )
        goto LABEL_29;
      v11 = XilDeviceSlot_PrepareHardware(*(_QWORD *)(v6 + 136));
      if ( v11 < 0 )
        goto LABEL_29;
      v11 = Command_PrepareHardware(*(_QWORD *)(v6 + 144));
      if ( v11 < 0 )
        goto LABEL_29;
      v11 = RootHub_PrepareHardware(*(_QWORD *)(v6 + 152));
      if ( v11 < 0 )
        goto LABEL_29;
      if ( !*(_DWORD *)(v6 + 464) || !*(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
        return (unsigned int)v11;
      v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 264))(WdfDriverGlobals, a1);
      SleepstudyHelper_GenerateGuid(0LL, v22, &v28);
      SleepstudyHelper_GenerateGuid(7LL, v22 + 336, &v27);
      v9 = RtlUnicodeStringPrintf(
             &DestinationString,
             L"USBXHCI Selective Suspend Disabled/ Unsupported: Reason code: %d",
             *(unsigned int *)(v6 + 464));
      v11 = v9;
      if ( v9 >= 0 )
      {
        v25 = v27;
        v23 = *(_QWORD *)(g_WdfDriverUsbXhciContext + 32);
        v26 = v28;
        v9 = SleepstudyHelper_RegisterComponentEx(
               v23,
               (unsigned int)&v26,
               (unsigned int)&v25,
               (unsigned int)&DestinationString,
               v6 + 792);
        v11 = v9;
        if ( v9 >= 0 )
          return (unsigned int)v11;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_29;
        v19 = 49;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_29;
        v19 = 48;
      }
      goto LABEL_21;
    }
    v14 = 0;
    goto LABEL_12;
  }
  v13 = (__int64 *)(v6 + 120);
  if ( *(_QWORD *)(v6 + 120) )
    goto LABEL_13;
  v14 = 1;
LABEL_12:
  v11 = CommonBuffer_Create(v6, v14, v13);
  if ( v11 >= 0 )
    goto LABEL_13;
LABEL_29:
  DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 1;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v21, 4, 50, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v11);
  }
  Controller_ReportFatalError(v6, 32, 4124, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v11;
}
