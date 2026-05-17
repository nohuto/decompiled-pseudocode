/*
 * XREFs of _RtlLookupFirstMatchingElementGenericTableAvl@12 @ 0x4B35E3A0
 * Callers:
 *     <none>
 * Callees:
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 *     _RealPredecessor@4 @ 0x4B2A71B7 (_RealPredecessor@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

_DWORD *__stdcall RtlLookupFirstMatchingElementGenericTableAvl(int a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // [esp+4h] [ebp-8h]
  _DWORD *v6; // [esp+8h] [ebp-4h] BYREF

  *a3 = 0;
  if ( FindNodeOrParent(a1, a2, &v6) != 1 )
    return 0;
  v4 = v6;
  do
  {
    v5 = v4;
    v6 = v4;
    v4 = RealPredecessor(v4);
  }
  while ( v4 && (*(int (__thiscall **)(_DWORD, int, int, _DWORD *))(a1 + 40))(*(_DWORD *)(a1 + 40), a1, a2, v4 + 4) == 2 );
  *a3 = v6;
  return v5 + 4;
}
