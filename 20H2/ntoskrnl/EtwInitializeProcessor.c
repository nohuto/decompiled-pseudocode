/*
 * XREFs of EtwInitializeProcessor @ 0x1407A9728
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     EtwpCCSwapInitializeProcessor @ 0x1407A9798 (EtwpCCSwapInitializeProcessor.c)
 *     EtwpInitializeActivityIdSeed @ 0x1407A97E0 (EtwpInitializeActivityIdSeed.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwInitializeProcessor(__int64 a1)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x150uLL, 0x70777445u);
  *(_QWORD *)(a1 + 33576) = PoolWithTag;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x150uLL);
  EtwpInitializeActivityIdSeed(v3, *(unsigned int *)(a1 + 36));
  return EtwpCCSwapInitializeProcessor(v3);
}
