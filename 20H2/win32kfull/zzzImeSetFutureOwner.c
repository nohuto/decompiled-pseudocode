/*
 * XREFs of zzzImeSetFutureOwner @ 0x1C00BED50
 * Callers:
 *     zzzImeCanDestroyDefIME @ 0x1C00BC4F8 (zzzImeCanDestroyDefIME.c)
 *     NtUserSetImeOwnerWindow @ 0x1C00C5190 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     GetWindowCloakStateComponentUIAware @ 0x1C003CBF8 (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00C55BC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     DwmAsyncOwnerChange @ 0x1C00C5734 (DwmAsyncOwnerChange.c)
 *     SetWindowGroupBand @ 0x1C00C8B50 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00CC108 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

void __fastcall zzzImeSetFutureOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagWND *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r14
  __int64 v11; // rbp
  struct tagWND *v12; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF

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
          v9 = *(_QWORD *)(v8 + 112);
          if ( v9 )
          {
            v10 = *((_QWORD *)v6 + 2);
            while ( 1 )
            {
              v11 = *(_QWORD *)(v9 + 16);
              if ( v10 == v11 )
              {
                v16 = *(_QWORD *)(*(_QWORD *)(v9 + 136) + 8LL);
                if ( *(_WORD *)v16 != *(_WORD *)(gpsi + 906LL)
                  && (*(_BYTE *)(v16 + 10) & 1) == 0
                  && *(_WORD *)v16 != *(_WORD *)(gpsi + 898LL) )
                {
                  v17 = *(_QWORD *)(v9 + 40);
                  if ( *(char *)(v17 + 20) >= 0 )
                  {
                    if ( (unsigned int)WantImeWindow(*(struct tagWND **)(v9 + 104), (struct tagWND *)v9) )
                    {
                      if ( (*(_BYTE *)(v17 + 31) & 0x40) == 0 && v6 != (struct tagWND *)v9 )
                      {
                        v18 = *(_QWORD *)(v9 + 120);
                        if ( !v18 || v11 != *(_QWORD *)(v18 + 16) )
                          break;
                      }
                    }
                  }
                }
              }
              v9 = *(_QWORD *)(v9 + 88);
              if ( !v9 )
                goto LABEL_14;
            }
            v6 = (struct tagWND *)v9;
          }
        }
      }
LABEL_14:
      v12 = v6;
      if ( v6 )
      {
        while ( v12 != a1 )
        {
          v12 = (struct tagWND *)*((_QWORD *)v12 + 15);
          if ( !v12 )
            goto LABEL_17;
        }
        UserSetLastError(87LL);
      }
      else
      {
LABEL_17:
        if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)v6 + 5) + 236LL) )
          SetWindowGroupBand(a1);
        v19 = *(_OWORD *)LockPointer(v20, (char *)a1 + 120, v6);
        HMAssignmentLock(&v19);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v6);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v15 = (void *)ReferenceDwmApiPort(v14);
          DwmAsyncOwnerChange(v15);
        }
      }
    }
  }
}
