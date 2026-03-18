/*
 * XREFs of RtlpGetNonLegacyXStateAreaLength @ 0x14058DEF4
 * Callers:
 *     KiInitializeUserApc @ 0x1402E8960 (KiInitializeUserApc.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x140325500 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlpGetNonLegacyXStateAreaLength(__int64 a1)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    a1 &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
  return (unsigned int)RtlpGetEntireXStateAreaLength(a1) - 512;
}
