/*
 * XREFs of EtwInitializeProcessor @ 0x14079A3F8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpCCSwapInitializeProcessor @ 0x14079A468 (EtwpCCSwapInitializeProcessor.c)
 *     EtwpInitializeActivityIdSeed @ 0x14079A4B0 (EtwpInitializeActivityIdSeed.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
