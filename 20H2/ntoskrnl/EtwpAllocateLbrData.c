/*
 * XREFs of EtwpAllocateLbrData @ 0x14094A894
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x14094A960 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x14094AA24 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateLbrData(__int64 a1)
{
  _DWORD *PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x78777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_OWORD *)PoolWithTag = 0LL;
  PoolWithTag[4] = 0;
  *(_QWORD *)(a1 + 1008) = PoolWithTag;
  return 0LL;
}
