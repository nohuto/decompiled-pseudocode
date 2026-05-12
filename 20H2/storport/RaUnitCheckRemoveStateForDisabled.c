/*
 * XREFs of RaUnitCheckRemoveStateForDisabled @ 0x1C00472E8
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0009B80 (RaUnitScsiIrp.c)
 *     RaUnitCheckRemoveState @ 0x1C000B6A8 (RaUnitCheckRemoveState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitCheckRemoveStateForDisabled(__int64 a1, __int64 a2)
{
  char *v2; // rcx
  char v3; // al
  char v4; // r8
  __int64 v5; // r9
  char v6; // dl
  bool v7; // zf

  if ( !a2 )
    return 3221225558LL;
  v2 = *(char **)(a2 + 184);
  v3 = *v2;
  v4 = v2[1];
  if ( *v2 == 15 )
  {
    v5 = *((_QWORD *)v2 + 1);
    v6 = *(_BYTE *)(v5 + 2);
    if ( v6 == 40 )
      v6 = *(_BYTE *)(v5 + 20);
    if ( v4 == -16 || v6 == 1 )
      return 0LL;
  }
  switch ( v3 )
  {
    case 27:
      return 0LL;
    case 14:
      v7 = *((_DWORD *)v2 + 6) == 266264;
      break;
    case 22:
      v7 = v4 == 2;
      break;
    default:
      return 3221225558LL;
  }
  if ( v7 )
    return 0LL;
  return 3221225558LL;
}
