/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x18004C120
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDereferenceAtom @ 0x18004C1C8 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x18004C8F8 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18004C924 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlDeleteAtomFromAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v4 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v5 && *(_WORD *)(v5 + 10) == a2 && v5 != -12 )
    {
      v4 = 0;
      if ( (*(_BYTE *)(v5 + 14) & 1) != 0 )
        v4 = 1073741849;
      else
        RtlpDereferenceAtom(v5, v5 + 12, a1);
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v4;
}
