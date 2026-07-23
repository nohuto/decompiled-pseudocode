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

NTSTATUS __cdecl RtlDeleteAtomFromAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v2; // esi
  int v3; // eax

  if ( !(unsigned __int8)RtlpLockAtomTable(AtomTableHandle) )
    return -1073741811;
  v2 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v2 = 0;
  }
  else
  {
    v3 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, Atom & 0x3FFF);
    if ( v3 && *(_WORD *)(v3 + 6) == Atom && v3 != -8 )
    {
      v2 = 0;
      if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
        v2 = 1073741849;
      else
        RtlpDereferenceAtom(v3, AtomTableHandle);
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 2);
  return v2;
}
