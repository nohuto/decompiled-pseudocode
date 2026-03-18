/*
 * XREFs of ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38
 * Callers:
 *     ?xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0xA18FA (-xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?GetDesktopName@@YGPBGPAUtagDESKTOP@@@Z @ 0x7CBEE (-GetDesktopName@@YGPBGPAUtagDESKTOP@@@Z.c)
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z @ 0x92328 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _WPP_RECORDER_SF_Sq@28 @ 0xAD752 (_WPP_RECORDER_SF_Sq@28.c)
 *     _WPP_RECORDER_SF_qqS@32 @ 0xAD952 (_WPP_RECORDER_SF_qqS@32.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _RemoteDisableScreen@16 @ 0xD17D8 (_RemoteDisableScreen@16.c)
 *     _xxxCleanupMotherDesktopWindow@4 @ 0xD4B02 (_xxxCleanupMotherDesktopWindow@4.c)
 *     _UnlockDesktopMenu@4 @ 0xD65B8 (_UnlockDesktopMenu@4.c)
 *     _DwmAsyncShellWindowChange@12 @ 0xE105C (_DwmAsyncShellWindowChange@12.c)
 *     ?ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z @ 0xEFB5A (-ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z.c)
 */

void __fastcall DestroyPendingDesktops(_DWORD *a1, int a2)
{
  _DWORD **v3; // eax
  _DWORD *v4; // esi
  const unsigned __int16 *DesktopName; // eax
  int v6; // ecx
  int v7; // edi
  void *v8; // ecx
  _BYTE *v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  struct tagVWPL **v16; // edi
  struct tagVWPL **v17; // edi
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  void *v21; // edi
  const unsigned __int16 *v22; // eax
  int v23; // edi
  int v24; // edi
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  _DWORD *j; // eax
  _UNKNOWN **v29; // ecx
  _DWORD *v30; // edi
  const unsigned __int16 *v31; // eax
  int v32; // ecx
  _DWORD *v33; // edx
  _DWORD *v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  void *v40; // eax
  int v41; // ecx
  int v42; // [esp-18h] [ebp-80h]
  int v43; // [esp-14h] [ebp-7Ch]
  int v44; // [esp-10h] [ebp-78h]
  _DWORD *v45; // [esp-4h] [ebp-6Ch]
  int v46; // [esp-4h] [ebp-6Ch]
  WindowGroupingFeature *v47; // [esp+0h] [ebp-68h]
  unsigned int v48; // [esp+4h] [ebp-64h]
  _DWORD v49[3]; // [esp+Ch] [ebp-5Ch] BYREF
  _DWORD v50[3]; // [esp+18h] [ebp-50h] BYREF
  _DWORD v51[3]; // [esp+24h] [ebp-44h] BYREF
  _DWORD v52[3]; // [esp+30h] [ebp-38h] BYREF
  int v53; // [esp+3Ch] [ebp-2Ch] BYREF
  int v54; // [esp+40h] [ebp-28h]
  int v55; // [esp+44h] [ebp-24h]
  int *v56; // [esp+48h] [ebp-20h] BYREF
  int v57; // [esp+50h] [ebp-18h]
  int v58; // [esp+54h] [ebp-14h]
  _DWORD **i; // [esp+58h] [ebp-10h]
  int v60; // [esp+5Ch] [ebp-Ch]
  _DWORD *v61; // [esp+60h] [ebp-8h]
  int v62; // [esp+64h] [ebp-4h]

  v61 = a1;
  v62 = a2;
  SmartObjStackRefBase<tagMENU>::Init(0);
  v57 = 0;
  memset(v49, 0, sizeof(v49));
  memset(v50, 0, sizeof(v50));
  v53 = 0;
  v54 = 0;
  v55 = 0;
  memset(v51, 0, sizeof(v51));
  v3 = (_DWORD **)(a2 + 24);
  for ( i = (_DWORD **)(a2 + 24); ; v3 = i )
  {
    v4 = *v3;
    if ( !*v3 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = *v3;
      DesktopName = GetDesktopName(v4);
      WPP_RECORDER_SF_Sq(v6, 10, v6, DesktopName, (char)v45);
    }
    PushW32ThreadLock((int)v4, v49, (int)UserDereferenceObject);
    if ( v4 )
      ObfReferenceObject(v4);
    v7 = v4[5];
    v60 = v7;
    PushW32ThreadLock(v7, v50, (int)UserDereferenceObject);
    v8 = (void *)v4[5];
    if ( v8 )
      ObfReferenceObject(v8);
    LockObjectAssignment(i, v4[4]);
    UnlockObjectAssignment(v4 + 4);
    if ( v4 == (_DWORD *)_grpdeskRitInput )
    {
      memset(v52, 0, sizeof(v52));
      v29 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(8, 11, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids);
        v29 = &WPP_RECORDER_INITIALIZED;
      }
      v7 = v60;
      if ( (*(_BYTE *)(v60 + 32) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(8, 12, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids);
          v29 = &WPP_RECORDER_INITIALIZED;
        }
        if ( gspdeskDisconnect && (v4 == grpdeskLogon || !grpdeskLogon || (*((_BYTE *)grpdeskLogon + 24) & 2) != 0) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(8, 13, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids);
          RemoteDisableScreen(v29, v29);
          goto LABEL_11;
        }
        v30 = grpdeskLogon;
      }
      else
      {
        v30 = *(_DWORD **)(v60 + 8);
        if ( v30 == v4 )
          v30 = (_DWORD *)v4[4];
        if ( !v30 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(8, 14, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids);
          ClearWakeBit(0, (unsigned int)v47, v48);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = GetDesktopName(v30);
        WPP_RECORDER_SF_Sq(v32, 15, v32, v31, (char)v30);
      }
      PushW32ThreadLock((int)v30, v52, (int)UserDereferenceObject);
      if ( v30 )
        ObfReferenceObject(v30);
      v33 = v30;
      v7 = v60;
      xxxSwitchDesktop(v60, v33, 0, 0);
      PopAndFreeW32ThreadLock((int)v52);
    }
    else if ( v4 == (_DWORD *)v61[62] )
    {
      v34 = 0;
      v35 = _grpWinStaList;
      if ( _grpWinStaList )
      {
        while ( (*(_BYTE *)(v35 + 32) & 0x10) != 0 || *(_DWORD *)(v35 + 28) != v62 || !*(_DWORD *)(v35 + 8) )
        {
          v35 = *(_DWORD *)(v35 + 4);
          if ( !v35 )
            goto LABEL_108;
        }
        v34 = *(_DWORD **)(v35 + 8);
        do
        {
          if ( v34 != v4 )
            break;
          v34 = (_DWORD *)v34[4];
        }
        while ( v34 );
      }
LABEL_108:
      xxxSetThreadDesktop(0, v34);
    }
LABEL_11:
    if ( v4 == (_DWORD *)_gspdeskShouldBeForeground )
    {
      for ( j = *(_DWORD **)(v7 + 8); j && (j == gspdeskDisconnect || j == grpdeskLogon); j = (_DWORD *)j[4] )
        ;
      LockObjectAssignment(_gspdeskShouldBeForeground, j);
    }
    v9 = (_BYTE *)v61[62];
    v58 = v61[79];
    PushW32ThreadLock((int)v9, v51, (int)UserDereferenceObject);
    if ( v9 )
      ObfReferenceObject(v9);
    xxxSetThreadDesktop(0, v4);
    HMAssignmentUnlock(v4 + 11);
    HMAssignmentUnlock(v4 + 12);
    HMAssignmentUnlock(v4 + 25);
    v4[6] &= 0xFFFFFA3F;
    v10 = v4[7];
    if ( v10 )
    {
      v57 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v10);
      *(_DWORD *)(*(_DWORD *)(v4[7] + 20) + 20) &= ~0x80u;
      if ( UnlockDesktopMenu(v47) )
      {
        v36 = v57;
        if ( !v57 )
          v36 = *v56;
        _DestroyMenu(v36);
      }
    }
    v11 = v4[8];
    if ( v11 )
    {
      v57 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v11);
      *(_DWORD *)(*(_DWORD *)(v4[8] + 20) + 20) &= ~0x80u;
      if ( UnlockDesktopMenu(v47) )
      {
        v37 = v57;
        if ( !v57 )
          v37 = *v56;
        _DestroyMenu(v37);
      }
    }
    v12 = v4[9];
    if ( v12 )
    {
      v57 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v12);
      if ( UnlockDesktopMenu(v47) )
      {
        v38 = v57;
        if ( !v57 )
          v38 = *v56;
        _DestroyMenu(v38);
      }
    }
    v13 = v4[10];
    if ( v13 )
    {
      v57 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v13);
      if ( UnlockDesktopMenu(v47) )
      {
        v39 = v57;
        if ( !v57 )
          v39 = *v56;
        _DestroyMenu(v39);
      }
    }
    if ( v4[1] )
    {
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(v47, v48);
      v14 = (_DWORD *)v4[1];
      if ( v14[3] == gspwndFullScreen )
      {
        HMAssignmentUnlock(&gspwndFullScreen);
        v14 = (_DWORD *)v4[1];
      }
      if ( v14[21] )
      {
        if ( IsWindowDesktopComposed(v14[21]) )
        {
          v46 = **(_DWORD **)v4[1];
          v40 = (void *)ReferenceDwmApiPort();
          DwmAsyncShellWindowChange(v40, v46);
        }
        v41 = v4[1] + 84;
        *(_DWORD *)(*(_DWORD *)v4[1] + 12) = 0;
        HMAssignmentUnlock(v41);
        v14 = (_DWORD *)v4[1];
      }
      if ( v14[23] )
      {
        HMAssignmentUnlock(v14 + 23);
        v14 = (_DWORD *)v4[1];
      }
      if ( v14[24] )
      {
        *(_DWORD *)(*v14 + 12) = 0;
        HMAssignmentUnlock(v14 + 24);
        v14 = (_DWORD *)v4[1];
      }
      v15 = v14 + 25;
      if ( *v15 )
      {
        *(_DWORD *)(*(v15 - 25) + 20) = 0;
        HMAssignmentUnlock(v15);
      }
    }
    v16 = (struct tagVWPL **)v4[13];
    if ( v16 && HMAssignmentUnlock(v4 + 13) )
      xxxDestroyWindow(v16);
    v17 = (struct tagVWPL **)v4[14];
    if ( v17 && HMAssignmentUnlock(v4 + 14) )
      xxxDestroyWindow(v17);
    if ( v4[38] )
    {
      Win32FreePool(v4[38]);
      v4[38] = 0;
    }
    v18 = v62;
    v19 = *(_DWORD *)(v62 + 4);
    if ( v19 && *(_DWORD **)(v19 + 12) == v4 )
    {
      if ( (*(_BYTE *)v62 & 2) != 0 )
      {
        v20 = _grpWinStaList;
        if ( _grpWinStaList )
        {
          while ( 1 )
          {
            v20 = *(_DWORD *)(v20 + 4);
            if ( !v20 )
              break;
            v21 = *(void **)(v20 + 8);
            if ( v21 )
              goto LABEL_40;
          }
        }
      }
      else
      {
        v21 = *(void **)(v60 + 8);
        if ( v21 )
        {
LABEL_40:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = GetDesktopName(v21);
            WPP_RECORDER_SF_qqS(v42, v43, v44, *(_DWORD *)(v62 + 4), (char)v21, v22);
            v18 = v62;
          }
          LockObjectAssignment(*(_DWORD *)(v18 + 4) + 12, v21);
          goto LABEL_43;
        }
      }
      if ( v62 == _gTermIO[0] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_q(
            v19,
            v18,
            8u,
            16,
            (int)&WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids,
            *(_DWORD *)(v62 + 4));
          v18 = v62;
        }
        xxxCleanupMotherDesktopWindow(v18);
      }
    }
LABEL_43:
    v23 = v4[1];
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 12);
      if ( v24 )
      {
        if ( (*(_BYTE *)(*(_DWORD *)(v24 + 20) + 23) & 0x10) != 0 )
        {
          v54 = v24;
          v53 = v61[57];
          v61[57] = &v53;
          HMLockObject(v24);
          xxxSetWindowPos(v24, 0, 0, 0, 0, 0, 1183);
          ThreadUnlock1();
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(8, 18, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids);
        xxxDestroyWindow(*(struct tagVWPL ***)(v4[1] + 12));
        if ( v4 == (_DWORD *)_grpdeskRitInput )
        {
          v4[6] |= 1u;
          if ( gspwndShouldBeForeground )
            HMAssignmentUnlock(&gspwndShouldBeForeground);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v25) = 4;
            WPP_RECORDER_SF_q(v26, v25, 8u, 19, (int)&WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, (char)v4);
          }
        }
        else
        {
          v27 = v4[1] + 12;
          *(_DWORD *)(*(_DWORD *)v4[1] + 4) = 0;
          HMAssignmentUnlock(v27);
        }
        v4[6] |= 2u;
      }
    }
    if ( (*(_BYTE *)v62 & 2) == 0 || !v9 || (v9[24] & 6) == 0 )
      xxxSetThreadDesktop(v58, v9);
    PopAndFreeW32ThreadLock((int)v51);
    PopAndFreeW32ThreadLock((int)v50);
    PopAndFreeW32ThreadLock((int)v49);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(8, 20, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids);
  KeSetEvent(_gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v56);
}
