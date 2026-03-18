/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BDFE8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C00AF380 (_DestroyMenu.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BA988 (xxxCleanupMotherDesktopWindow.c)
 *     xxxSetThreadDesktop @ 0x1C00BD740 (xxxSetThreadDesktop.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C00BE540 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_SF_Sq @ 0x1C00BE680 (WPP_RECORDER_SF_Sq.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C00BEC38 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C00BEF0C (WPP_RECORDER_SF_qqS.c)
 *     DwmAsyncShellWindowChange @ 0x1C00BFAE0 (DwmAsyncShellWindowChange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     RemoteDisableScreen @ 0x1C011E640 (RemoteDisableScreen.c)
 *     UnlockDesktopMenu @ 0x1C012AE58 (UnlockDesktopMenu.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0157ED0 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  int v4; // edx
  int v5; // ecx
  char *v6; // rbx
  __int64 v7; // rdi
  const unsigned __int16 *DesktopName; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r14
  void *v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r8
  _DWORD *v17; // rsi
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  WindowGroupingFeature ***v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 *v23; // rbx
  __int64 *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct tagDESKTOP *v28; // rbx
  const unsigned __int16 *v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rbx
  __int64 v35; // rbx
  int v36; // edx
  int v37; // ecx
  __int64 v38; // rcx
  _QWORD *j; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct tagDESKTOP *v43; // rbx
  const unsigned __int16 *v44; // rax
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // rdx
  __int64 i; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // rcx
  int v56; // [rsp+28h] [rbp-79h]
  _QWORD v57[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v58; // [rsp+58h] [rbp-49h]
  __int128 v59; // [rsp+60h] [rbp-41h] BYREF
  __int64 v60; // [rsp+70h] [rbp-31h]
  __int128 v61; // [rsp+78h] [rbp-29h] BYREF
  __int64 v62; // [rsp+88h] [rbp-19h]
  __int128 v63; // [rsp+90h] [rbp-11h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-1h]
  __int128 v65; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v66; // [rsp+B8h] [rbp+17h]
  __int128 v67; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v68; // [rsp+D0h] [rbp+2Fh]

  SmartObjStackRefBase<tagMENU>::Init(v57, 0LL);
  v58 = 0LL;
  v6 = (char *)a2 + 48;
  v7 = *((_QWORD *)a2 + 6);
  v68 = 0LL;
  v66 = 0LL;
  v60 = 0LL;
  v64 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  while ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      DesktopName = GetDesktopName((struct tagDESKTOP *)v7);
      WPP_RECORDER_SF_Sq(v10, v9, v11, 10, v56, (__int64)DesktopName, v7);
    }
    PushW32ThreadLock(v7, &v67, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v12 = *(_QWORD *)(v7 + 40);
    PushW32ThreadLock(v12, &v65, UserDereferenceObject);
    v13 = *(void **)(v7 + 40);
    if ( v13 )
      ObfReferenceObject(v13);
    LockObjectAssignment(v6, *(_QWORD *)(v7 + 32));
    UnlockObjectAssignment(v7 + 32);
    if ( v7 == grpdeskRitInput )
    {
      v61 = 0LL;
      v62 = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_(v15, v14, 8, 11, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids);
      }
      if ( (*(_DWORD *)(v12 + 64) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_(v15, v14, 8, 12, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids);
        }
        if ( gspdeskDisconnect
          && ((PVOID)v7 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_(v15, v14, 8, 13, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids);
          }
          RemoteDisableScreen(grpdeskRitInput, v14, v16, gbDesktopLocked);
          goto LABEL_8;
        }
        v43 = (struct tagDESKTOP *)grpdeskLogon;
      }
      else
      {
        v43 = *(struct tagDESKTOP **)(v12 + 16);
        if ( v43 == (struct tagDESKTOP *)v7 )
          v43 = *(struct tagDESKTOP **)(v7 + 32);
        if ( !v43 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_(v15, v14, 8, 14, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids);
          }
          ClearWakeBit(a1, 0x3C07u, 0);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = GetDesktopName(v43);
        WPP_RECORDER_SF_Sq(v46, v45, v47, 15, v56, (__int64)v44, (char)v43);
      }
      PushW32ThreadLock((__int64)v43, &v61, UserDereferenceObject);
      if ( v43 )
        ObfReferenceObject(v43);
      xxxSwitchDesktop(v12, (__int64)v43, 0, 0);
      PopAndFreeW32ThreadLock((__int64)&v61);
    }
    else if ( v7 == *((_QWORD *)a1 + 56) )
    {
      v48 = 0LL;
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( (*(_DWORD *)(i + 64) & 0x10) == 0 && *(struct tagTERMINAL **)(i + 56) == a2 && *(_QWORD *)(i + 16) )
        {
          v48 = *(_QWORD *)(i + 16);
          do
          {
            if ( v48 != v7 )
              break;
            v48 = *(_QWORD *)(v48 + 32);
          }
          while ( v48 );
          break;
        }
      }
      xxxSetThreadDesktop(0LL, v48);
    }
LABEL_8:
    if ( v7 == gspdeskShouldBeForeground )
    {
      for ( j = *(_QWORD **)(v12 + 16); j && (j == gspdeskDisconnect || j == grpdeskLogon); j = (_QWORD *)j[4] )
        ;
      LockObjectAssignment(gspdeskShouldBeForeground, j);
    }
    v17 = (_DWORD *)*((_QWORD *)a1 + 56);
    v18 = *((_QWORD *)a1 + 73);
    PushW32ThreadLock((__int64)v17, &v63, UserDereferenceObject);
    if ( v17 )
      ObfReferenceObject(v17);
    xxxSetThreadDesktop(0LL, v7);
    HMAssignmentUnlock(v7 + 88);
    HMAssignmentUnlock(v7 + 96);
    HMAssignmentUnlock(v7 + 184);
    *(_DWORD *)(v7 + 48) &= 0xFFFFFA3F;
    if ( *(_QWORD *)(v7 + 56) )
    {
      v58 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v57);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu(v7 + 56) )
      {
        v50 = v58;
        if ( !v58 )
          v50 = *(_QWORD *)v57[0];
        DestroyMenu(v50);
      }
    }
    if ( *(_QWORD *)(v7 + 64) )
    {
      v58 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v57);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 64) + 40LL) + 40LL) &= ~0x80u;
      if ( UnlockDesktopMenu(v7 + 64) )
      {
        v51 = v58;
        if ( !v58 )
          v51 = *(_QWORD *)v57[0];
        DestroyMenu(v51);
      }
    }
    if ( *(_QWORD *)(v7 + 72) )
    {
      v58 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v57);
      if ( UnlockDesktopMenu(v7 + 72) )
      {
        v52 = v58;
        if ( !v58 )
          v52 = *(_QWORD *)v57[0];
        DestroyMenu(v52);
      }
    }
    v19 = *(_QWORD *)(v7 + 80);
    if ( v19 )
    {
      v58 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v57);
      if ( UnlockDesktopMenu(v7 + 80) )
      {
        v53 = v58;
        if ( !v58 )
          v53 = *(_QWORD *)v57[0];
        DestroyMenu(v53);
      }
    }
    v20 = *(WindowGroupingFeature ****)(v7 + 8);
    if ( v20 )
    {
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(**v20, v19);
      v21 = *(_QWORD *)(v7 + 8);
      if ( *(struct tagWND **)(v21 + 24) == gspwndFullScreen )
      {
        HMAssignmentUnlock(&gspwndFullScreen);
        v21 = *(_QWORD *)(v7 + 8);
      }
      if ( *(_QWORD *)(v21 + 168) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(v21 + 168)) )
        {
          v54 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v7 + 8));
          DwmAsyncShellWindowChange(v54);
        }
        v55 = *(_QWORD *)(v7 + 8) + 168LL;
        *(_QWORD *)(**(_QWORD **)(v7 + 8) + 24LL) = 0LL;
        HMAssignmentUnlock(v55);
        v21 = *(_QWORD *)(v7 + 8);
      }
      if ( *(_QWORD *)(v21 + 184) )
      {
        HMAssignmentUnlock(v21 + 184);
        v21 = *(_QWORD *)(v7 + 8);
      }
      LODWORD(v19) = v21 + 192;
      if ( *(_QWORD *)(v21 + 192) )
      {
        *(_QWORD *)(*(_QWORD *)v21 + 24LL) = 0LL;
        HMAssignmentUnlock(v21 + 192);
        v21 = *(_QWORD *)(v7 + 8);
      }
      v22 = (_QWORD *)(v21 + 200);
      if ( *v22 )
      {
        *(_QWORD *)(*(v22 - 25) + 40LL) = 0LL;
        HMAssignmentUnlock(v22);
      }
    }
    v23 = *(__int64 **)(v7 + 104);
    if ( v23 && HMAssignmentUnlock(v7 + 104) )
      xxxDestroyWindow(v23);
    v24 = *(__int64 **)(v7 + 112);
    if ( v24 && HMAssignmentUnlock(v7 + 112) )
      xxxDestroyWindow(v24);
    v25 = *(_QWORD *)(v7 + 264);
    if ( v25 )
    {
      Win32FreePool(v25);
      *(_QWORD *)(v7 + 264) = 0LL;
    }
    v26 = *((_QWORD *)a2 + 1);
    if ( !v26 || *(_QWORD *)(v26 + 24) != v7 )
      goto LABEL_40;
    if ( (*(_DWORD *)a2 & 2) != 0 )
    {
      v27 = grpWinStaList;
      if ( grpWinStaList )
      {
        while ( 1 )
        {
          v27 = *(_QWORD *)(v27 + 8);
          if ( !v27 )
            break;
          v28 = *(struct tagDESKTOP **)(v27 + 16);
          if ( v28 )
            goto LABEL_37;
        }
      }
LABEL_60:
      if ( a2 == (struct tagTERMINAL *)gTermIO[0] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_q(
            v26,
            v19,
            8,
            16,
            (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids,
            *((_QWORD *)a2 + 1));
        }
        xxxCleanupMotherDesktopWindow((__int64)a2);
      }
      goto LABEL_40;
    }
    v28 = *(struct tagDESKTOP **)(v12 + 16);
    if ( !v28 )
      goto LABEL_60;
LABEL_37:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = GetDesktopName(v28);
      WPP_RECORDER_SF_qqS(v31, v30, v32, v33, v56, *((_QWORD *)a2 + 1), (char)v28, (__int64)v29);
    }
    LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v28);
LABEL_40:
    v34 = *(_QWORD *)(v7 + 8);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 24);
      if ( v35 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 31LL) & 0x10) != 0 )
        {
          *(_QWORD *)&v59 = *((_QWORD *)a1 + 51);
          *((_QWORD *)a1 + 51) = &v59;
          *((_QWORD *)&v59 + 1) = v35;
          HMLockObject(v35);
          xxxSetWindowPos((struct tagWND *)v35, 0LL, 0LL, 0LL, 0, 0, 1183);
          ThreadUnlock1(v41, v40, v42);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_(v26, v19, 8, 18, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids);
        }
        xxxDestroyWindow(*(__int64 **)(*(_QWORD *)(v7 + 8) + 24LL));
        if ( v7 == grpdeskRitInput )
        {
          *(_DWORD *)(v7 + 48) |= 1u;
          if ( gspwndShouldBeForeground )
            HMAssignmentUnlock(&gspwndShouldBeForeground);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = 4;
            WPP_RECORDER_SF_q(v37, v36, 8, 19, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids, v7);
          }
        }
        else
        {
          v38 = *(_QWORD *)(v7 + 8) + 24LL;
          *(_QWORD *)(**(_QWORD **)(v7 + 8) + 8LL) = 0LL;
          HMAssignmentUnlock(v38);
        }
        *(_DWORD *)(v7 + 48) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v17 || (v17[12] & 6) == 0 )
      xxxSetThreadDesktop(v18, v17);
    PopAndFreeW32ThreadLock((__int64)&v63);
    PopAndFreeW32ThreadLock((__int64)&v65);
    PopAndFreeW32ThreadLock((__int64)&v67);
    v6 = (char *)a2 + 48;
    v7 = *((_QWORD *)a2 + 6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(v5, v4, 8, 20, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v57);
}
