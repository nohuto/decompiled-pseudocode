/*
 * XREFs of sub_180035C5C @ 0x180035C5C
 * Callers:
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_18007E858 @ 0x18007E858 (sub_18007E858.c)
 * Callees:
 *     sub_180035CA4 @ 0x180035CA4 (sub_180035CA4.c)
 *     sub_180035E78 @ 0x180035E78 (sub_180035E78.c)
 */

BOOLEAN __fastcall sub_180035C5C(_BYTE *a1)
{
  if ( !a1[40] )
    sub_180035E78();
  sub_180035CA4(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
