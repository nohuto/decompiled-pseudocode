/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C0013DA0
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0018660 (UsbhPdoUnblockPendedD0IrpWI.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C0013F08 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4, ...)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // [rsp+60h] [rbp-68h] BYREF
  int v11; // [rsp+68h] [rbp-60h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp-5Ch]
  __int16 v13; // [rsp+6Eh] [rbp-5Ah]
  __int16 v14; // [rsp+70h] [rbp-58h]
  __int16 v15; // [rsp+72h] [rbp-56h]
  GUID v16; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v17[32]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-20h]
  int v19; // [rsp+B0h] [rbp-18h]
  va_list va; // [rsp+F0h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  result = 0;
  v18 = 0LL;
  v19 = 0;
  memset(v17, 0, sizeof(v17));
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
    UsbhEtwGetDeviceInfo(a1, v17);
    if ( v9 && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(v9, &v16) >= 0 )
      return UsbhEtwWrite(a3, &v16, &v11, 12LL, v17, 44LL, &v10, 4LL, va, 4LL, 0LL);
    else
      return UsbhEtwWrite(a3, 0LL, &v11, 12LL, v17, 44LL, &v10, 4LL, va, 4LL, 0LL);
  }
  return result;
}
