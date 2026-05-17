/*
 * XREFs of _RtlpHpLfhContextMaximumExtension@4 @ 0x4B3766FE
 * Callers:
 *     _RtlpHpHeapAllocate@16 @ 0x4B37877E (_RtlpHpHeapAllocate@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpLfhContextMaximumExtension(unsigned int a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // edi

  v1 = a1;
  if ( a1 > 8 )
    v1 = 8;
  v2 = (((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
  v3 = 5 * v1 - (((_BYTE)v1 - 1) & 3) + v2 + 67;
  v4 = v3 - (((_BYTE)v3 - 1) & 0x3F);
  v5 = v4 + 63;
  if ( (((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) != 0 )
    v5 = v4 + 127;
  return 129 * (v5 + v1 * (v2 + 64));
}
