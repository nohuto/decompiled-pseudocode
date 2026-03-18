/*
 * XREFs of MiObtainFreePages @ 0x1405360B4
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiDecreaseAvailablePages @ 0x1402B6F90 (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 * Callees:
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14026ADB8 (PsReferencePartitionSafe.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiWakeModifiedPageWriter @ 0x140310698 (MiWakeModifiedPageWriter.c)
 *     CcNotifyWriteBehindEx @ 0x140380408 (CcNotifyWriteBehindEx.c)
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
