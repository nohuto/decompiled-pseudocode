/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x1801119A8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

void __fastcall TpSetDefaultPoolCpuSets(void *Src, unsigned int a2)
{
  RtlAcquireSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
  TppPoolpDefaultPoolCpuSetCount = a2;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * a2);
  RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
