/*
 * XREFs of _RtlLookupFirstMatchingElementGenericTableAvl@12 @ 0x4B35E3A0
 * Callers:
 *     <none>
 * Callees:
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 *     _RealPredecessor@4 @ 0x4B2A71B7 (_RealPredecessor@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

PVOID __cdecl RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _DWORD *v4; // edi
  _DWORD *v5; // [esp+4h] [ebp-8h]
  _DWORD *v6; // [esp+8h] [ebp-4h] BYREF

  *RestartKey = 0;
  if ( FindNodeOrParent((int)Table, (int)Buffer, &v6) != 1 )
    return 0;
  v4 = v6;
  do
  {
    v5 = v4;
    v6 = v4;
    v4 = RealPredecessor(v4);
  }
  while ( v4
       && ((int (__thiscall *)(_RTL_GENERIC_COMPARE_RESULTS (__stdcall *)(_RTL_AVL_TABLE *, void *, void *), PRTL_AVL_TABLE, PVOID, _DWORD *))Table->CompareRoutine)(
            Table->CompareRoutine,
            Table,
            Buffer,
            v4 + 4) == 2 );
  *RestartKey = v6;
  return v5 + 4;
}
