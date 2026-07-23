/*
 * XREFs of _RtlpGenerateIFEOKeyFilterId@4 @ 0x4B3424DE
 * Callers:
 *     _RtlpCreateIFEOKeyFilterKey@16 @ 0x4B342064 (_RtlpCreateIFEOKeyFilterKey@16.c)
 * Callees:
 *     _RtlRandomEx@4 @ 0x4B2AECC0 (_RtlRandomEx@4.c)
 */

int __thiscall RtlpGenerateIFEOKeyFilterId(_WORD *this)
{
  _WORD *v1; // esi
  int v2; // edi
  ULONG Seed; // [esp+10h] [ebp-8h] BYREF
  _WORD *v5; // [esp+14h] [ebp-4h]

  v5 = this;
  while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
    _mm_pause();
  v1 = v5;
  Seed = MEMORY[0x7FFE0014];
  v2 = 8;
  do
  {
    *v1++ = RtlRandomEx(&Seed);
    --v2;
  }
  while ( v2 );
  return 0;
}
