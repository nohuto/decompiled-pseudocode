/*
 * XREFs of EtwpAllocatePmcData @ 0x14093BF30
 * Callers:
 *     EtwpUpdatePmcCounters @ 0x14093D73C (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x14093D870 (EtwpUpdatePmcEvents.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1403603C0 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  SIZE_T v2; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rbx
  PVOID v6; // rax

  v2 = 8 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 24;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x58777445u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v2);
  v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)EtwpMaxPmcCounter, 0x58777445u);
  *v4 = v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(v4, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(a1 + 1000) = v4;
  return 0LL;
}
