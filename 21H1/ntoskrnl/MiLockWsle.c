/*
 * XREFs of MiLockWsle @ 0x1402A92C0
 * Callers:
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 * Callees:
 *     MiSetVaAgeList @ 0x140290D70 (MiSetVaAgeList.c)
 */

_BOOL8 __fastcall MiLockWsle(__int64 a1, unsigned __int64 a2)
{
  return (unsigned int)MiSetVaAgeList(a1, a2, 1u, 8u) != 0;
}
