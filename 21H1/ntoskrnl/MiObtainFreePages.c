/*
 * XREFs of MiObtainFreePages @ 0x140535A64
 * Callers:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiDecreaseAvailablePages @ 0x140224310 (MiDecreaseAvailablePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0644 (MiWakeModifiedPageWriter.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402D4758 (PsReferencePartitionSafe.c)
 *     CcNotifyWriteBehindEx @ 0x14037F530 (CcNotifyWriteBehindEx.c)
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
