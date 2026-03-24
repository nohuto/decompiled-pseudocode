/*
 * XREFs of HalpPmemErrorDeferredRecovery @ 0x1404D0148
 * Callers:
 *     HalpGenericErrorSourceRecovery @ 0x1404CFD18 (HalpGenericErrorSourceRecovery.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     WheaRequestDeferredRecovery @ 0x1405BD0B0 (WheaRequestDeferredRecovery.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpPmemErrorDeferredRecovery(_DWORD *Src)
{
  unsigned int v2; // ebx
  PSLIST_ENTRY v3; // rdi
  SIZE_T v4; // r14
  PVOID PoolWithTag; // rax
  void *v6; // rsi

  v2 = 0;
  v3 = RtlpInterlockedPopEntrySList(&WheapDrsPoolList);
  if ( v3 )
  {
    v4 = (unsigned int)(24 * Src[21] + 88);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x206C6148u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v4);
      memmove(v6, Src, v4);
      *((_QWORD *)&v3[3].Next + 1) = v6;
      *((_QWORD *)&v3[4].Next + 1) = 0LL;
      LODWORD(v3[5].Next) = 0;
      HIDWORD(v3[5].Next) = 2;
      if ( !(unsigned __int8)WheaRequestDeferredRecovery(&v3[1], &v3[3].Next + 1) )
      {
        RtlpInterlockedPushEntrySList(&WheapDrsPoolList, v3);
        v2 = -1073741757;
        ExFreePoolWithTag(v6, 0x206C6148u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741757;
  }
  return v2;
}
