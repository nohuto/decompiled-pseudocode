/*
 * XREFs of _TpSetDefaultPoolCpuSets@8 @ 0x4B383BD4
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall TpSetDefaultPoolCpuSets(void *Src, int a2)
{
  RtlAcquireSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
  TppPoolpDefaultPoolCpuSetCount = a2;
  memcpy(&TppPoolpDefaultPoolCpuSets, Src, 8 * a2);
  return RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
