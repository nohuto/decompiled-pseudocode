/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C0022188
 * Callers:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     zzzImeSetFutureOwner @ 0x1C0031D44 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00333D4 (zzzImeSetOwnerWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C023F050 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C000803C (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     WindowHasShadow @ 0x1C001DE04 (WindowHasShadow.c)
 *     FVisCountable @ 0x1C0020A90 (FVisCountable.c)
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C0022544 (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0022A80 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0023048 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0062F30 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     zzzCloakShadow @ 0x1C023F050 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v7; // ebx
  int v8; // r9d
  unsigned int CloakFlags; // r15d
  __int64 j; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  BOOL v18; // eax
  void *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // r14
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // eax
  const struct tagWND *v26; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  __int64 v32; // r14
  _OWORD v33[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v34; // [rsp+68h] [rbp-8h]

  v3 = 0;
  v34 = 0LL;
  v7 = -1073741816;
  memset(v33, 0, sizeof(v33));
  if ( a2 )
    LOBYTE(v3) = *a2 != 0;
  else
    LOBYTE(v3) = a3 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v33) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v33);
    if ( (v3 || !a2) && a3 == CloakFlags )
    {
      v7 = 0;
LABEL_8:
      if ( (unsigned int)CoreWindowProp::IsHost((const struct tagWND *)a1) )
      {
        v26 = 0LL;
        while ( 1 )
        {
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow((const struct tagWND *)a1, v26);
          v26 = NextComponentWindow;
          if ( !NextComponentWindow )
            break;
          v28 = *((_QWORD *)NextComponentWindow + 13);
          v29 = (__int64)NextComponentWindow;
          for ( i = 0LL; ; i = v32 )
          {
            OwnedWindow = NextOwnedWindow(i, v29, v28);
            v32 = OwnedWindow;
            if ( !OwnedWindow )
              break;
            v7 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
            if ( v7 < 0 )
              break;
            v28 = *(_QWORD *)(a1 + 104);
            v29 = a1;
          }
        }
      }
      if ( v7 >= 0 )
      {
        for ( j = 0LL; ; j = v12 )
        {
          v11 = NextOwnedWindow(j, a1, *(_QWORD *)(a1 + 104));
          v12 = v11;
          if ( !v11 )
            break;
          v7 = zzzSetWindowCompositionCloak(v11, a2, a3);
          if ( v7 < 0 )
            break;
        }
      }
LABEL_12:
      zzzEndDeferWinEventNotify();
      return (unsigned int)v7;
    }
    v14 = v8 & a3;
    if ( a2 )
    {
      v15 = v33[0];
      if ( v14 )
      {
        v15 = (v3 << 10) | v33[0] & 0xFFFFFBFF;
        LODWORD(v33[0]) = v15;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_20:
        if ( !__CFSHR__(v15, 12) )
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) |= 0x10u;
        if ( (unsigned int)SetWindowCompositionInfo(a1, (__int64)v33) )
        {
          v18 = (v15 & 0x400) != 0 || __CFSHR__(v15, 12);
          if ( (CloakFlags == 0) == v18 )
          {
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              v19 = (void *)ReferenceDwmApiPort();
              v7 = DwmAsyncSetCompositionAttribute(v19);
            }
            else
            {
              v7 = 0;
            }
            if ( (unsigned int)WindowHasShadow(a1) )
              zzzCloakShadow(a1, v3);
            if ( FVisCountable(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
            {
              v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
              v22 = *(_DWORD *)(v21 + 1028);
              v23 = *(_DWORD *)(v21 + 1024);
              if ( v3 )
              {
                v25 = v22 + 1;
                *(_DWORD *)(v21 + 1028) = v25;
                if ( v23 <= v25 && (*(_DWORD *)(v21 + 820) & 0x4000) != 0 )
                {
                  PsUpdateComponentPower(*(_QWORD *)v21, 5LL);
                  GreDxgkSetProcessStatus(v21, 2LL);
                  *(_DWORD *)(v21 + 820) &= ~0x4000u;
                }
              }
              else
              {
                v24 = v22 - 1;
                *(_DWORD *)(v21 + 1028) = v24;
                if ( v23 > v24 && (*(_DWORD *)(v21 + 820) & 0x4000) == 0 )
                {
                  GreDxgkSetProcessStatus(v21, 2LL);
                  PsUpdateComponentPower(*(_QWORD *)v21, 5LL);
                  *(_DWORD *)(v21 + 820) |= 0x4000u;
                }
              }
            }
            v20 = 3;
            if ( !gdwDeferWinEvent )
              v20 = 1;
            xxxWindowEvent((v3 ^ 1) + 32791, v20);
          }
          else
          {
            v7 = 0;
          }
        }
        else
        {
          v7 = -1073741801;
        }
        if ( v7 < 0 )
          goto LABEL_12;
        goto LABEL_8;
      }
      v16 = v15 & 0xFFFFF7FF;
      v17 = v3 << 11;
    }
    else
    {
      v16 = ((v14 & 0xFFFFFFFD) << 10) | ((a3 & 2) << 10);
      v17 = v33[0] & 0xFFFFF3FF;
    }
    v15 = v17 | v16;
    LODWORD(v33[0]) = v15;
    goto LABEL_20;
  }
  return (unsigned int)v7;
}
