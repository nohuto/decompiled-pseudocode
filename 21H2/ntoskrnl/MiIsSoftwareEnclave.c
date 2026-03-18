/*
 * XREFs of MiIsSoftwareEnclave @ 0x14030FA5C
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) != 0x4200000 )
    return 0LL;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return 0LL;
  return result;
}
