/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x140516850
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *(_QWORD *)(a1 + 8) |= 1uLL;
  LODWORD(v6) = 0;
  *a2 = a1;
  do
    KeYieldProcessorEx(&v6, (__int64)a2, a3, a4);
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return (unsigned int)v6;
}
