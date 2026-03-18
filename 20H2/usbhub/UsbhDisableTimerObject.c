/*
 * XREFs of UsbhDisableTimerObject @ 0x1C0011260
 * Callers:
 *     UsbhSshEnterSx @ 0x1C00021C0 (UsbhSshEnterSx.c)
 *     UsbhSshSuspendHub @ 0x1C000D970 (UsbhSshSuspendHub.c)
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FE00 (UsbhSshSetPortsBusyState.c)
 *     Usbh_PIND_Disable_Action @ 0x1C002F27C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C002F3E0 (Usbh_PIND_SetAuto_Action.c)
 *     UsbhFreeTimerObject @ 0x1C003B69C (UsbhFreeTimerObject.c)
 *     UsbhAsyncStop @ 0x1C004204C (UsbhAsyncStop.c)
 *     UsbhHubStart @ 0x1C00430F0 (UsbhHubStart.c)
 *     UsbhInitCallbackWorker @ 0x1C0043450 (UsbhInitCallbackWorker.c)
 *     UsbhDeletePdo @ 0x1C0054AFC (UsbhDeletePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0057020 (UsbhPdoPnp_StartDevice.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0059A30 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x1C0059DA0 (UsbhSshDisabled.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDisableTimerObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  KIRQL v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    if ( dword_1C006B650 )
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_DISABLE_TIMER, 0LL);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 3728));
    v5 = *(int *)(a2 + 4);
    v6 = *(_DWORD *)(a2 + 4);
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 827618148;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = v5;
        v6 = *(_DWORD *)(a2 + 4);
      }
    }
    if ( v6 == 1 )
    {
      Log(a1, 0x2000, 1685279794, a2, 1LL);
      v10 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v10 + 8) != a2 + 56 || (v11 = *(_QWORD **)(a2 + 64), *v11 != a2 + 56) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
    }
    else
    {
      Log(a1, 0x2000, 1685279795, a2, v6);
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 3728), v9);
  }
}
