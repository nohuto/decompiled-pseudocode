/*
 * XREFs of _zzzImeSetFutureOwner@8 @ 0x18ECA
 * Callers:
 *     _NtUserSetImeOwnerWindow@8 @ 0x1C12C (_NtUserSetImeOwnerWindow@8.c)
 *     _zzzImeCanDestroyDefIME@8 @ 0x1D148 (_zzzImeCanDestroyDefIME@8.c)
 * Callees:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PAX@Z @ 0x1C990 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@P.c)
 *     _GetWindowCloakStateComponentUIAware@4 @ 0x25400 (_GetWindowCloakStateComponentUIAware@4.c)
 *     ?WantImeWindow@@YGHPAUtagWND@@0@Z @ 0x2B47C (-WantImeWindow@@YGHPAUtagWND@@0@Z.c)
 *     _DwmAsyncOwnerChange@12 @ 0x732BC (_DwmAsyncOwnerChange@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 */

void __fastcall zzzImeSetFutureOwner(_DWORD *a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // edi
  _DWORD *v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // ecx
  int WindowCloakStateComponentUIAware; // eax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // [esp-8h] [ebp-20h]
  struct tagWND *v17; // [esp+0h] [ebp-18h]
  struct tagWND *v18; // [esp+4h] [ebp-14h]
  int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]
  int savedregs; // [esp+18h] [ebp+0h]

  v3 = a1[2];
  if ( !a2 )
    return;
  v4 = a2[5];
  if ( (*(_BYTE *)(v4 + 23) & 0x40) != 0 )
    return;
  v5 = (_DWORD *)a2[16];
  v6 = a2;
  while ( v5 && v5[2] == v3 )
  {
    v6 = v5;
    v5 = (_DWORD *)v5[16];
  }
  if ( (*(_BYTE *)(v6[5] + 12) & 0x20) != 0 && (*(_BYTE *)(v4 + 12) & 0x20) == 0 )
    v6 = a2;
  v7 = *(_DWORD *)(v6[19] + 4);
  if ( (*(_BYTE *)(v7 + 10) & 1) != 0 || *(_WORD *)v7 == *(_WORD *)(_gpsi + 498) )
    v6 = a2;
  if ( a2 != v6 )
    goto LABEL_14;
  v8 = v6[14];
  if ( !v8 )
    goto LABEL_14;
  v9 = *(_DWORD **)(v8 + 60);
  if ( !v9 )
    goto LABEL_14;
  v10 = v6[2];
  v19 = v10;
  while ( 1 )
  {
    v21 = v9[2];
    if ( v10 == v21 )
      break;
LABEL_13:
    v9 = (_DWORD *)v9[12];
    if ( !v9 )
      goto LABEL_14;
  }
  v14 = *(_DWORD *)(v9[19] + 4);
  if ( *(_WORD *)v14 == *(_WORD *)(_gpsi + 506)
    || (*(_BYTE *)(v14 + 10) & 1) != 0
    || *(_WORD *)v14 == *(_WORD *)(_gpsi + 498)
    || (v20 = v9[5], *(char *)(v20 + 12) < 0)
    || !WantImeWindow(v17, v18)
    || (*(_BYTE *)(v20 + 23) & 0x40) != 0
    || v6 == v9
    || (v15 = v9[16]) != 0 && v21 == *(_DWORD *)(v15 + 8) )
  {
    v10 = v19;
    goto LABEL_13;
  }
  v6 = v9;
LABEL_14:
  v11 = v6;
  do
  {
    if ( v11 == a1 )
    {
      UserSetLastError(87);
      return;
    }
    v11 = (_DWORD *)v11[16];
  }
  while ( v11 );
  if ( *(_DWORD *)(a1[5] + 148) != *(_DWORD *)(v6[5] + 148) )
    SetWindowGroupBand(a1, 1);
  v16 = LockPointer(a1 + 16, v6);
  HMAssignmentLock(v12, HIDWORD(v16));
  WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v6, v16);
  zzzSetWindowCompositionCloak(WindowCloakStateComponentUIAware);
  if ( IsWindowDesktopComposed(a1) )
  {
    ReferenceDwmApiPort();
    DwmAsyncOwnerChange(savedregs);
  }
}
