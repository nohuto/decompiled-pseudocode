/*
 * XREFs of MiPartitionObjectToPartition @ 0x140336E60
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1403341D0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053280C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1405329D4 (MmFreeNonChargedSecurePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x140546200 (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateSecureKernelPages @ 0x140551904 (MmAllocateSecureKernelPages.c)
 *     MmGetPageFileInformation @ 0x1406DE9BC (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076B7A0 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmBuildLargePages @ 0x1408D9F14 (MmBuildLargePages.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1402636B0 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiPartitionObjectToPartition(ULONG_PTR **BugCheckParameter2, char a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  int v6; // r11d
  ULONG_PTR *v7; // r10
  ULONG_PTR v9; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v7 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
    }
    else
    {
      v7 = *BugCheckParameter2;
      v6 = 1;
    }
  }
  else
  {
    v7 = &MiSystemPartition;
  }
  if ( *((_DWORD *)v7 + 2) != 305535296 )
    goto LABEL_15;
  if ( v6 != 1 )
    goto LABEL_5;
  if ( (ULONG_PTR **)v7[22] != BugCheckParameter2 )
LABEL_15:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v7, 0LL);
  if ( PsReferencePartitionSafe((__int64)BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v9, (ULONG_PTR)v7, BugCheckParameter4);
    v7 = (ULONG_PTR *)BugCheckParameter4;
  }
LABEL_5:
  *a3 = BugCheckParameter4;
  return v7;
}
