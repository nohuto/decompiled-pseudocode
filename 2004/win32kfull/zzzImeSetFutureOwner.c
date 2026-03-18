/*
 * XREFs of zzzImeSetFutureOwner @ 0x1C0031D44
 * Callers:
 *     zzzImeCanDestroyDefIME @ 0x1C0031828 (zzzImeCanDestroyDefIME.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0032FE0 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     SetWindowGroupBand @ 0x1C0024248 (SetWindowGroupBand.c)
 *     DwmAsyncOwnerChange @ 0x1C0033524 (DwmAsyncOwnerChange.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C00335D0 (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0033644 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00FB5C0 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall zzzImeSetFutureOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagWND *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 i; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  struct tagWND *v12; // rax
  unsigned int v13; // edx
  unsigned int WindowCloakStateComponentUIAware; // eax
  void *v15; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 5);
    v4 = *((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(v2 + 31) & 0x40) == 0 )
    {
      v5 = *((_QWORD *)a2 + 15);
      v6 = a2;
      while ( v5 && *(_QWORD *)(v5 + 16) == v4 )
      {
        v6 = (struct tagWND *)v5;
        v5 = *(_QWORD *)(v5 + 120);
      }
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 20LL) & 0x20) != 0 && (*(_BYTE *)(v2 + 20) & 0x20) == 0 )
        v6 = a2;
      v7 = *(_QWORD *)(*((_QWORD *)v6 + 17) + 8LL);
      if ( (*(_BYTE *)(v7 + 10) & 1) != 0 || *(_WORD *)v7 == *(_WORD *)(gpsi + 898LL) )
        v6 = a2;
      if ( a2 == v6 )
      {
        v8 = *((_QWORD *)v6 + 13);
        if ( v8 )
        {
          for ( i = *(_QWORD *)(v8 + 112); i; i = *(_QWORD *)(i + 88) )
          {
            if ( *((_QWORD *)v6 + 2) == *(_QWORD *)(i + 16) )
            {
              v10 = *(_QWORD *)(*(_QWORD *)(i + 136) + 8LL);
              if ( *(_WORD *)v10 != *(_WORD *)(gpsi + 906LL)
                && (*(_BYTE *)(v10 + 10) & 1) == 0
                && *(_WORD *)v10 != *(_WORD *)(gpsi + 898LL)
                && *(char *)(*(_QWORD *)(i + 40) + 20LL) >= 0 )
              {
                if ( (unsigned int)WantImeWindow(*(struct tagWND **)(i + 104), (struct tagWND *)i) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x40) == 0 && v6 != (struct tagWND *)i )
                  {
                    v11 = *(_QWORD *)(i + 120);
                    if ( !v11 || *(_QWORD *)(i + 16) != *(_QWORD *)(v11 + 16) )
                    {
                      v6 = (struct tagWND *)i;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
      v12 = v6;
      do
      {
        if ( v12 == a1 )
        {
          UserSetLastError(87LL);
          return;
        }
        v12 = (struct tagWND *)*((_QWORD *)v12 + 15);
      }
      while ( v12 );
      v13 = *(_DWORD *)(*((_QWORD *)v6 + 5) + 236LL);
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != v13 )
        SetWindowGroupBand(a1, v13, 1);
      v16 = *(_OWORD *)LockPointer(v17, (char *)a1 + 120, v6);
      HMAssignmentLock(&v16);
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v6);
      zzzSetWindowCompositionCloak((__int64)a1, 0LL, WindowCloakStateComponentUIAware);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v15 = (void *)ReferenceDwmApiPort();
        DwmAsyncOwnerChange(v15);
      }
    }
  }
}
