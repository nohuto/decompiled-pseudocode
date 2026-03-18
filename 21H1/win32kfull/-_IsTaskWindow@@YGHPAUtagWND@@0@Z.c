/*
 * XREFs of ?_IsTaskWindow@@YGHPAUtagWND@@0@Z @ 0x15C703
 * Callers:
 *     ?_RemoveNonTaskWindows@@YGHPAUtagBWL@@PAUtagWND@@PAHPAPAPAUHWND__@@@Z @ 0x15C758 (-_RemoveNonTaskWindows@@YGHPAUtagBWL@@PAUtagWND@@PAHPAPAPAUHWND__@@@Z.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _IsWindowUnderActiveLockScreen@4 @ 0x26C7A (_IsWindowUnderActiveLockScreen@4.c)
 */

BOOL __fastcall _IsTaskWindow(_DWORD *a1, _DWORD *a2)
{
  char *v4; // eax
  int v5; // eax
  BOOL result; // eax

  v4 = (char *)a1[5];
  result = 0;
  if ( ((v4[18] & 4) != 0 || v4[16] >= 0 && (v4[19] & 8) == 0)
    && ((v4[23] & 0x10) != 0 && !GetWindowCloakState(a1) || a1 == a2) )
  {
    v5 = a1[27];
    if ( (!v5 || (*(_BYTE *)(*(_DWORD *)(v5 + 20) + 23) & 8) == 0) && !IsWindowUnderActiveLockScreen(a1) )
      return 1;
  }
  return result;
}
