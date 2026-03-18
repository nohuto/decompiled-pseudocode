/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00076EC (Debug_FreAssertMsg.c)
 *     Controller_IsSecureDevice @ 0x1C0008D84 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C001430C (RtlUnicodeStringPrintf.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C00144CC (XilDeviceSlot_PrepareHardware.c)
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018B0C (Controller_AllocateIrqlTrackingArray.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_DeallocateIrqlTrackingArray @ 0x1C0030940 (Controller_DeallocateIrqlTrackingArray.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     Command_PrepareHardware @ 0x1C006BA58 (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006BBE0 (Interrupter_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006BD6C (DmaEnabler_Create.c)
 *     CommonBuffer_Create @ 0x1C006C250 (CommonBuffer_Create.c)
 *     RootHub_PrepareHardware @ 0x1C006D2F0 (RootHub_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x1C006EC08 (Register_PrepareHardware.c)
 *     SecureDmaEnabler_Create @ 0x1C0076E94 (SecureDmaEnabler_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // edx
  char IsSecureDevice; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // r9d
  int v20; // ecx
  int v21; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  char v27; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  DestinationString.Buffer = (wchar_t *)&v27;
  v26 = 0LL;
  v25 = 0LL;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00603D8)
                 + 8);
  IsSecureDevice = Controller_IsSecureDevice(v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_i(*(_QWORD *)(v6 + 72), v7, 4, 46, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, a1);
  }
  if ( *(_DWORD *)(v6 + 800) != KeQueryActiveProcessorCountEx(0xFFFFu) )
  {
    Controller_DeallocateIrqlTrackingArray(v6);
    Controller_AllocateIrqlTrackingArray(v6, v16, v17, v18);
  }
  v9 = Register_PrepareHardware(*(_QWORD *)(v6 + 88), a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v19 = 47;
    goto LABEL_24;
  }
  if ( IsSecureDevice )
  {
    v10 = v6 + 104;
    if ( !*(_QWORD *)(v6 + 104) )
    {
      v11 = SecureDmaEnabler_Create(v6);
      if ( v11 < 0 )
        goto LABEL_32;
    }
    if ( *(_DWORD *)(v6 + 540) != 2 )
      goto LABEL_9;
  }
  if ( *(_QWORD *)(v6 + 96) || (v11 = DmaEnabler_Create(a1, v6), v11 >= 0) )
  {
LABEL_9:
    v12 = *(_DWORD *)(v6 + 540);
    if ( v12 )
    {
      v20 = v12 - 1;
      if ( !v20 )
      {
        if ( !*(_QWORD *)(v6 + 120) )
        {
          LOBYTE(v10) = 1;
LABEL_12:
          v11 = CommonBuffer_Create(v6, v10);
          if ( v11 < 0 )
            goto LABEL_32;
        }
LABEL_13:
        v11 = Interrupter_PrepareHardware(*(_QWORD *)(v6 + 128), a2, a3);
        if ( v11 >= 0 )
        {
          v11 = XilDeviceSlot_PrepareHardware(*(_QWORD *)(v6 + 136));
          if ( v11 >= 0 )
          {
            v11 = Command_PrepareHardware(*(_QWORD *)(v6 + 144));
            if ( v11 >= 0 )
            {
              v11 = RootHub_PrepareHardware(*(_QWORD *)(v6 + 152));
              if ( v11 >= 0 )
              {
                if ( *(_DWORD *)(v6 + 464) && *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
                {
                  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 264))(
                          WdfDriverGlobals,
                          a1);
                  SleepstudyHelper_GenerateGuid(0LL, v13, &v26);
                  SleepstudyHelper_GenerateGuid(7LL, v13 + 336, &v25);
                  v9 = RtlUnicodeStringPrintf(
                         &DestinationString,
                         L"USBXHCI Selective Suspend Disabled/ Unsupported: Reason code: %d",
                         *(unsigned int *)(v6 + 464));
                  v11 = v9;
                  if ( v9 >= 0 )
                  {
                    v23 = v25;
                    v14 = *(_QWORD *)(g_WdfDriverUsbXhciContext + 32);
                    v24 = v26;
                    v9 = SleepstudyHelper_RegisterComponentEx(v14, &v24, &v23, &DestinationString, v6 + 776);
                    v11 = v9;
                    if ( v9 >= 0 )
                      return (unsigned int)v11;
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_42;
                    v19 = 49;
                    goto LABEL_24;
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v19 = 48;
LABEL_24:
                    LOBYTE(v10) = 2;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(v6 + 72),
                      v10,
                      4,
                      v19,
                      (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
                      v9);
                  }
                }
LABEL_42:
                if ( v11 >= 0 )
                  return (unsigned int)v11;
                goto LABEL_32;
              }
            }
          }
        }
        goto LABEL_32;
      }
      if ( v20 != 1 )
      {
        Debug_FreAssertMsg(
          (__int64)"Unexpected DMA mode",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
          1359);
        v11 = -1073741630;
        goto LABEL_32;
      }
    }
    if ( !*(_QWORD *)(v6 + 120) )
    {
      v10 = 0LL;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
LABEL_32:
  DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 1;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v21, 4, 50, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, v11);
  }
  Controller_ReportFatalError(v6, 32, 4124, 0LL, 0LL, 0LL, 0LL);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return (unsigned int)v11;
}
