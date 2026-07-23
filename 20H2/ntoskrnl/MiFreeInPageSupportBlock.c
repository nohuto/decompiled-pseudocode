/*
 * XREFs of MiFreeInPageSupportBlock @ 0x1402CA7B8
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x140231FD0 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiFaultGetFileExtents @ 0x1405468F0 (MiFaultGetFileExtents.c)
 *     MmPrefetchPagesEx @ 0x1406580A8 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x1406585B0 (MiPfAllocateMdls.c)
 *     MiFreeRotateVadEvent @ 0x1406E15D8 (MiFreeRotateVadEvent.c)
 *     MiGetReadyInPageBlock @ 0x1408CADF4 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiInsertInPageBlock @ 0x1402CA838 (MiInsertInPageBlock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rcx

  if ( *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() && *((_QWORD *)&ListEntry[13].Next + 1) )
    KeAbPostRelease((ULONG_PTR)ListEntry);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[11], 0xFFFFFFFF) == 1 )
  {
    Next = ListEntry[16].Next;
    if ( Next && Next != &ListEntry[17] )
      ExFreePoolWithTag(Next, 0);
    if ( !(unsigned int)MiInsertInPageBlock(ListEntry) )
      ExFreePoolWithTag(ListEntry, 0);
  }
}
