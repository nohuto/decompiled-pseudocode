/*
 * XREFs of RtlAddAtomToAtomTable @ 0x14070C930
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x14024FF20 (RtlAddAtomToAtomTableEx.c)
 */

__int64 __fastcall RtlAddAtomToAtomTable(__int64 a1, _WORD *a2, unsigned __int16 *a3)
{
  return RtlAddAtomToAtomTableEx(a1, a2, a3, 0);
}
