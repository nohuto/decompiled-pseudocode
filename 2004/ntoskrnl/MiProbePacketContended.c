/*
 * XREFs of MiProbePacketContended @ 0x14024FEC8
 * Callers:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140345870 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
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
