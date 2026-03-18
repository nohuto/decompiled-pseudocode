/*
 * XREFs of _xxxArrangeIconicWindows@4 @ 0x1AEB2A
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     _InternalBeginDeferWindowPos@4 @ 0x32DC2 (_InternalBeginDeferWindowPos@4.c)
 *     ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22 (-_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalGetRealClientRect@20 @ 0xA23FA (_InternalGetRealClientRect@20.c)
 *     __ScreenToClient@8 @ 0xC76AE (__ScreenToClient@8.c)
 */

int __stdcall xxxArrangeIconicWindows(int a1)
{
  int result; // eax
  int v2; // edi
  int v3; // ebx
  int v4; // esi
  unsigned int v5; // eax
  int v6; // eax
  int v7; // edi
  _DWORD *Prop; // esi
  _DWORD *v9; // edx
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // edx
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  int v16; // ecx
  int v17; // ecx
  unsigned int *v18; // ebx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int *v22; // ecx
  int v23; // ebx
  int v24; // esi
  int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  bool v30; // cc
  bool v31; // cc
  unsigned int v32; // edi
  unsigned int v33; // esi
  unsigned int *v34; // ebx
  unsigned int *v35; // eax
  unsigned int v36; // edx
  unsigned int *v37; // eax
  unsigned int *v38; // esi
  int v39; // eax
  _DWORD *v40; // eax
  int v41; // ebx
  _DWORD *v42; // edi
  unsigned int i; // ecx
  int v44; // eax
  int v45; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v48; // [esp+Ch] [ebp-5Ch]
  unsigned int *v49; // [esp+Ch] [ebp-5Ch]
  int v50; // [esp+10h] [ebp-58h]
  unsigned int *v51; // [esp+10h] [ebp-58h]
  int v52; // [esp+14h] [ebp-54h]
  unsigned int *v53; // [esp+18h] [ebp-50h]
  int v54; // [esp+1Ch] [ebp-4Ch]
  int v55; // [esp+20h] [ebp-48h]
  int v56; // [esp+24h] [ebp-44h]
  unsigned __int16 v57; // [esp+28h] [ebp-40h]
  unsigned int *v58; // [esp+2Ch] [ebp-3Ch]
  int v59; // [esp+30h] [ebp-38h]
  int v60; // [esp+34h] [ebp-34h]
  int v61; // [esp+34h] [ebp-34h]
  int v62; // [esp+38h] [ebp-30h]
  int v63; // [esp+3Ch] [ebp-2Ch]
  int v64; // [esp+40h] [ebp-28h]
  int v65; // [esp+44h] [ebp-24h]
  _DWORD *v66; // [esp+44h] [ebp-24h]
  struct tagBWL *v67; // [esp+48h] [ebp-20h]
  int v68; // [esp+4Ch] [ebp-1Ch] BYREF
  _DWORD *v69; // [esp+50h] [ebp-18h]
  int v70; // [esp+54h] [ebp-14h]
  int v71; // [esp+58h] [ebp-10h] BYREF
  int v72; // [esp+5Ch] [ebp-Ch]
  int v73; // [esp+60h] [ebp-8h]
  int v74; // [esp+64h] [ebp-4h]

  v71 = 0;
  v57 = 0;
  v72 = 0;
  v62 = 0;
  v63 = 0;
  v55 = 0;
  v73 = 0;
  v56 = 0;
  v65 = 0;
  v52 = 0;
  v74 = 0;
  v54 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  result = BuildHwndList(*(_DWORD *)(a1 + 60), 2, 0);
  v2 = result;
  v67 = (struct tagBWL *)result;
  if ( !result )
    return result;
  v64 = IsTrayWindow(*(_DWORD **)(a1 + 60));
  v3 = *(_DWORD *)(_gpsi + 1684);
  v50 = *(_DWORD *)(_gpsi + 1688);
  InternalGetRealClientRect(a1, &v71, 1, 0, 1);
  v4 = HMValidateHandleNoSecure(ghwndSwitch, 1);
  v53 = (unsigned int *)(v2 + 16);
  v48 = (_DWORD *)(v2 + 16);
  v5 = *(_DWORD *)(v2 + 16);
  v60 = v4;
  if ( v5 == 1 )
  {
LABEL_109:
    v41 = 0;
    goto LABEL_110;
  }
  do
  {
    v6 = HMValidateHandleNoSecure(v5, 1);
    v7 = v6;
    if ( !v6 )
      goto LABEL_9;
    if ( (*(_BYTE *)(*(_DWORD *)(v6 + 20) + 23) & 0x10) == 0 )
      goto LABEL_9;
    if ( v6 == v4 )
      goto LABEL_9;
    Prop = (_DWORD *)_GetProp(v6, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
    if ( !Prop )
      goto LABEL_9;
    v9 = Prop + 8;
    v10 = Prop[12];
    if ( (*(_BYTE *)(*(_DWORD *)(v7 + 20) + 23) & 0x20) == 0 )
    {
      Prop[9] = -1;
      *v9 = -1;
      Prop[12] = v10 & 0xFFFFFFDF;
LABEL_9:
      v11 = v48;
      *v48 = 0;
      goto LABEL_17;
    }
    ++v57;
    Prop[12] = v10 & 0xFFFFFFFE;
    *v9 = *(_DWORD *)(*(_DWORD *)(v7 + 20) + 52);
    Prop[9] = *(_DWORD *)(*(_DWORD *)(v7 + 20) + 56);
    _ScreenToClient(a1, v9);
    switch ( *(_DWORD *)(_gpsi + 1720) & 0xFFFFFFF7 )
    {
      case 0u:
      case 1u:
        v13 = v50;
        Prop[9] = (v74 + v50 / 2 - Prop[9]) % v50 - (v50 / 2 - Prop[9]);
        goto LABEL_12;
      case 2u:
      case 3u:
        v13 = v50;
        Prop[9] = Prop[9] + v50 / 2 - (Prop[9] + v50 / 2) % v50;
LABEL_12:
        v11 = v48;
        goto LABEL_18;
      case 4u:
      case 6u:
        Prop[8] = *v12 + v3 / 2 - (*v12 + v3 / 2) % v3;
        goto LABEL_16;
      case 5u:
      case 7u:
        Prop[8] = (v73 + v3 / 2 - Prop[8]) % v3 - (v3 / 2 - Prop[8]);
        goto LABEL_16;
      default:
LABEL_16:
        v11 = v48;
        break;
    }
LABEL_17:
    v13 = v50;
LABEL_18:
    v4 = v60;
    v48 = v11 + 1;
    v5 = v11[1];
  }
  while ( v5 != 1 );
  if ( !v57 )
    goto LABEL_109;
  if ( v64 )
  {
    v14 = -32000;
    v15 = -32000;
  }
  else
  {
    v16 = *(_DWORD *)(_gpsi + 1720);
    if ( (v16 & 1) != 0 )
    {
      v62 = v73 - v3;
      v59 = v73 - v3;
      v55 = -v3;
    }
    else
    {
      v62 = v71 + *(_DWORD *)(_gpsi + 1684) - *(_DWORD *)(_gpsi + 1724);
      v59 = v62;
      v55 = v3;
    }
    if ( (v16 & 2) != 0 )
    {
      v63 = v72 + *(_DWORD *)(_gpsi + 1688) - *(_DWORD *)(_gpsi + 1728);
      v61 = v63;
      v56 = v13;
    }
    else
    {
      v63 = v74 - v13;
      v61 = v74 - v13;
      v56 = -v13;
    }
    if ( (v16 & 4) != 0 )
    {
      v54 = 0;
      v17 = v74 / v13;
      v52 = v74 / v13;
    }
    else
    {
      v54 = 1;
      v17 = v73 / v3;
      v52 = v73 / v3;
    }
    if ( v17 < 1 )
    {
      v17 = 1;
      v52 = 1;
    }
    v18 = v53;
    v65 = v17;
    while ( 1 )
    {
      v19 = *v18;
      v49 = v18;
      if ( *v18 == 1 )
        break;
      if ( v19 )
      {
        v20 = HMValidateHandleNoSecure(v19, 1);
        v58 = (unsigned int *)v20;
        if ( v20 )
        {
          v21 = _GetProp(v20, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
          v22 = v53;
          v23 = 0;
          v24 = *(_DWORD *)(v21 + 32);
          v25 = *(_DWORD *)(v21 + 36);
          while ( 1 )
          {
            v51 = v22;
            if ( v22 >= v49 )
              break;
            if ( *v22 )
            {
              v26 = HMValidateHandleNoSecure(*v22, 1);
              if ( v26 )
              {
                v27 = _GetProp(v26, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
                v28 = *(_DWORD *)(v27 + 32);
                v29 = *(_DWORD *)(v27 + 36);
                switch ( *(_DWORD *)(_gpsi + 1720) & 0xFFFFFFF7 )
                {
                  case 0u:
                    v30 = v29 < v25;
                    if ( v29 != v25 )
                      goto LABEL_67;
                    if ( v28 > v24 )
                      goto LABEL_68;
                    goto LABEL_43;
                  case 1u:
                    v30 = v29 < v25;
                    if ( v29 != v25 )
                      goto LABEL_67;
                    if ( v28 < v24 )
                      goto LABEL_68;
LABEL_43:
                    v30 = v29 < v25;
                    goto LABEL_67;
                  case 2u:
                    v31 = v29 <= v25;
                    if ( v29 != v25 )
                      goto LABEL_47;
                    if ( v28 <= v24 )
                      goto LABEL_57;
                    goto LABEL_68;
                  case 3u:
                    v31 = v29 <= v25;
                    if ( v29 != v25 )
                      goto LABEL_47;
                    if ( v28 < v24 )
                      goto LABEL_68;
LABEL_57:
                    v31 = v29 <= v25;
                    goto LABEL_47;
                  case 4u:
                    v31 = v28 <= v24;
                    if ( v28 != v24 )
                      goto LABEL_47;
                    if ( v29 >= v25 )
                      goto LABEL_46;
                    goto LABEL_68;
                  case 5u:
                    v30 = v28 < v24;
                    if ( v28 != v24 )
                      goto LABEL_67;
                    if ( v29 >= v25 )
                      goto LABEL_66;
                    goto LABEL_68;
                  case 6u:
                    v31 = v28 <= v24;
                    if ( v28 != v24 )
                      goto LABEL_47;
                    if ( v29 > v25 )
                      goto LABEL_68;
LABEL_46:
                    v31 = v28 <= v24;
LABEL_47:
                    if ( !v31 )
                      goto LABEL_68;
                    goto LABEL_69;
                  case 7u:
                    v30 = v28 < v24;
                    if ( v28 != v24 )
                      goto LABEL_67;
                    if ( v29 > v25 )
                      goto LABEL_68;
LABEL_66:
                    v30 = v28 < v24;
LABEL_67:
                    if ( v30 )
LABEL_68:
                      v23 = 1;
LABEL_69:
                    v22 = v51;
                    if ( !v23 )
                      goto LABEL_72;
                    goto LABEL_74;
                  default:
                    goto LABEL_69;
                }
              }
              v22 = v51;
            }
LABEL_72:
            ++v22;
          }
LABEL_74:
          v18 = v49;
          v32 = 0;
          v33 = v49 >= v22 ? (unsigned int)((char *)v49 - (char *)v22 + 3) >> 2 : 0;
          if ( v33 )
          {
            v34 = v58;
            do
            {
              v35 = (unsigned int *)_HMObjectFromHandle(*v22);
              if ( v34 )
                v36 = *v34;
              else
                v36 = 0;
              v34 = v35;
              *v51 = v36;
              v22 = v51 + 1;
              ++v32;
              ++v51;
            }
            while ( v32 < v33 );
            v58 = v35;
            v18 = v49;
          }
          v37 = v58;
          if ( v58 )
            v37 = (unsigned int *)*v58;
          *v18 = (unsigned int)v37;
        }
      }
      ++v18;
    }
    v15 = v61;
    v14 = v59;
  }
  v38 = v53;
  while ( 2 )
  {
    if ( *v38 != 1 )
    {
      if ( !*v38 )
        goto LABEL_96;
      v39 = HMValidateHandleNoSecure(*v38, 1);
      if ( !v39 )
        goto LABEL_96;
      v40 = (_DWORD *)_GetProp(v39, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
      if ( v40 )
      {
        v40[12] |= 0x20u;
        v40[8] = v14;
        v40[9] = v15;
      }
      if ( v64 )
        goto LABEL_96;
      if ( --v52 > 0 )
      {
        if ( v54 )
        {
          v14 += v55;
          goto LABEL_96;
        }
      }
      else
      {
        v52 = v65;
        if ( !v54 )
        {
          v14 += v55;
          v15 = v63;
          goto LABEL_96;
        }
        v14 = v62;
      }
      v15 += v56;
LABEL_96:
      ++v38;
      continue;
    }
    break;
  }
  v41 = v57;
  v42 = (_DWORD *)InternalBeginDeferWindowPos(2 * v57);
  if ( v42 )
  {
    for ( i = *v53; i != 1; i = *v53 )
    {
      if ( i )
      {
        v44 = HMValidateHandleNoSecure(i, 1);
        v66 = (_DWORD *)v44;
        if ( v44 )
        {
          v45 = _GetProp(v44, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v68 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v68;
          v69 = v66;
          HMLockObject(v66);
          v42 = _DeferWindowPos(
                  v42,
                  v66,
                  0,
                  *(_DWORD *)(v45 + 32),
                  *(_DWORD *)(v45 + 36),
                  *(_DWORD *)(_gpsi + 1724),
                  *(_DWORD *)(_gpsi + 1728),
                  276,
                  0);
          ThreadUnlock1();
          if ( !v42 )
            goto LABEL_110;
        }
      }
      ++v53;
    }
    xxxEndDeferWindowPosEx((int)v42, 1);
  }
LABEL_110:
  FreeHwndList(v67);
  return v41;
}
