/*
 * XREFs of _CanEnableIAMAccess@12 @ 0x9280A
 * Callers:
 *     _NtUserEnableIAMAccess@8 @ 0xF2AAE (_NtUserEnableIAMAccess@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall CanEnableIAMAccess(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // edx
  int v4; // esi
  int v5; // eax
  int v7; // ecx

  v3 = (_DWORD *)this[62];
  v4 = v3[1];
  v5 = *(_DWORD *)(v4 + 88);
  if ( this[58] != v5 )
    return 0;
  if ( !v5 )
    return 0;
  v7 = 0;
  if ( !*(_DWORD *)(v4 + 84) || !v3[44] )
    return 0;
  if ( a2 == v3[42] )
    return a3 == v3[43];
  return v7;
}
