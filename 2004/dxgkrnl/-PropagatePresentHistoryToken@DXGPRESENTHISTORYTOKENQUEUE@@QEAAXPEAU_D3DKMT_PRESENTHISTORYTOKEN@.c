/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11111@Z @ 0x1C003FE9C
 * Callers:
 *     ?VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN@@@Z @ 0x1C0040A24 (-VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESE.c)
 * Callees:
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C004113C (McTemplateK0ppqqx_EtwWriteTransfer.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        int a3,
        __int64 a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppqqx_EtwWriteTransfer(
      0,
      (unsigned int)&EventPropagatePresentHistory,
      a3,
      (_DWORD)SpinLock,
      (char)a2,
      0,
      0,
      0);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v12 = *((unsigned int *)SpinLock + 2);
  if ( (unsigned int)v12 >= 0x800 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v13 + 24) = 3473LL;
    WdLogEvent5_WdAssertion(v13);
    v12 = *((unsigned int *)SpinLock + 2);
  }
  SpinLock[v12 + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~1u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~2u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~4u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~8u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x10u;
  v14 = *((unsigned int *)SpinLock + 2);
  LOBYTE(v11) = (32 * a8) | *((_BYTE *)SpinLock + v14 + 16464) & 0xDF;
  *((_BYTE *)SpinLock + v14 + 16464) = v11;
  v15 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v15;
  if ( v15 == *((_DWORD *)SpinLock + 3) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v14);
    *(_QWORD *)(v16 + 24) = 3490LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
