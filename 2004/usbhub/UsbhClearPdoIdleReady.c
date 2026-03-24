/*
 * XREFs of UsbhClearPdoIdleReady @ 0x1C0013058
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001010 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0058F24 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0015C80 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhClearPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r9d
  _DWORD *v10; // rax
  KSPIN_LOCK *v11; // rbp
  KIRQL v12; // r14
  __int64 v13; // r9
  int v14; // r10d
  _DWORD *v15; // rax

  v6 = PdoExt(a2);
  v7 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232235619LL);
  v8 = v7;
  if ( v7 )
  {
    Log(a1, 32, 1919306033, 0LL, v7);
    v6[446] &= v9;
    v10 = FdoExt(a1);
    if ( *((_QWORD *)v10 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v10 + 560))(*((_QWORD *)v10 + 529), v8, 0LL);
    v11 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
    v12 = KeAcquireSpinLockRaiseToDpc(v11);
    Log(a1, 256, 1146498353, v8, a3);
    Log(a1, v14, 1146498354, v13, 1232235619LL);
    v15 = FdoExt(a1);
    if ( *((_QWORD *)v15 + 559) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v15 + 559))(
        *((_QWORD *)v15 + 529),
        v8,
        a3,
        1232235619LL);
    KeReleaseSpinLock(v11, v12);
  }
}
