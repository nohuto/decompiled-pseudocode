/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C000666C
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005C20 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterFindUnit @ 0x1C0006FB4 (RaidAdapterFindUnit.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C000C4C4 (RaidAdapterReleaseStartIoLock.c)
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
 *     StorPortSynchronizeAccess @ 0x1C0038B20 (StorPortSynchronizeAccess.c)
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
