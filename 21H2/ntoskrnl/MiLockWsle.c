/*
 * XREFs of MiLockWsle @ 0x140270EB0
 * Callers:
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 * Callees:
 *     MiSetVaAgeList @ 0x14032D6B0 (MiSetVaAgeList.c)
 */

_BOOL8 __fastcall MiLockWsle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 8;
  return (unsigned int)MiSetVaAgeList(a1, a2, 1LL, a4) != 0;
}
