/*
 * XREFs of MiVadShouldBeForked @ 0x14055BD04
 * Callers:
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadShouldBeForked(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x500000) != 0x500000 )
  {
    if ( (v1 & 0x100000) != 0 && ((v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000) )
      return 1LL;
    v2 = v1 & 0x70;
    if ( (v1 & 0x70) == 0 || v2 == 32 || v2 == 80 )
    {
      if ( (v1 & 0x100000) != 0 )
      {
        if ( (v1 & 0x1000000) != 0 || (v1 & 0x2000000) == 0 )
          return 1LL;
      }
      else if ( (*(_DWORD *)(a1 + 64) & 0x4000000) != 0 )
      {
        return 1LL;
      }
    }
  }
  return 0LL;
}
