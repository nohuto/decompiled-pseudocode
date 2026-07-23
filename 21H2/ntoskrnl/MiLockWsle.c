/*
 * XREFs of MiLockWsle @ 0x14025EE50
 * Callers:
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 * Callees:
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 */

_BOOL8 __fastcall MiLockWsle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 8;
  return (unsigned int)MiSetVaAgeList(a1, a2, 1LL, a4) != 0;
}
