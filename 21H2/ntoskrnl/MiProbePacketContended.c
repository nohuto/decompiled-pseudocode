/*
 * XREFs of MiProbePacketContended @ 0x140308408
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1402B7460 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 */

LOGICAL __fastcall MiProbePacketContended(__int64 a1)
{
  LOGICAL result; // eax

  if ( *(_QWORD *)(a1 + 32) && (unsigned int)MiPageTableLockIsContended(*(_QWORD *)(a1 + 96)) )
    return 1;
  if ( (unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 96)) )
    return 1;
  result = KeShouldYieldProcessor();
  if ( result )
    return 1;
  return result;
}
