/*
 * XREFs of MiProbePacketContended @ 0x1402D138C
 * Callers:
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140316BC0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 */

LOGICAL __fastcall MiProbePacketContended(__int64 a1)
{
  unsigned __int64 v1; // rdx
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 && (unsigned int)MiPageTableLockIsContended(*(_QWORD *)(a1 + 96), v1) )
    return 1;
  if ( MiWorkingSetIsContended(*(_QWORD *)(a1 + 96)) )
    return 1;
  result = KeShouldYieldProcessor();
  if ( result )
    return 1;
  return result;
}
