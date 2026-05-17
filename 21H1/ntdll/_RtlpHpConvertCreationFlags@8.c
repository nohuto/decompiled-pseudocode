/*
 * XREFs of _RtlpHpConvertCreationFlags@8 @ 0x4B35D6BE
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpConvertCreationFlags(int a1, __int16 a2)
{
  int v2; // esi

  v2 = a1 & 1;
  if ( (a1 & 4) != 0 )
    v2 |= 0x80000000;
  if ( (a1 & 8) != 0 )
    v2 |= 2u;
  if ( (a1 & 0x8000000) != 0 || (a2 & 0x1000) != 0 )
    v2 |= 0x20000000u;
  if ( (a1 & 0x20) != 0 || (a2 & 0x10) != 0 )
    v2 |= 0x10000000u;
  if ( (a1 & 0x40000) != 0 )
    v2 |= 0x40000000u;
  if ( (a1 & 0x10) != 0 )
    v2 |= 0x2000000u;
  return v2 | a1 & 0xF000;
}
