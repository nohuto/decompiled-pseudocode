/*
 * XREFs of _RtlDeleteAtomFromAtomTable@8 @ 0x4B2A7820
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDereferenceAtom@12 @ 0x4B2A78A1 (_RtlpDereferenceAtom@12.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpLockAtomTable@4 @ 0x4B2E04D4 (_RtlpLockAtomTable@4.c)
 *     _RtlpAtomMapAtomToHandleEntry@8 @ 0x4B2E04EF (_RtlpAtomMapAtomToHandleEntry@8.c)
 */

int __stdcall RtlDeleteAtomFromAtomTable(int a1, unsigned __int16 a2)
{
  int v2; // esi
  int v3; // eax

  if ( !(unsigned __int8)RtlpLockAtomTable(a1) )
    return -1073741811;
  v2 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v2 = 0;
  }
  else
  {
    v3 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v3 && *(_WORD *)(v3 + 6) == a2 && v3 != -8 )
    {
      v2 = 0;
      if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
        v2 = 1073741849;
      else
        RtlpDereferenceAtom(a1);
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 8);
  return v2;
}
