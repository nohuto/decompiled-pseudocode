/*
 * XREFs of MiInitializeInPageSupport @ 0x1402B79F0
 * Callers:
 *     MiGetInPageSupportBlock @ 0x1402B7934 (MiGetInPageSupportBlock.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140533DD8 (MiPfIssueCoalescedSupport.c)
 *     MiGetReadyInPageBlock @ 0x1408C4FB4 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     PsGetPagePriorityThread @ 0x1402B8E40 (PsGetPagePriorityThread.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiInitializeInPageSupport(ULONG_PTR BugCheckParameter2, char a2)
{
  char v4; // r8
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // eax
  unsigned int PagePriorityThread; // eax
  int v8; // edx
  __int64 result; // rax

  memset((void *)BugCheckParameter2, 0, 0x110uLL);
  *(_WORD *)(BugCheckParameter2 + 33) = 1536;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 40;
  v4 = 0;
  *(_QWORD *)(BugCheckParameter2 + 40) = BugCheckParameter2 + 40;
  *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  *(_QWORD *)(BugCheckParameter2 + 72) = BugCheckParameter2 + 64;
  *(_QWORD *)(BugCheckParameter2 + 64) = BugCheckParameter2 + 64;
  *(_WORD *)(BugCheckParameter2 + 56) = 0;
  *(_BYTE *)(BugCheckParameter2 + 58) = 6;
  *(_DWORD *)(BugCheckParameter2 + 60) = 0;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(BugCheckParameter2 + 192) |= 0x40u;
  *(_DWORD *)(BugCheckParameter2 + 176) = 1;
  *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
  *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(BugCheckParameter2 + 152) = CurrentThread;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  v8 = *(_DWORD *)(BugCheckParameter2 + 192);
  if ( PagePriorityThread > 5 )
  {
    LOBYTE(PagePriorityThread) = 5;
    v4 = 5;
  }
  else
  {
    v8 |= 0x80000u;
    if ( PagePriorityThread )
      v4 = PagePriorityThread - 1;
  }
  result = PagePriorityThread & 7;
  *(_DWORD *)(BugCheckParameter2 + 192) = v8 & 0xFFFF81FF | (((unsigned int)result | (8 * (v4 & 7))) << 9);
  if ( (a2 & 2) != 0 )
  {
    result = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 216) = result;
    if ( result )
      *(_BYTE *)(result + 26) |= 1u;
  }
  return result;
}
