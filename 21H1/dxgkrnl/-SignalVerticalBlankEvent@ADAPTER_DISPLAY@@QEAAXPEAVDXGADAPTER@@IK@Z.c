/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C005D370
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C005D048 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0013AA4 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C0039DA0 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C003D2D8 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // r8
  struct _KEVENT *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 20) )
  {
    v7 = *((_QWORD *)this + 14);
    v8 = 3968LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + v7 + 960), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v9 = DXGADAPTER::NumberOfVSyncWaiter(a2, a3);
      McTemplateK0qqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v8 + v7 + 952),
        &EventDWMVsyncSignal,
        v10,
        *(_DWORD *)(v8 + v7 + 944),
        a4,
        *(_BYTE *)(v8 + v7 + 952),
        v9);
    }
    KePulseEvent((PRKEVENT)(v8 + v7 + 912), 0, 0);
    v11 = *(struct _KEVENT **)(v8 + v7 + 936);
    if ( v11 )
    {
      *(_DWORD *)(v8 + v7 + 948) = a4;
      if ( *(_DWORD *)(v8 + v7 + 944) <= a4 )
      {
        if ( *(_BYTE *)(v8 + v7 + 952) )
        {
          *(_BYTE *)(v8 + v7 + 952) = 0;
          if ( *((_QWORD *)a2 + 335) )
          {
            DXGADAPTER::DecrementVSyncWaiter(a2, a3);
            v11 = *(struct _KEVENT **)(v8 + v7 + 936);
          }
        }
        KeSetEvent(v11, 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
