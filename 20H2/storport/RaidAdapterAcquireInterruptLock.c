/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C00059E8
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004FF0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000B9A8 (RaidAdapterAcquireStartIoLock.c)
 *     StorPortNotification @ 0x1C000E7E0 (StorPortNotification.c)
 *     RaidAdapterStopAdapter @ 0x1C00133A4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C001342C (RaidAdapterRestartAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0016DD0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0017068 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0018128 (RaidAdapterInsertUnit.c)
 *     RaidAdapterGetFirstUnit @ 0x1C002CA50 (RaidAdapterGetFirstUnit.c)
 *     RaidAdapterReInitialize @ 0x1C002DADC (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DD38 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C002FF18 (RaidAdapterStartMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C0037EF8 (StorAcquireSpinLockEx.c)
 *     StorPortSynchronizeAccess @ 0x1C0039F50 (StorPortSynchronizeAccess.c)
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
    v6 = *(struct _KINTERRUPT **)(a1 + 696);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
  }
  return v1;
}
