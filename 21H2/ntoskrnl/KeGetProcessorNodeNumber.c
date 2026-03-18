/*
 * XREFs of KeGetProcessorNodeNumber @ 0x14025E060
 * Callers:
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     HvlInitializeProcessor @ 0x14082A2D4 (HvlInitializeProcessor.c)
 *     KiInitializeThreadCycleTable @ 0x140A59068 (KiInitializeThreadCycleTable.c)
 *     MmInitializeProcessor @ 0x140A59E20 (MmInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
