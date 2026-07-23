/*
 * XREFs of _RtlTestProtectedAccess@8 @ 0x4B341FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  return (Target.Level & 7) == 0
      || (unsigned __int8)(Source.Level & 7) >= (unsigned __int8)(Target.Level & 7)
      && ((1 << (Target.Level >> 4)) & RtlProtectedAccess[3 * (Source.Level >> 4)]) != 0;
}
