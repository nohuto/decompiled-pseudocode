/*
 * XREFs of _WindowStationOpenProcedure@4 @ 0x9D1A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall WindowStationOpenProcedure(int a1)
{
  _DWORD *v1; // esi
  _DWORD *i; // eax

  v1 = *(_DWORD **)(a1 + 8);
  if ( *(_WORD *)(a1 + 12)
    && !(unsigned __int8)PsIsSystemProcess(*(_DWORD *)(a1 + 4))
    && PsGetProcessSessionId(*(_DWORD *)(a1 + 4)) != *v1 )
  {
    return -1073741790;
  }
  if ( (v1[8] & 0x100) == 0 )
    return 0;
  for ( i = (_DWORD *)_grpWinStaList; *i; i = (_DWORD *)(*i + 4) )
    ;
  LockObjectAssignment(i, v1);
  v1[8] &= ~0x100u;
  return 0x40000000;
}
