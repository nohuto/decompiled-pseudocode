/*
 * XREFs of _RtlpValidateLFHBlock@8 @ 0x4B371DA9
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

bool __fastcall RtlpValidateLFHBlock(int a1, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // ecx

  v2 = a1 ^ RtlpLFHKey ^ *(_DWORD *)a2 ^ (a2 >> 3);
  if ( (_WORD)v2 )
    v3 = 0;
  else
    v3 = *(_DWORD *)(a2 - (v2 >> 13));
  return v3 == **(_DWORD **)(v3 + 4);
}
