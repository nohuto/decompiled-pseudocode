/*
 * XREFs of MiObtainFreePages @ 0x14053B584
 * Callers:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402363C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDecreaseAvailablePages @ 0x140319380 (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402AC004 (PsReferencePartitionSafe.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiWakeModifiedPageWriter @ 0x14035BB54 (MiWakeModifiedPageWriter.c)
 *     CcNotifyWriteBehindEx @ 0x140384778 (CcNotifyWriteBehindEx.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 6848);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    v3 = *(_QWORD *)(a1 + 176);
    if ( PsReferencePartitionSafe(v3) )
    {
      CcNotifyWriteBehindEx(1, v3);
      PsDereferencePartition(v3);
    }
    v4 = *(_QWORD *)(a1 + 7600);
    if ( *(_QWORD *)(a1 + 7488) - v4 >= 0x10 )
    {
      KeSetEvent((PRKEVENT)(a1 + 792), 0, 0);
      v4 = *(_QWORD *)(a1 + 7600);
    }
    if ( v4 >= 0x10 )
      MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 98) )
      KeSetEvent((PRKEVENT)(v1 + 96), 0, 0);
  }
}
