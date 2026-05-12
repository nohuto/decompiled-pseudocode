/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C0006B2C
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00060E0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C000CAB4 (RaidAdapterReleaseStartIoLock.c)
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
 *     StorPortSynchronizeAccess @ 0x1C00390A0 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  KIRQL v2; // si
  __int64 v3; // rdi
  unsigned int v4; // ebx
  struct _KINTERRUPT *v5; // rcx
  PKINTERRUPT *v6; // r14

  v2 = a2;
  if ( *(_BYTE *)(a1 + 4513) )
  {
    v3 = *(_QWORD *)(a1 + 4496);
    if ( *(_DWORD *)(a1 + 4480) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v6 = (PKINTERRUPT *)(48LL * v4 + v3 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v6, *(_BYTE *)v3);
          v6 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    v5 = *(struct _KINTERRUPT **)(v3 + 24);
    a2 = v2;
    goto LABEL_5;
  }
  v5 = *(struct _KINTERRUPT **)(a1 + 680);
  if ( v5 )
LABEL_5:
    KeReleaseInterruptSpinLock(v5, a2);
}
