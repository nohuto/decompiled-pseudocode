/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C0046A60
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000A1DC (UsbDevice_SetDeviceDisabled.c)
 *     Endpoint_Disable @ 0x1C000A348 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010224 (WPP_RECORDER_SF_dq.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011228 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0012CF4 (RootHub_AcquireReadModifyWriteLock.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003C814 (RootHub_DisableLPMForSlot.c)
 */

char __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r15
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  __int64 *v13; // r14
  __int64 v14; // rbx
  unsigned int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // rbx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  unsigned int v22; // eax
  _OWORD v23[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+60h] [rbp-28h]

  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  LOWORD(v23[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v23);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v23[0] + 1) + 16LL),
         off_1C00602C0);
  v7 = v3;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v8 + 144);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(unsigned __int8 *)(v3 + 135);
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v8 + 72),
      v10,
      12,
      53,
      (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
  }
  if ( !*(_BYTE *)(v7 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(v7 + 135);
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        v11,
        12,
        54,
        (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
        *(_BYTE *)(v7 + 135),
        *(_QWORD *)v7);
    }
    LOBYTE(v4) = 1;
    Endpoint_Disable(*(_QWORD *)(v7 + 176), v4);
    v13 = (__int64 *)(v7 + 184);
    v14 = 30LL;
    do
    {
      if ( *v13 )
      {
        LOBYTE(v12) = 1;
        Endpoint_Disable(*v13, v12);
        *v13 = 0LL;
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  if ( *(_BYTE *)(v7 + 568) )
    RootHub_DisableLPMForSlot(
      *(_QWORD **)(*(_QWORD *)(v7 + 8) + 152LL),
      *(_DWORD *)(v7 + 44),
      *(unsigned __int8 *)(v7 + 135),
      v6);
  if ( *(_BYTE *)(v7 + 569) )
  {
    v16 = *(_DWORD *)(v7 + 44) - 1;
    v17 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 152LL);
    v18 = *(_QWORD *)(v17 + 48) + 104LL * v16;
    RootHub_AcquireReadModifyWriteLock(v17, v16, v5, v6);
    --*(_DWORD *)(v18 + 48);
    RootHub_ReleaseReadModifyWriteLock(v17, v16, v19, v20);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v7 + 8)) )
  {
    UsbDevice_SetDeviceDisabled(v7, v21);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  *(_QWORD *)(v7 + 424) = a2;
  *(_BYTE *)(v7 + 432) = 1;
  memset((void *)(v7 + 456), 0, 0x60uLL);
  *(_QWORD *)(v7 + 528) = 0LL;
  *(_DWORD *)(v7 + 536) = 0;
  *(_DWORD *)(v7 + 540) = 0;
  *(_QWORD *)(v7 + 544) = 0LL;
  *(_QWORD *)(v7 + 496) = UsbDevice_DisableCompletionReturnSuccess;
  v22 = *(_DWORD *)(v7 + 492) & 0xFFFF2BFF;
  *(_QWORD *)(v7 + 504) = v7;
  *(_DWORD *)(v7 + 492) = v22 | 0x2800;
  *(_BYTE *)(v7 + 495) = *(_BYTE *)(v7 + 135);
  return Command_SendCommand(v9, v7 + 456);
}
