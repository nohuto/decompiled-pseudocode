/*
 * XREFs of MiLockWsle @ 0x140250290
 * Callers:
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 * Callees:
 *     MiSetVaAgeList @ 0x140237D20 (MiSetVaAgeList.c)
 */

_BOOL8 __fastcall MiLockWsle(__int64 a1, unsigned __int64 a2)
{
  return (unsigned int)MiSetVaAgeList(a1, a2, 1u, 8u) != 0;
}
