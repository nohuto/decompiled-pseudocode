/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C00C91F8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     zzzImeSetFutureOwner @ 0x1C00BED50 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00C55E4 (zzzImeSetOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C023DDB0 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C000802C (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     WindowHasShadow @ 0x1C003CBA4 (WindowHasShadow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008EFF0 (DwmAsyncSetCompositionAttribute.c)
 *     FVisCountable @ 0x1C0092900 (FVisCountable.c)
 *     SetWindowCompositionInfo @ 0x1C00C8264 (SetWindowCompositionInfo.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C00C95B4 (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C9604 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00C9638 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     zzzCloakShadow @ 0x1C023DDB0 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, __int64 a2, unsigned int a3)
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
  __int64 v19; // rcx
  void *v20; // rax
  unsigned int v21; // edx
  bool v22; // zf
  __int64 v23; // xmm1_8
  __int64 v24; // r14
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // eax
  const struct tagWND *v29; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  __int64 v35; // r14
  __int128 v36; // [rsp+30h] [rbp-40h] BYREF
  __int64 v37; // [rsp+40h] [rbp-30h]
  _OWORD v38[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v39; // [rsp+68h] [rbp-8h]

  v3 = 0;
  v37 = 0LL;
  v39 = 0LL;
  v7 = -1073741816;
  v36 = 0LL;
  memset(v38, 0, sizeof(v38));
  if ( a2 )
  {
    v22 = *(_DWORD *)a2 == 0;
    v23 = *(_QWORD *)(a2 + 16);
    v36 = *(_OWORD *)a2;
    LOBYTE(v3) = !v22;
    v37 = v23;
  }
  else
  {
    LOBYTE(v3) = a3 != 0;
    LODWORD(v36) = v3;
  }
  if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v38) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v38);
    if ( (v3 || !a2) && a3 == CloakFlags )
    {
      v7 = 0;
LABEL_8:
      if ( (unsigned int)CoreWindowProp::IsHost((const struct tagWND *)a1) )
      {
        v29 = 0LL;
        while ( 1 )
        {
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow((const struct tagWND *)a1, v29);
          v29 = NextComponentWindow;
          if ( !NextComponentWindow )
            break;
          v31 = *((_QWORD *)NextComponentWindow + 13);
          v32 = (__int64)NextComponentWindow;
          for ( i = 0LL; ; i = v35 )
          {
            OwnedWindow = NextOwnedWindow(i, v32, v31);
            v35 = OwnedWindow;
            if ( !OwnedWindow )
              break;
            v7 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
            if ( v7 < 0 )
              break;
            v31 = *(_QWORD *)(a1 + 104);
            v32 = a1;
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
      v15 = v38[0];
      if ( v14 )
      {
        v15 = (v3 << 10) | v38[0] & 0xFFFFFBFF;
        LODWORD(v38[0]) = v15;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_20:
        if ( !__CFSHR__(v15, 12) )
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) |= 0x10u;
        if ( (unsigned int)SetWindowCompositionInfo(a1, (__int64)v38) )
        {
          v18 = (v15 & 0x400) != 0 || __CFSHR__(v15, 12);
          if ( (CloakFlags == 0) == v18 )
          {
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              v20 = (void *)ReferenceDwmApiPort(v19);
              v7 = DwmAsyncSetCompositionAttribute(v20, *(_QWORD *)a1, 17, &v36);
            }
            else
            {
              v7 = 0;
            }
            if ( (unsigned int)WindowHasShadow(a1) )
              zzzCloakShadow(a1, v3);
            if ( FVisCountable(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
            {
              v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
              v25 = *(_DWORD *)(v24 + 1028);
              v26 = *(_DWORD *)(v24 + 1024);
              if ( v3 )
              {
                v28 = v25 + 1;
                *(_DWORD *)(v24 + 1028) = v28;
                if ( v26 <= v28 && (*(_DWORD *)(v24 + 820) & 0x4000) != 0 )
                {
                  PsUpdateComponentPower(*(_QWORD *)v24, 5LL);
                  GreDxgkSetProcessStatus(v24, 2LL);
                  *(_DWORD *)(v24 + 820) &= ~0x4000u;
                }
              }
              else
              {
                v27 = v25 - 1;
                *(_DWORD *)(v24 + 1028) = v27;
                if ( v26 > v27 && (*(_DWORD *)(v24 + 820) & 0x4000) == 0 )
                {
                  GreDxgkSetProcessStatus(v24, 2LL);
                  PsUpdateComponentPower(*(_QWORD *)v24, 5LL);
                  *(_DWORD *)(v24 + 820) |= 0x4000u;
                }
              }
            }
            v21 = 3;
            if ( !gdwDeferWinEvent )
              v21 = 1;
            xxxWindowEvent((v3 ^ 1) + 32791, v21);
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
      v17 = v38[0] & 0xFFFFF3FF;
    }
    v15 = v17 | v16;
    LODWORD(v38[0]) = v15;
    goto LABEL_20;
  }
  return (unsigned int)v7;
}
