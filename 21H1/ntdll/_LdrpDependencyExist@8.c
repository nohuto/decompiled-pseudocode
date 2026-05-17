/*
 * XREFs of _LdrpDependencyExist@8 @ 0x4B2CF1BD
 * Callers:
 *     _LdrpRecordModuleDependency@16 @ 0x4B2CF113 (_LdrpRecordModuleDependency@16.c)
 *     _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E (_LdrpLoadContextReplaceModule@8.c)
 * Callees:
 *     <none>
 */

char __fastcall LdrpDependencyExist(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  if ( a1 == a2 || a2[8] == 9 && (a2[3] == -1 || (*(_BYTE *)(*a2 - 32) & 0x20) != 0) )
    return 1;
  v3 = (_DWORD *)a1[6];
  if ( v3 )
  {
    v4 = v3;
    while ( 1 )
    {
      v4 = (_DWORD *)*v4;
      if ( (_DWORD *)v4[1] == a2 )
        break;
      if ( v4 == v3 )
        return 0;
    }
    return 1;
  }
  return 0;
}
