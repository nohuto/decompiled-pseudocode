/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C00064E8
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005C20 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterFindUnit @ 0x1C0006FB4 (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000C4F8 (RaidAdapterAcquireStartIoLock.c)
 *     StorPortNotification @ 0x1C000D230 (StorPortNotification.c)
 *     RaidAdapterStopAdapter @ 0x1C000FFE0 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0010068 (RaidAdapterRestartAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014AD0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0014D64 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0015E20 (RaidAdapterInsertUnit.c)
 *     RaidAdapterGetFirstUnit @ 0x1C002B658 (RaidAdapterGetFirstUnit.c)
 *     RaidAdapterReInitialize @ 0x1C002C6CC (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002C928 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C002EAFC (RaidAdapterStartMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C0036B08 (StorAcquireSpinLockEx.c)
 *     StorPortSynchronizeAccess @ 0x1C0038B20 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  KIRQL v1; // bl
  __int64 v3; // rsi
  unsigned int i; // edi
  struct _KINTERRUPT *v6; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4513) )
  {
    v3 = *(_QWORD *)(a1 + 4496);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24));
    if ( *(_DWORD *)(a1 + 4480) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v3 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 48LL * i + 24));
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 680);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
  }
  return v1;
}
