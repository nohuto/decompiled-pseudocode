/*
 * XREFs of Etw_EndpointListRundown @ 0x1C000B1C0
 * Callers:
 *     Etw_DeviceRundown @ 0x1C000B108 (Etw_DeviceRundown.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C00495B4 (McTemplateK0pppnnn_EtwWriteTransfer.c)
 */

void __fastcall Etw_EndpointListRundown(int a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  int v3; // r13d
  KIRQL v5; // al
  __int64 v6; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  KIRQL v9; // al
  KIRQL v10; // di
  _QWORD *v11; // r14
  __int64 v12; // r12
  __int64 v13; // r15
  _QWORD *v14; // rax
  unsigned int v15; // ebp
  _QWORD **v16; // r14
  _QWORD *v17; // rdi

  v2 = (KSPIN_LOCK *)(a2 + 88);
  v3 = a1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  v6 = *(unsigned int *)(a2 + 112);
  KeReleaseSpinLock(v2, v5);
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(
                      SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
                      8 * v6,
                      0x49434858u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, 8 * v6);
      v9 = KeAcquireSpinLockRaiseToDpc(v2);
      v10 = v9;
      if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 112) )
      {
        v11 = (_QWORD *)(a2 + 96);
        v12 = 0LL;
        v13 = *v11 - 64LL;
        if ( v11 != (_QWORD *)*v11 )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1640))(
              WdfDriverGlobals,
              *(_QWORD *)(v13 + 24),
              Etw_EndpointListRundown,
              836LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v8[v12] = v13;
            v12 = (unsigned int)(v12 + 1);
            v14 = *(_QWORD **)(v13 + 64);
            v13 = (__int64)(v14 - 8);
          }
          while ( v11 != v14 );
          v3 = a1;
        }
        KeReleaseSpinLock(v2, v10);
        v15 = 0;
        if ( (_DWORD)v6 )
        {
          v16 = (_QWORD **)v8;
          do
          {
            v17 = *v16;
            if ( !*v16 )
              break;
            if ( (WPP_MAIN_CB.AlignmentRequirement & 1) != 0 )
              McTemplateK0pppnnn_EtwWriteTransfer(
                (_DWORD)v17 + 103,
                (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_ENDPOINT_INFORMATION,
                v3,
                *(_QWORD *)(*v17 + 8LL),
                v17[1],
                v17[3]);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
              WdfDriverGlobals,
              v17[3],
              Etw_EndpointListRundown,
              873LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v15;
            ++v16;
          }
          while ( v15 < (unsigned int)v6 );
        }
        if ( v8 )
          ExFreePoolWithTag(v8, 0x49434858u);
        return;
      }
      v6 = *(unsigned int *)(a2 + 112);
      KeReleaseSpinLock(v2, v9);
      ExFreePoolWithTag(v8, 0x49434858u);
    }
  }
}
