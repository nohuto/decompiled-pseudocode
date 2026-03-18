/*
 * XREFs of _zzzSetWindowCompositionCloak@12 @ 0x1C5F8
 * Callers:
 *     _zzzImeSetFutureOwner@8 @ 0x18ECA (_zzzImeSetFutureOwner@8.c)
 *     _zzzImeSetOwnerWindow@8 @ 0x1C3FA (_zzzImeSetOwnerWindow@8.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _zzzCloakShadow@8 @ 0x19D618 (_zzzCloakShadow@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _NextOwnedWindow@12 @ 0x1C8E4 (_NextOwnedWindow@12.c)
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YGKPBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C972 (-GetCloakFlags@@YGKPBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _FVisCountable@4 @ 0x1CD18 (_FVisCountable@4.c)
 *     _WindowHasShadow@4 @ 0x1FAEE (_WindowHasShadow@4.c)
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     _DwmAsyncSetCompositionAttribute@16 @ 0x2557C (_DwmAsyncSetCompositionAttribute@16.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF (-GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z.c)
 *     _zzzCloakShadow@8 @ 0x19D618 (_zzzCloakShadow@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall zzzSetWindowCompositionCloak(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  unsigned int CloakFlags; // ecx
  int v7; // eax
  int v8; // esi
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // eax
  BOOL v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  struct tagWND *NextComponentWindow; // eax
  int i; // eax
  const struct WINDOWCOMPOSITIONINFO *v21; // [esp+0h] [ebp-58h]
  const struct tagWND *v22; // [esp+0h] [ebp-58h]
  const struct tagWND *v23; // [esp+0h] [ebp-58h]
  const struct tagWND *v24; // [esp+4h] [ebp-54h]
  int v25; // [esp+10h] [ebp-48h]
  int v26; // [esp+14h] [ebp-44h]
  struct WINDOWCOMPOSITIONINFO *v27; // [esp+1Ch] [ebp-3Ch]
  _DWORD v28[5]; // [esp+20h] [ebp-38h] BYREF
  _DWORD v29[9]; // [esp+34h] [ebp-24h] BYREF

  v3 = a2;
  v25 = -1073741816;
  v4 = 0;
  memset(&v28[1], 0, 16);
  memset(v29, 0, sizeof(v29));
  if ( a2 )
  {
    qmemcpy(v28, a2, sizeof(v28));
    v3 = a2;
    LOBYTE(v4) = *a2 != 0;
  }
  else
  {
    LOBYTE(v4) = a3 != 0;
    v28[0] = v4;
  }
  v26 = v4;
  if ( _GetWindowCompositionInfo(a1, v29) )
  {
    ++_gdwDeferWinEvent;
    CloakFlags = GetCloakFlags(v21);
    v7 = v26;
    v27 = (struct WINDOWCOMPOSITIONINFO *)CloakFlags;
    if ( (v26 || !v3) && a3 == CloakFlags )
    {
      v8 = 0;
      v25 = 0;
      goto LABEL_8;
    }
    if ( v3 )
    {
      v10 = v29[0];
      if ( (a3 & 1) != 0 )
      {
        v10 = (v26 << 10) | v29[0] & 0xFFFFFBFF;
        v7 = v26;
        v29[0] = v10;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_21:
        if ( (v10 & 0x800) == 0 )
          SetOrClrWF(1, (int)a1, 0x8A10u, 0);
        if ( SetWindowCompositionInfo(a1, v29) )
        {
          v13 = (v10 & 0x400) != 0 || (v10 & 0x800) != 0;
          if ( (v27 == 0) == v13 )
          {
            if ( IsWindowDesktopComposed(a1) )
            {
              ReferenceDwmApiPort();
              v25 = DwmAsyncSetCompositionAttribute(17, v28);
            }
            else
            {
              v25 = 0;
            }
            if ( WindowHasShadow(a1) )
              zzzCloakShadow();
            if ( FVisCountable(a1) && (*(_BYTE *)(a1[5] + 23) & 0x10) != 0 )
            {
              v14 = *(_DWORD **)(a1[2] + 232);
              v15 = v14[155];
              v16 = v14[154];
              if ( v26 )
              {
                v18 = v15 + 1;
                v14[155] = v18;
                if ( v16 <= v18 && (v14[116] & 0x4000) != 0 )
                {
                  PsUpdateComponentPower(*v14, 5, 0, 0);
                  GreDxgkSetProcessStatus(v14, 2, 0);
                  v14[116] &= ~0x4000u;
                }
              }
              else
              {
                v17 = v15 - 1;
                v14[155] = v17;
                if ( v16 > v17 && (v14[116] & 0x4000) == 0 )
                {
                  GreDxgkSetProcessStatus(v14, 2, 1);
                  PsUpdateComponentPower(*v14, 5, 1, 0);
                  v14[116] |= 0x4000u;
                }
              }
            }
            xxxWindowEvent((v26 ^ 1) + 32791, a1, 0, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
            v8 = v25;
LABEL_30:
            if ( v8 < 0 )
            {
LABEL_11:
              zzzEndDeferWinEventNotify();
              return v25;
            }
LABEL_8:
            if ( CoreWindowProp::IsHost(v22) )
            {
              while ( 1 )
              {
                NextComponentWindow = CoreWindowProp::GetNextComponentWindow(v23, v24);
                if ( !NextComponentWindow )
                  break;
                for ( i = NextOwnedWindow(*((_DWORD *)NextComponentWindow + 14)); i; i = NextOwnedWindow(a1[14]) )
                {
                  v8 = zzzSetWindowCompositionCloak(a3);
                  v25 = v8;
                  if ( v8 < 0 )
                    break;
                }
              }
            }
            if ( v8 >= 0 )
            {
              do
              {
                if ( !NextOwnedWindow(a1[14]) )
                  break;
                v25 = zzzSetWindowCompositionCloak(a3);
              }
              while ( v25 >= 0 );
            }
            goto LABEL_11;
          }
          v8 = 0;
        }
        else
        {
          v8 = -1073741801;
        }
        v25 = v8;
        goto LABEL_30;
      }
      v11 = v10 & 0xFFFFF7FF;
      v12 = v7 << 11;
    }
    else
    {
      v11 = (a3 & 1 ^ ((unsigned __int8)a3 ^ a3 & 1) & 2) << 10;
      v12 = v29[0] & 0xFFFFF3FF;
    }
    v10 = v12 | v11;
    v29[0] = v10;
    goto LABEL_21;
  }
  return v25;
}
