/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x1C000F010
 * Callers:
 *     <none>
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00057C4 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000A1DC (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C000FBA0 (WPP_RECORDER_SF_dqD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010224 (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036494 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     WPP_RECORDER_SF_dqdL @ 0x1C0047318 (WPP_RECORDER_SF_dqdL.c)
 */

char __fastcall UsbDevice_SetAddressCompletion(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r8
  __int64 v14; // rdx
  int v16; // edx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v22[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v23; // [rsp+78h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 48);
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v17,
        12,
        22,
        (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
        *(_BYTE *)(v4 + 135),
        *(_QWORD *)v4);
    }
    if ( (*(_DWORD *)(v4 + 492) & 0x200) == 0 )
    {
      v13 = *(_BYTE *)(v4 + 432) == 0 ? 0xC0000001 : 0;
LABEL_9:
      v14 = *(_QWORD *)(v4 + 424);
      *(_QWORD *)(v4 + 424) = 0LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               v14,
               v13);
    }
    return UsbDevice_SetDeviceDisabled(v4, a2);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( (*(_DWORD *)(v4 + 492) & 0x200) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = *(unsigned __int8 *)(a1 + 61);
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_dq(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v16,
            12,
            24,
            (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
            *(_BYTE *)(a1 + 61),
            *(_QWORD *)v4);
        }
      }
      else
      {
        LOWORD(v22[0]) = 40;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01023 + 2128))(
          WdfDriverGlobals,
          *(_QWORD *)(v4 + 424),
          v22);
        v7 = *((_QWORD *)&v22[0] + 1);
        v8 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 136LL);
        v9 = *(_QWORD *)(v8 + 88);
        v10 = v8 + 16;
        v11 = *(_QWORD *)(v9 + 8);
        if ( *(_BYTE *)(v10 + 64)
          && (*(_BYTE *)(v4 + 656) && *(_DWORD *)(v11 + 540) == 2 || *(_DWORD *)(v11 + 540) == 1) )
        {
          XilDeviceSlot_SendQuerySlotContextInfoRequest(v10, v4, &v21, 0LL);
          v12 = v21;
        }
        else
        {
          v12 = (unsigned __int8)*(_DWORD *)(XilUsbDevice_GetDeviceContextBufferVA(v4) + 12);
        }
        *(_DWORD *)(v7 + 28) = v12;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v12, 23);
      }
      v13 = 0LL;
      goto LABEL_9;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqdL(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(v4 + 135),
        (*(_DWORD *)(v4 + 492) >> 9) & 1,
        a4);
    if ( (*(_DWORD *)(v4 + 492) & 0x200) == 0 )
    {
      v13 = 3221225473LL;
      goto LABEL_9;
    }
    v18 = *(_QWORD *)(v4 + 8);
    v19 = *(_QWORD *)(v18 + 144);
    if ( *(_BYTE *)(v4 + 432) )
    {
      Controller_HwVerifierBreakIfEnabled(
        v18,
        *(_QWORD *)v4,
        0,
        0x40000,
        (__int64)"Set Address Command with BSR=1 failed",
        a1 + 24,
        a3);
      return Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4117, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      memset((void *)(v4 + 456), 0, 0x60uLL);
      *(_QWORD *)(v4 + 504) = v4;
      *(_QWORD *)(v4 + 496) = UsbDevice_DisableCompletionReturnFailure;
      v20 = *(_DWORD *)(v4 + 492) & 0xFFFF2BFF;
      *(_QWORD *)(v4 + 528) = 0LL;
      *(_QWORD *)(v4 + 536) = 0LL;
      *(_DWORD *)(v4 + 492) = v20 | 0x2800;
      *(_BYTE *)(v4 + 495) = *(_BYTE *)(v4 + 135);
      *(_QWORD *)(v4 + 544) = 0LL;
      return Command_SendCommand(v19, v4 + 456);
    }
  }
}
