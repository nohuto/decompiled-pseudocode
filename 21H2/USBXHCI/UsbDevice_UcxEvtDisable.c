/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x1C00476E0
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     Endpoint_Disable @ 0x1C0004D70 (Endpoint_Disable.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000D1B0 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010E7C (WPP_RECORDER_SF_dq.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003D604 (RootHub_DisableLPMForSlot.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 *v9; // r14
  __int64 v10; // rbx
  unsigned int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-60h]
  _OWORD v18[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h]

  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v18);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v18[0] + 1) + 16LL),
         off_1C00612C0);
  v5 = v3;
  v6 = *(_QWORD *)(v3 + 8);
  v7 = *(_QWORD *)(v6 + 144);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v6 + 72),
      4u,
      0xCu,
      0x35u,
      (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
      *(unsigned __int8 *)(v3 + 135),
      *(_QWORD *)v3);
  if ( !*(_BYTE *)(v5 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = *(unsigned __int8 *)(v5 + 135);
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        4u,
        0xCu,
        0x36u,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        v17,
        *(_QWORD *)v5);
    }
    LOBYTE(v4) = 1;
    Endpoint_Disable(*(_QWORD *)(v5 + 176), v4);
    v9 = (__int64 *)(v5 + 184);
    v10 = 30LL;
    do
    {
      if ( *v9 )
      {
        LOBYTE(v8) = 1;
        Endpoint_Disable(*v9, v8);
        *v9 = 0LL;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  if ( *(_BYTE *)(v5 + 568) )
    RootHub_DisableLPMForSlot(
      *(_QWORD **)(*(_QWORD *)(v5 + 8) + 152LL),
      *(_DWORD *)(v5 + 44),
      *(unsigned __int8 *)(v5 + 135));
  if ( *(_BYTE *)(v5 + 569) )
  {
    v12 = *(_DWORD *)(v5 + 44) - 1;
    v13 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL);
    v14 = *(_QWORD *)(v13 + 48) + 112LL * v12;
    RootHub_AcquireReadModifyWriteLock(v13, v12);
    --*(_DWORD *)(v14 + 48);
    RootHub_ReleaseReadModifyWriteLock(v13, v12);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v5 + 8)) )
  {
    UsbDevice_SetDeviceDisabled(v5, v15);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  *(_QWORD *)(v5 + 424) = a2;
  *(_BYTE *)(v5 + 432) = 1;
  memset((void *)(v5 + 456), 0, 0x60uLL);
  *(_QWORD *)(v5 + 528) = 0LL;
  *(_DWORD *)(v5 + 536) = 0;
  *(_DWORD *)(v5 + 540) = 0;
  *(_QWORD *)(v5 + 544) = 0LL;
  *(_QWORD *)(v5 + 496) = UsbDevice_DisableCompletionReturnSuccess;
  v16 = *(_DWORD *)(v5 + 492) & 0xFFFF2BFF;
  *(_QWORD *)(v5 + 504) = v5;
  *(_DWORD *)(v5 + 492) = v16 | 0x2800;
  *(_BYTE *)(v5 + 495) = *(_BYTE *)(v5 + 135);
  return Command_SendCommand(v7, v5 + 456);
}
