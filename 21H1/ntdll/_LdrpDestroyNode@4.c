/*
 * XREFs of _LdrpDestroyNode@4 @ 0x4B2E218A
 * Callers:
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpCondenseGraphRecurse@12 @ 0x4B2E2082 (_LdrpCondenseGraphRecurse@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

LOGICAL __thiscall LdrpDestroyNode(_DWORD *BaseAddress)
{
  _DWORD *v2; // eax
  _DWORD *v4; // esi

  v2 = (_DWORD *)BaseAddress[2];
  if ( v2 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      RtlFreeHeap(LdrpHeap, 0, v2);
      v2 = v4;
    }
    while ( v4 );
  }
  return RtlFreeHeap(LdrpHeap, 0, BaseAddress);
}
