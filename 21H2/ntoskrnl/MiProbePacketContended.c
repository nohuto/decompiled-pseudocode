/*
 * XREFs of MiProbePacketContended @ 0x140274818
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPacket @ 0x14031B810 (MiProbeAndLockPacket.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 */

LOGICAL __fastcall MiProbePacketContended(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r10
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  if ( v1 && (unsigned int)MiPageTableLockIsContended(*(_QWORD *)(a1 + 104), v1) )
    return 1;
  if ( (unsigned int)MiWorkingSetIsContended(*(_QWORD *)(v2 + 104)) )
    return 1;
  result = KeShouldYieldProcessor();
  if ( result )
    return 1;
  return result;
}
