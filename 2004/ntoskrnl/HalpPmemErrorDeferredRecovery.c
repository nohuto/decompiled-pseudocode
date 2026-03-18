/*
 * XREFs of HalpPmemErrorDeferredRecovery @ 0x1404CB218
 * Callers:
 *     HalpGenericErrorSourceRecovery @ 0x1404CADE8 (HalpGenericErrorSourceRecovery.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     WheaRequestDeferredRecovery @ 0x1405B7B00 (WheaRequestDeferredRecovery.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
