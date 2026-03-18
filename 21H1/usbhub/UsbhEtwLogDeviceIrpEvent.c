/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C0013F80
 * Callers:
 *     UsbhCompletePdoWakeIrp @ 0x1C001507C (UsbhCompletePdoWakeIrp.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoPower_WaitWake @ 0x1C0016DC0 (UsbhPdoPower_WaitWake.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C001CD00 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhFdoResetPdoPort @ 0x1C00304E0 (UsbhFdoResetPdoPort.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0057020 (UsbhPdoPnp_StartDevice.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0058BE0 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0058F24 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C0013F08 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // [rsp+50h] [rbp-68h] BYREF
  int v11; // [rsp+58h] [rbp-60h] BYREF
  __int16 v12; // [rsp+5Ch] [rbp-5Ch]
  __int16 v13; // [rsp+5Eh] [rbp-5Ah]
  __int16 v14; // [rsp+60h] [rbp-58h]
  __int16 v15; // [rsp+62h] [rbp-56h]
  GUID v16; // [rsp+68h] [rbp-50h] BYREF
  _OWORD v17[2]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v18; // [rsp+98h] [rbp-20h]
  int v19; // [rsp+A0h] [rbp-18h]

  v10 = a4;
  result = 0;
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v19 = 0;
  v16 = 0LL;
  if ( dword_1C006B650 )
  {
    v7 = *(_QWORD *)(a1 + 1184);
    if ( !v7 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v8 = *(_QWORD *)(v7 + 64);
    if ( !v8 )
      UsbhTrapFatal_Dbg(v7, 0LL);
    if ( *(_DWORD *)v8 != 541218120 )
      UsbhTrapFatal_Dbg(v7, *(_QWORD *)(v7 + 64));
    v11 = *(_DWORD *)(v8 + 5192);
    v12 = *(_WORD *)(v8 + 5196);
    v13 = *(_DWORD *)(v8 + 5200);
    v14 = *(_WORD *)(v8 + 5228);
    v15 = *(_WORD *)(v8 + 5230);
    UsbhEtwGetDeviceInfo(a1, (__int64)v17);
    if ( v9 && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(v9, &v16) >= 0 )
      return UsbhEtwWrite(a3, &v16, &v11, 12LL, v17, 44LL, &v10, 4LL, 0LL);
    else
      return UsbhEtwWrite(a3, 0LL, &v11, 12LL, v17, 44LL, &v10, 4LL, 0LL);
  }
  return result;
}
