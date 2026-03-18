/*
 * XREFs of _DestroyWindowStation@4 @ 0xA39DE
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 */

int __stdcall DestroyWindowStation(int a1)
{
  int v1; // esi
  _DWORD *v3; // edi
  int v4; // ecx
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&a1);
    v3 = (_DWORD *)_grpWinStaList;
    if ( _grpWinStaList )
    {
      v4 = _grpWinStaList;
      do
      {
        v5 = v4;
        if ( v1 == v4 )
          break;
        v3 = (_DWORD *)(v4 + 4);
        v5 = *(_DWORD *)(v4 + 4);
        v4 = v5;
      }
      while ( v5 );
      if ( v5 )
      {
        UnlockObjectAssignment(v3);
        *v3 = *(_DWORD *)(v1 + 4);
        *(_DWORD *)(v1 + 4) = 0;
      }
    }
    *(_DWORD *)(v1 + 32) |= 0x100u;
    if ( !a1 )
      UserSessionSwitchLeaveCrit();
  }
  return 0;
}
