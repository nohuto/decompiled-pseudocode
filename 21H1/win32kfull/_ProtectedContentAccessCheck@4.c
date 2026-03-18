/*
 * XREFs of _ProtectedContentAccessCheck@4 @ 0x2FF9C
 * Callers:
 *     _ValidateNewParent@8 @ 0x2FEC8 (_ValidateNewParent@8.c)
 * Callees:
 *     _IsWindowContentProtected@4 @ 0x20BBA (_IsWindowContentProtected@4.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

BOOL __thiscall ProtectedContentAccessCheck(_DWORD *this)
{
  int TopLevelWindow; // eax
  int v3; // esi
  int v5; // ecx
  int v6; // esi

  TopLevelWindow = _GetTopLevelWindow(this);
  v3 = TopLevelWindow;
  if ( !TopLevelWindow )
    return 1;
  if ( (*(_BYTE *)(*(_DWORD *)(TopLevelWindow + 20) + 146) & 0x40) != 0 )
  {
    v5 = *(_DWORD *)(TopLevelWindow + 8);
    if ( *(_DWORD *)(v5 + 800) )
      v3 = *(_DWORD *)(v5 + 800);
  }
  if ( !IsWindowContentProtected() )
    return 1;
  v6 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 232);
  return v6 == PsGetCurrentProcessWin32Process()
      || v6 == *(_DWORD *)(this[2] + 232) && (*(_DWORD *)(_gptiCurrent + 688) & 0x40000) != 0;
}
