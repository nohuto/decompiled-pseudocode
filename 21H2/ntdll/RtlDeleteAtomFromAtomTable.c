/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x180059150
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDereferenceAtom @ 0x1800591F8 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x180059958 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180059984 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlDeleteAtomFromAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v4 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, Atom & 0x3FFF);
    if ( v5 && *(_WORD *)(v5 + 10) == Atom && v5 != -12 )
    {
      v4 = 0;
      if ( (*(_BYTE *)(v5 + 14) & 1) != 0 )
        v4 = 1073741849;
      else
        RtlpDereferenceAtom(v5, v5 + 12, AtomTableHandle);
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return v4;
}
