/*
 * XREFs of MiInitializeInPageSupport @ 0x14033C4D0
 * Callers:
 *     MiGetInPageSupportBlock @ 0x14033C424 (MiGetInPageSupportBlock.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140594898 (MiPfIssueCoalescedSupport.c)
 *     MiGetReadyInPageBlock @ 0x14096D038 (MiGetReadyInPageBlock.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiInitializeInPageSupport(__int64 a1, char a2)
{
  char v4; // r8
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // eax
  unsigned int PagePriorityThread; // eax
  int v8; // edx
  __int64 result; // rax

  memset((void *)a1, 0, 0x110uLL);
  *(_WORD *)(a1 + 33) = 1536;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  v4 = 0;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 64;
  *(_QWORD *)(a1 + 64) = a1 + 64;
  *(_WORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 58) = 6;
  *(_DWORD *)(a1 + 60) = 0;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(a1 + 192) |= 0x40u;
  *(_DWORD *)(a1 + 176) = 1;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 152) = CurrentThread;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  v8 = *(_DWORD *)(a1 + 192);
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
  *(_DWORD *)(a1 + 192) = v8 & 0xFFFF81FF | (((unsigned int)result | (8 * (v4 & 7))) << 9);
  if ( (a2 & 2) != 0 )
  {
    result = KeAbPreAcquire(a1, 0LL, 0LL);
    *(_QWORD *)(a1 + 216) = result;
    if ( result )
      *(_BYTE *)(result + 18) = 1;
  }
  return result;
}
