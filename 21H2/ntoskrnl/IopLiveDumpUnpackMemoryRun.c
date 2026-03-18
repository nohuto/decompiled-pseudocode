/*
 * XREFs of IopLiveDumpUnpackMemoryRun @ 0x14093D300
 * Callers:
 *     IopLiveDumpAllocateFromIOSpace @ 0x14093B898 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x14093C544 (IopLiveDumpFreeIoSpaceRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopLiveDumpUnpackMemoryRun(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx

  v3 = a1 & 0xFFFFFFFFFFLL;
  v4 = a1 >> 40;
  *a2 = v3;
  *a3 = v4;
  if ( v3 && v3 + (unsigned int)v4 >= v3 )
    return 0LL;
  else
    return 3221225485LL;
}
