/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x180111D58
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall TpSetDefaultPoolCpuSets(void *Src, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // ebx

  v5 = a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpDefaultPoolCpuSetLock, a2, a3, a4);
  TppPoolpDefaultPoolCpuSetCount = v5;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * v5);
  return RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
