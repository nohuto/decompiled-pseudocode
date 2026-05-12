/*
 * XREFs of RaProcessDFxQueuedRequests @ 0x1C0033660
 * Callers:
 *     <none>
 * Callees:
 *     RaProcessDFxPendingIrp @ 0x1C00335D0 (RaProcessDFxPendingIrp.c)
 */

void __fastcall RaProcessDFxQueuedRequests(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  KSPIN_LOCK *v2; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(KSPIN_LOCK **)(DeviceObject + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)v2 )
  {
    if ( *(_DWORD *)v2 == 1 )
    {
      v8 = v2 + 415;
      while ( (_QWORD *)*v8 != v8 )
      {
        KeAcquireInStackQueuedSpinLock(v2 + 418, &LockHandle);
        v9 = (_QWORD *)v2[416];
        if ( (_QWORD *)*v9 != v8 || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9) )
LABEL_14:
          __fastfail(3u);
        v2[416] = (KSPIN_LOCK)v10;
        *v10 = v8;
        --*((_DWORD *)v2 + 834);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        RaProcessDFxPendingIrp(DeviceObject, *(v9 - 1));
      }
      *((_BYTE *)v2 + 451) &= ~2u;
    }
  }
  else
  {
    v5 = v2 + 734;
    while ( (_QWORD *)*v5 != v5 )
    {
      KeAcquireInStackQueuedSpinLock(v2 + 737, &LockHandle);
      v6 = (_QWORD *)v2[735];
      if ( (_QWORD *)*v6 != v5 )
        goto LABEL_14;
      v7 = (_QWORD *)v6[1];
      if ( (_QWORD *)*v7 != v6 )
        goto LABEL_14;
      v2[735] = (KSPIN_LOCK)v7;
      *v7 = v5;
      --*((_DWORD *)v2 + 1472);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      RaProcessDFxPendingIrp(DeviceObject, *(v6 - 1));
    }
    *((_BYTE *)v2 + 110) &= ~0x20u;
  }
  if ( Context )
    IoFreeWorkItem(Context);
}
