/*
 * XREFs of _RtlPinAtomInAtomTable@8 @ 0x4B34D0F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpLockAtomTable@4 @ 0x4B2E04D4 (_RtlpLockAtomTable@4.c)
 *     _RtlpAtomMapAtomToHandleEntry@8 @ 0x4B2E04EF (_RtlpAtomMapAtomToHandleEntry@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v3; // esi
  ULONG v4; // eax
  ULONG v5; // eax

  if ( !RtlpLockAtomTable((_RTL_SRWLOCK *)AtomTableHandle) )
    return -1073741811;
  v3 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v3 = 0;
  }
  else
  {
    v4 = RtlpAtomMapAtomToHandleEntry((int)AtomTableHandle, Atom & 0x3FFF);
    if ( v4 && *(_WORD *)(v4 + 6) == Atom )
    {
      v5 = v4 + 8;
      if ( v5 )
      {
        v3 = 0;
        *(_WORD *)(v5 + 2) |= 1u;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 2);
  return v3;
}
