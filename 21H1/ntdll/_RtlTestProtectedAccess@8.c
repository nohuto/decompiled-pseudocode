/*
 * XREFs of _RtlTestProtectedAccess@8 @ 0x4B341FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  return (a2 & 7) == 0
      || (unsigned __int8)(a1 & 7) >= (unsigned __int8)(a2 & 7)
      && ((1 << (a2 >> 4)) & RtlProtectedAccess[3 * (a1 >> 4)]) != 0;
}
