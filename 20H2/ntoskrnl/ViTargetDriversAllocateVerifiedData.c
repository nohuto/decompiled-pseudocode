/*
 * XREFs of ViTargetDriversAllocateVerifiedData @ 0x1409DA360
 * Callers:
 *     VfTargetDriversAdd @ 0x1403714FC (VfTargetDriversAdd.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D9DA4 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     InitializeSListHead @ 0x140338AF0 (InitializeSListHead.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

_SLIST_HEADER *__fastcall ViTargetDriversAllocateVerifiedData(unsigned __int64 a1)
{
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v3; // rbx

  PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x130uLL, 0x44566656u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x130uLL);
    v3->Alignment = a1;
    v3[2].Region = 2557876544LL;
    v3[1].Region = (unsigned __int64)&v3[1];
    v3[1].Alignment = (unsigned __int64)&v3[1];
    InitializeSListHead(v3 + 4);
    InitializeSListHead(v3 + 5);
    v3[16].Region = (unsigned __int64)&v3[16];
    v3[16].Alignment = (unsigned __int64)&v3[16];
  }
  else
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
  }
  return v3;
}
