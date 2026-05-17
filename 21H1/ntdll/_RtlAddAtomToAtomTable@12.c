/*
 * XREFs of _RtlAddAtomToAtomTable@12 @ 0x4B2E00D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 */

int __thiscall RtlAddAtomToAtomTable(void *this, int a2, int a3, int a4)
{
  return RtlAddAtomToAtomTableEx(a4, this);
}
