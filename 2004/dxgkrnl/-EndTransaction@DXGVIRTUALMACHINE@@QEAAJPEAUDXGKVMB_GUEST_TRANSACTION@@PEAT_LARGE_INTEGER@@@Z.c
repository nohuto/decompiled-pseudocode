/*
 * XREFs of ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x1C02BE650
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C027731C (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::EndTransaction(
        DXGVIRTUALMACHINE *this,
        struct _KEVENT *a2,
        union _LARGE_INTEGER *a3)
{
  NTSTATUS v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 LockNV; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v15; // rax
  struct DXGKVMB_GUEST_TRANSACTION *v16; // rax
  struct DXGKVMB_GUEST_TRANSACTION **Flink; // rdx

  if ( g_DisableTransactionTimeout )
    a3 = 0LL;
  v5 = KeWaitForSingleObject(&a2[1], Executive, 0, 0, a3);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 304));
  if ( v5 == 258 )
  {
    if ( KeReadStateEvent(a2 + 1) )
      goto LABEL_7;
    v10 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v10 + 24) = 126LL;
    WdLogEvent5_WdError(v10);
  }
  if ( v5 )
  {
    LODWORD(LockNV) = -1073741823;
    goto LABEL_10;
  }
LABEL_7:
  LockNV = a2[2].Header.LockNV;
  v12 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  Blink = a2->Header.WaitListHead.Blink;
  *(_QWORD *)(v12 + 24) = Blink;
  if ( (int)LockNV < 0 )
  {
    v15 = WdLogNewEntry5_WdError(Blink, v13);
    *(_QWORD *)(v15 + 24) = a2->Header.WaitListHead.Blink;
    *(_QWORD *)(v15 + 32) = LockNV;
    WdLogEvent5_WdError(v15);
  }
LABEL_10:
  v16 = *(struct DXGKVMB_GUEST_TRANSACTION **)&a2->Header.Lock;
  if ( *(struct _KEVENT **)(*(_QWORD *)&a2->Header.Lock + 8LL) != a2
    || (Flink = (struct DXGKVMB_GUEST_TRANSACTION **)a2->Header.WaitListHead.Flink,
        *Flink != (struct DXGKVMB_GUEST_TRANSACTION *)a2) )
  {
    __fastfail(3u);
  }
  *Flink = v16;
  *((_QWORD *)v16 + 1) = Flink;
  *((_QWORD *)this + 39) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 304, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)LockNV;
}
