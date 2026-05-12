/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C00069A8
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00060E0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000CAE8 (RaidAdapterAcquireStartIoLock.c)
 *     StorPortNotification @ 0x1C000D820 (StorPortNotification.c)
 *     RaidAdapterStopAdapter @ 0x1C0011E54 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0011EDC (RaidAdapterRestartAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0016940 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0016BD4 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0017C90 (RaidAdapterInsertUnit.c)
 *     RaidAdapterGetFirstUnit @ 0x1C002BBF8 (RaidAdapterGetFirstUnit.c)
 *     RaidAdapterReInitialize @ 0x1C002CC7C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002CED8 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C002F0B4 (RaidAdapterStartMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C0037088 (StorAcquireSpinLockEx.c)
 *     StorPortSynchronizeAccess @ 0x1C00390A0 (StorPortSynchronizeAccess.c)
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
