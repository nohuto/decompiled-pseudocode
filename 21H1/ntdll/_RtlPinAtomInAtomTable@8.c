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

int __stdcall RtlPinAtomInAtomTable(volatile signed __int32 *a1, unsigned __int16 a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax

  if ( !RtlpLockAtomTable(a1) )
    return -1073741811;
  v3 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v3 = 0;
  }
  else
  {
    v4 = RtlpAtomMapAtomToHandleEntry((int)a1, a2 & 0x3FFF);
    if ( v4 && *(_WORD *)(v4 + 6) == a2 )
    {
      v5 = v4 + 8;
      if ( v5 )
      {
        v3 = 0;
        *(_WORD *)(v5 + 2) |= 1u;
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 2);
  return v3;
}
