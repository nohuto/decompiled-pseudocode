/*
 * XREFs of SmPrepareForFatalHeapCorruption @ 0x14059A0E0
 * Callers:
 *     SmHpBufferProtectEx @ 0x14023FD24 (SmHpBufferProtectEx.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14033BB60 (MmGetPhysicalAddress.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039B140 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalHeapCorruption(
        void *Src,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        LONGLONG *a5)
{
  __int64 v5; // rbp
  __int64 v7; // r14
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v9; // rdi
  unsigned int v10; // ebx
  _QWORD *v11; // rcx

  v5 = a4;
  v7 = a3;
  *a5 = MmGetPhysicalAddress(Src).QuadPart / 4096;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              0x1060uLL,
                                                              0x50626D73u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->State = 0;
    v11 = (_QWORD *)(((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    *v11 = 1LL;
    v11[6] = 0LL;
    v11[5] = *a5;
    v11[1] = Src;
    v11[2] = 4096LL;
    v11[4] = v5;
    v11[3] = v7;
    memmove(v11 + 6, Src, 0x1000uLL);
    if ( KeRegisterBugCheckReasonCallback(
           v9,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalHeapCorruptionDumpCallback,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"nt!store memory compression") )
    {
      v9 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
