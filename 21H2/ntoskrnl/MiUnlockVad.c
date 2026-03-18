/*
 * XREFs of MiUnlockVad @ 0x140281C44
 * Callers:
 *     MiWaitForVadDeletion @ 0x140202010 (MiWaitForVadDeletion.c)
 *     MiDeleteEmptyPageTables @ 0x14029F6FC (MiDeleteEmptyPageTables.c)
 *     MiLockAddressSpaceToo @ 0x140310450 (MiLockAddressSpaceToo.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140373BAC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403D5614 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPages @ 0x140580FA4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140581158 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCanDeleteEnclave @ 0x1405A862C (MiCanDeleteEnclave.c)
 *     MiFindPlaceholderVadToReplace @ 0x1405B2088 (MiFindPlaceholderVadToReplace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiUnlockVadRange @ 0x1406F7F40 (MiUnlockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14096D8A8 (MiCoalescePlaceholderAllocations.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140972F98 (MiDeleteVadHotPatchState.c)
 *     MiPrepareToHotPatchVad @ 0x140976DFC (MiPrepareToHotPatchVad.c)
 *     MiInitializeVsmEnclave @ 0x14097A228 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14097A714 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x14097AB60 (MiTerminateEnclave.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r9d
  __int64 result; // rax

  *(_BYTE *)(a1 + 1384) &= ~0x80u;
  v2 = a2 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 40);
  CurrentThread = KeGetCurrentThread();
  if ( v2 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&CurrentThread[1].Process;
  v7 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v7
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v8 = (unsigned int)(v8 + 1);
    p_Process += 96;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_18;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v8, v7);
      _disable();
    }
    v9 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    result = (unsigned __int8)p_Process[16];
    CurrentThread->AbEntrySummary |= 1 << result;
    _enable();
    if ( v9 )
      result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v2, v9);
    goto LABEL_15;
  }
LABEL_18:
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
  _enable();
LABEL_15:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
