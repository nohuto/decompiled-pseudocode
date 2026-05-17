/*
 * XREFs of _RtlpHpVsChunkSetExtraPresent@12 @ 0x4B37ECDF
 * Callers:
 *     _RtlpHpSegSetExtraPresent@8 @ 0x4B37D8E7 (_RtlpHpSegSetExtraPresent@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpVsChunkSetExtraPresent(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned int v5; // ecx
  int result; // eax

  v3 = a2 - 8;
  v4 = *(_DWORD *)(a1 + 152) & 1;
  if ( v4 && (a2 & 0xFFF) == 0 )
    v3 = a2 - 16;
  v5 = 8 * (((v3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v3) >> 1) & 0x7FFF) - 8;
  if ( v4 && ((v3 + 16) & 0xFFF) == 0 )
    v5 = 8 * (((v3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v3) >> 1) & 0x7FFF) - 16;
  result = 0x4000;
  *(_WORD *)(v5 + a2 - 2) |= 0x4000u;
  return result;
}
