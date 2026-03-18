/*
 * XREFs of Etw_DeviceListRundown @ 0x1C0013970
 * Callers:
 *     Etw_ControllerRundown @ 0x1C0013888 (Etw_ControllerRundown.c)
 * Callees:
 *     Etw_DeviceRundown @ 0x1C000A82C (Etw_DeviceRundown.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 */

void __fastcall Etw_DeviceListRundown(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  __int64 v3; // r13
  KIRQL v5; // al
  __int64 v6; // rsi
  __int64 *PoolWithTag; // rax
  __int64 *v8; // rbx
  KIRQL v9; // al
  KIRQL v10; // di
  _QWORD *v11; // r14
  __int64 v12; // r12
  _QWORD *v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebp
  __int64 *v18; // r14
  _QWORD *v19; // rdi

  v2 = (KSPIN_LOCK *)(a2 + 40);
  v3 = a1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 40));
  v6 = *(unsigned int *)(a2 + 64);
  KeReleaseSpinLock(v2, v5);
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(
                                 (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                                 8 * v6,
                                 0x49434858u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, 8 * v6);
      v9 = KeAcquireSpinLockRaiseToDpc(v2);
      v10 = v9;
      if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 64) )
      {
        v11 = (_QWORD *)(a2 + 48);
        v12 = 0LL;
        v13 = (_QWORD *)(*v11 - 72LL);
        if ( v11 != (_QWORD *)*v11 )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1640))(
              WdfDriverGlobals,
              *v13,
              Etw_DeviceListRundown,
              603LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v8[v12] = (__int64)v13;
            v12 = (unsigned int)(v12 + 1);
            v14 = (_QWORD *)v13[9];
            v13 = v14 - 9;
          }
          while ( v11 != v14 );
          v3 = a1;
        }
        KeReleaseSpinLock(v2, v10);
        v17 = 0;
        if ( (_DWORD)v6 )
        {
          v18 = v8;
          do
          {
            v19 = (_QWORD *)*v18;
            if ( !*v18 )
              break;
            Etw_DeviceRundown(v3, *v18, v15, v16);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
              WdfDriverGlobals,
              *v19,
              Etw_DeviceListRundown,
              639LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v17;
            ++v18;
          }
          while ( v17 < (unsigned int)v6 );
        }
        if ( v8 )
          ExFreePoolWithTag(v8, 0x49434858u);
        return;
      }
      v6 = *(unsigned int *)(a2 + 64);
      KeReleaseSpinLock(v2, v9);
      ExFreePoolWithTag(v8, 0x49434858u);
    }
  }
}
