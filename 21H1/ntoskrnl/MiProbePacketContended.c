/*
 * XREFs of MiProbePacketContended @ 0x1402A8EF8
 * Callers:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140307A70 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 */

LOGICAL __fastcall MiProbePacketContended(__int64 a1)
{
  __int64 v1; // rdx
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 && (unsigned int)MiPageTableLockIsContended(*(_QWORD *)(a1 + 96), v1) )
    return 1;
  if ( (unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 96)) )
    return 1;
  result = KeShouldYieldProcessor();
  if ( result )
    return 1;
  return result;
}
