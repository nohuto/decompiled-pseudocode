/*
 * XREFs of MiIsSoftwareEnclave @ 0x14027CB30
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x3100000) != 0x2100000 )
    return 0LL;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return 0LL;
  return result;
}
