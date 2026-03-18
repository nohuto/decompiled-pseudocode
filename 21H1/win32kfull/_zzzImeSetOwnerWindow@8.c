/*
 * XREFs of _zzzImeSetOwnerWindow@8 @ 0x1C3FA
 * Callers:
 *     _NtUserSetImeOwnerWindow@8 @ 0x1C12C (_NtUserSetImeOwnerWindow@8.c)
 * Callees:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PAX@Z @ 0x1C990 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@P.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _GetWindowCloakStateComponentUIAware@4 @ 0x25400 (_GetWindowCloakStateComponentUIAware@4.c)
 *     _DwmAsyncOwnerChange@12 @ 0x732BC (_DwmAsyncOwnerChange@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 */

int __fastcall zzzImeSetOwnerWindow(_DWORD *a1, int a2)
{
  int result; // eax
  int v4; // ecx
  int NonChildAncestor; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx
  int WindowCloakStateComponentUIAware; // eax
  __int64 v11; // [esp-10h] [ebp-18h]
  __int16 v12; // [esp+4h] [ebp-4h]

  result = *(_DWORD *)(a2 + 76);
  v4 = *(_DWORD *)(result + 4);
  if ( (*(_BYTE *)(v4 + 10) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(_gpsi + 498);
    v12 = result;
    if ( *(_WORD *)v4 != (_WORD)result )
    {
      NonChildAncestor = GetNonChildAncestor(a2);
      v6 = 0;
      v7 = (_DWORD *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        while ( **(_WORD **)(*(_DWORD *)(NonChildAncestor + 76) + 4) != v12 )
        {
          NonChildAncestor = *(_DWORD *)(NonChildAncestor + 64);
          if ( !NonChildAncestor )
            goto LABEL_6;
        }
        v7 = 0;
      }
LABEL_6:
      v8 = v7;
      if ( v7 )
      {
        while ( a1 != v8 )
        {
          v8 = (_DWORD *)v8[14];
          if ( !v8 )
            goto LABEL_9;
        }
        UserSetLastError(87);
        v7 = 0;
LABEL_9:
        if ( v7 && *(_DWORD *)(a1[5] + 148) != *(_DWORD *)(v7[5] + 148) )
          SetWindowGroupBand(a1, 1);
      }
      v11 = LockPointer(a1 + 16, v7);
      HMAssignmentLock(v9, HIDWORD(v11));
      if ( v7 )
      {
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v7, v11);
        zzzSetWindowCompositionCloak(WindowCloakStateComponentUIAware);
      }
      result = IsWindowDesktopComposed(a1);
      if ( result )
      {
        if ( v7 )
          v6 = *v7;
        ReferenceDwmApiPort();
        return DwmAsyncOwnerChange(v6);
      }
    }
  }
  return result;
}
