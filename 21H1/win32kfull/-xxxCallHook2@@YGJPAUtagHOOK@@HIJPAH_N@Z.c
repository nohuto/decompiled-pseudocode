/*
 * XREFs of ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0
 * Callers:
 *     _EditionKeyEventLLHook@48 @ 0x1292C (_EditionKeyEventLLHook@48.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 *     _EditionLLMouseButtonHook@28 @ 0x1479C6 (_EditionLLMouseButtonHook@28.c)
 *     _EditionLLMouseWheelHook@24 @ 0x147BBA (_EditionLLMouseWheelHook@24.c)
 *     _xxxCallJournalPlaybackHook@4 @ 0x1527A2 (_xxxCallJournalPlaybackHook@4.c)
 *     _xxxCallJournalRecordHook@4 @ 0x152B33 (_xxxCallJournalRecordHook@4.c)
 *     _xxxCallMouseHook@12 @ 0x152C40 (_xxxCallMouseHook@12.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 *     _xxxPointerCallHook@20 @ 0x15A676 (_xxxPointerCallHook@20.c)
 * Callees:
 *     _PhkNextValid@4 @ 0x1299C (_PhkNextValid@4.c)
 *     _FreeHook@4 @ 0x12EC8 (_FreeHook@4.c)
 *     _xxxLoadHmodIndex@4 @ 0x16802 (_xxxLoadHmodIndex@4.c)
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YGHPBUtagTHREADINFO@@@Z @ 0xA49E0 (-IsForegroundShellFrameQueueAccessible@@YGHPBUtagTHREADINFO@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

size_t __userpurge xxxCallHook2@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        struct tagHOOK *a3,
        _DWORD *a4,
        int *a5,
        char a6,
        int *a7,
        bool a8)
{
  unsigned int Valid; // esi
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // eax
  char v15; // dl
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // ebx
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // ecx
  char v23; // bl
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int CurrentProcess; // eax
  int v28; // ecx
  int v29; // ebx
  int v30; // edx
  unsigned int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  void (*v38)(void); // ebx
  int v39; // eax
  bool v40; // zf
  int v41; // ecx
  __int32 v42; // ecx
  unsigned __int64 v43; // rax
  char v44; // bl
  int v45; // eax
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  int v49; // ebx
  __int32 v50; // ecx
  int v51; // esi
  unsigned int v52; // edx
  int v53; // eax
  const struct tagTHREADINFO *v55; // [esp+0h] [ebp-E8h]
  int v56; // [esp+4h] [ebp-E4h]
  int v57[7]; // [esp+20h] [ebp-C8h] BYREF
  unsigned int v58[3]; // [esp+3Ch] [ebp-ACh] BYREF
  unsigned int v59[2]; // [esp+48h] [ebp-A0h] BYREF
  _DWORD *v60; // [esp+50h] [ebp-98h]
  int v61; // [esp+54h] [ebp-94h]
  int v62; // [esp+58h] [ebp-90h]
  int v63; // [esp+5Ch] [ebp-8Ch]
  int v64; // [esp+60h] [ebp-88h]
  int v65; // [esp+64h] [ebp-84h] BYREF
  unsigned int v66; // [esp+68h] [ebp-80h]
  int v67; // [esp+6Ch] [ebp-7Ch]
  int v68; // [esp+74h] [ebp-74h]
  int ProcessInformation; // [esp+84h] [ebp-64h] BYREF
  int v70; // [esp+88h] [ebp-60h]
  int v71; // [esp+8Ch] [ebp-5Ch] BYREF
  int v72; // [esp+90h] [ebp-58h]
  int v73; // [esp+94h] [ebp-54h]
  int v74; // [esp+98h] [ebp-50h]
  int *v75; // [esp+9Ch] [ebp-4Ch]
  __int32 v76; // [esp+A0h] [ebp-48h]
  unsigned int v77; // [esp+A4h] [ebp-44h]
  BOOL v78; // [esp+A8h] [ebp-40h]
  int v79; // [esp+ACh] [ebp-3Ch]
  size_t v80; // [esp+B0h] [ebp-38h] BYREF
  char v81; // [esp+B7h] [ebp-31h]
  int v82[5]; // [esp+B8h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+D0h] [ebp-18h]

  v79 = a1;
  Valid = a2;
  v75 = a5;
  v76 = 0;
  v80 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  if ( !a2 )
    return 0;
  v9 = *(_DWORD *)(a2 + 24);
  v77 = v9;
  v10 = _gptiCurrent;
  v68 = _gptiCurrent;
  if ( _gptiCurrent == _gptiRit && (v9 < 0xD || v9 > 0xE) )
    return 0;
  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x10000001) != 0 || !*(_DWORD *)(_gptiCurrent + 248) && v9 != 14 )
    return dword_2510E4[v9];
  if ( v9 > 6 )
  {
    if ( v9 == 12 )
    {
      v13 = a4;
      v11 = a4[3];
      goto LABEL_20;
    }
    if ( v9 != -1 )
    {
LABEL_17:
      v11 = 0;
      LOWORD(v12) = 0;
      goto LABEL_21;
    }
  }
  else if ( v9 != 6 )
  {
    if ( !v9 )
    {
      v11 = *a4;
      LOWORD(v12) = 0;
      goto LABEL_21;
    }
    if ( v9 != 3 )
    {
      if ( v9 == 4 )
      {
        v11 = a4[2];
        v12 = a4[1];
        goto LABEL_21;
      }
      goto LABEL_17;
    }
  }
  v13 = a4;
  v11 = a4[1];
LABEL_20:
  v12 = v13[2];
LABEL_21:
  if ( (((unsigned int)(v11 - 577) <= 3 || (unsigned int)(v11 - 581) <= 0x12 && v11 != 589) && v11 != 595
     || v11 == 528 && (_WORD)v12 == 582)
    && (v9 < 3 || v9 > 4 && v9 != 12) )
  {
    return dword_2510E4[v9];
  }
  while ( (*(_BYTE *)(_HMPheFromObject(Valid) + 13) & 1) != 0
       || v9 == 14
       && *(_DWORD *)(Valid + 8)
       && (unsigned __int8)IsSpatialDelegationEnabledForThread(*(_DWORD *)(Valid + 8))
       || v9 == 13
       && *(_DWORD *)(Valid + 8)
       && (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_DWORD *)(Valid + 8)) )
  {
    Valid = PhkNextValid(Valid);
LABEL_174:
    if ( !Valid )
      return dword_2510E4[v9];
  }
  if ( v75 )
    *v75 = *(_DWORD *)(Valid + 32) & 2;
  v14 = *(_DWORD *)(Valid + 24);
  v15 = byte_2510CD[v14];
  v81 = v15;
  if ( v14 == 10 )
  {
    if ( (*(_BYTE *)(_gptiCurrent + 264) & 8) != 0 && (v79 == 8 || v79 == 4 || v79 == 12) )
    {
      v15 |= 0x10u;
      v81 = v15;
    }
    if ( (*(_BYTE *)(_gptiCurrent + 264) & 4) != 0 && v79 == 11 )
    {
      v15 |= 0x10u;
      v81 = v15;
    }
  }
  v16 = *(_DWORD *)(Valid + 8);
  v78 = v16 != _gptiCurrent
     && ((v15 & 0x24) != 0
      || (*(_BYTE *)(v16 + 264) & 2) != 0
      && ((*(_BYTE *)(_gptiCurrent + 264) & 2) == 0 || *(_DWORD *)(_gptiCurrent + 232) != *(_DWORD *)(v16 + 232))
      || (*(_BYTE *)(_gptiCurrent + 264) & 0xC) != 0 && *(_DWORD *)(v16 + 232) != *(_DWORD *)(_gptiCurrent + 232)
      || IsProcessDwm(**(_DWORD **)(v16 + 232))
      || !(unsigned __int8)Enforced()
      && (*(_BYTE *)(Valid + 32) & 1) != 0
      && ((v17 = *(_DWORD *)(*(_DWORD *)(Valid + 8) + 232),
           v18 = *(_DWORD *)(_gptiCurrent + 232),
           v19 = *(_DWORD *)(v17 + 424),
           v19 != *(_DWORD *)(v18 + 424))
       || *(_DWORD *)(v17 + 428) != *(_DWORD *)(v18 + 428))
      && (*(_DWORD *)(_gptiCurrent + 264) & 0x400000) == 0
      && (v19 != _luidSystem[0] || *(_DWORD *)(v17 + 428) != _luidSystem[1])
      || (v20 = *(_DWORD **)(Valid + 8), v20[58] != *(_DWORD *)(_gptiCurrent + 232))
      && (unsigned __int8)IsRestricted(*v20));
  v21 = *(_DWORD *)(Valid + 24);
  if ( v21 == 14 || v21 == 13 )
  {
    if ( !a6 )
    {
      if ( _gpqForeground )
      {
        if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(*(_DWORD *)(Valid + 8) + 232) + 496, _gpqForeground + 316)
          && !IsForegroundShellFrameQueueAccessible(v55) )
        {
          v32 = *(_DWORD *)(Valid + 8);
          if ( *(int *)(*(_DWORD *)(v32 + 232) + 8) >= 0 )
          {
            EtwTraceUIPIInputError(
              v32,
              0,
              _gpqForeground,
              *(_DWORD *)(_gpqForeground + 316),
              *(_DWORD *)(_gpqForeground + 320),
              6);
            v23 = v81 & 0xEF;
            v81 &= ~0x10u;
            goto LABEL_76;
          }
        }
      }
    }
    if ( *(_DWORD *)(Valid + 24) == 14
      && *(_DWORD *)(_gptiCurrent + 780) != -1
      && !(unsigned __int8)CheckAccess(*(_DWORD *)(*(_DWORD *)(Valid + 8) + 232) + 496, _gptiCurrent + 780) )
    {
      v33 = *(_DWORD *)(Valid + 8);
      if ( *(int *)(*(_DWORD *)(v33 + 232) + 8) >= 0 )
      {
        EtwTraceUIPIInputError(v33, 0, 0, *(_DWORD *)(_gptiCurrent + 780), *(_DWORD *)(_gptiCurrent + 784), 6);
        v23 = v81 & 0xEF;
        v81 &= ~0x10u;
        goto LABEL_76;
      }
    }
  }
  else if ( !(unsigned __int8)CheckAccess(
                                *(_DWORD *)(*(_DWORD *)(Valid + 8) + 232) + 496,
                                *(_DWORD *)(_gptiCurrent + 232) + 496) )
  {
    v22 = *(_DWORD *)(Valid + 8);
    if ( *(int *)(*(_DWORD *)(v22 + 232) + 8) >= 0 )
    {
      v81 &= ~0x10u;
      LOBYTE(v74) = v81;
      EtwTraceUIPIHookError(Valid, v74, v22, _gptiCurrent, v77, v79, a3, a4);
    }
    v78 = 1;
  }
  v23 = v81;
LABEL_76:
  if ( !v78 && (*(_BYTE *)(Valid + 32) & 1) != 0 && !IsImmersiveBroker(*(_DWORD *)(*(_DWORD *)(Valid + 8) + 232)) )
  {
    v24 = *(_DWORD *)(*(_DWORD *)(Valid + 8) + 232);
    if ( *(int *)(v24 + 8) >= 0 && v24 != *(_DWORD *)(_gptiCurrent + 232) && (*(_DWORD *)(v24 + 464) & 0x100) == 0 )
    {
      if ( IsImmersiveAppRestricted(*(_DWORD *)(_gptiCurrent + 232))
        || (v70 = 0,
            ProcessInformation = 6,
            ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0) < 0)
        || (v70 & 1) != 0 )
      {
        v78 = 1;
      }
    }
  }
  v65 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v65;
  v66 = Valid;
  HMLockObject(Valid);
  if ( v78 )
  {
    if ( (v23 & 0x10) != 0 )
    {
      v60 = a4;
      v59[0] = Valid;
      v59[1] = v79;
      v61 = -1;
      v62 = -1;
      v63 = -1;
      v64 = -1;
      if ( (*(_BYTE *)(*(_DWORD *)(Valid + 8) + 688) & 0x20) == 0 )
      {
        v79 = *(_DWORD *)(_gptiCurrent + 376);
        v41 = v79;
        v71 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v71;
        v72 = v41;
        if ( v41 )
          HMLockObject(v41);
        HMAssignmentLock(v41, v25);
        HIDWORD(v43) = *(_DWORD *)(_gptiCurrent + 260);
        if ( HIDWORD(v43) )
        {
          LODWORD(v43) = PhkNextValid(Valid);
          ms_exc.registration.TryLevel = 2;
          v42 = *(_DWORD *)(HIDWORD(v43) + 32);
          v76 = v42;
          if ( (_DWORD)v43 )
            LODWORD(v43) = *(_DWORD *)v43;
          else
            LODWORD(v43) = 0;
          *(_DWORD *)(HIDWORD(v43) + 32) = v43;
          ms_exc.registration.TryLevel = -2;
        }
        BYTE4(v43) = v81;
        v44 = v81 & 0x20;
        if ( (v81 & 0x20) != 0 )
        {
          v45 = 30000;
          if ( (*(_BYTE *)(Valid + 32) & 0x40) == 0 )
            v45 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
          v78 = v45;
          if ( *(char *)(Valid + 48) >= 0 )
            v46 = v78;
          else
            v46 = 20;
        }
        else
        {
          v46 = 200;
        }
        if ( v44 || (v81 & 4) == 0 && (*(_BYTE *)(_gptiCurrent + 264) & 0xC) != 0 )
        {
          memset(&v57[1], 0, 12);
          v57[0] = 2;
          v57[4] = 2;
          v57[5] = v46;
          v57[6] = (int)&v80;
          if ( v44 )
          {
            v61 = *(_DWORD *)(_gptiCurrent + 772);
            v62 = *(_DWORD *)(_gptiCurrent + 776);
            v63 = *(_DWORD *)(_gptiCurrent + 780);
            v64 = *(_DWORD *)(_gptiCurrent + 784);
            v60 = *(_DWORD **)(_gptiCurrent + 788);
          }
          if ( ((unsigned int)&loc_20000 & *(_DWORD *)(_gptiCurrent + 264)) != 0
            || IsThreadHung(*(_DWORD **)(Valid + 8), 0)
            || !xxxInterSendMsgEx(
                  0,
                  (struct tagPROCESSINFO *)0x314,
                  a3,
                  (size_t)v59,
                  1,
                  *(_DWORD *)(Valid + 8),
                  (int)v57,
                  1u,
                  0) )
          {
            v48 = dword_2510E4[v77];
            v80 = v48;
          }
          else
          {
            v48 = v80;
          }
          if ( v44 && v48 )
          {
            v75 = *(int **)(Valid + 8);
            v49 = MEMORY[0xFFDF0004];
            v74 = MEMORY[0xFFDF0004];
            if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
            {
              v51 = MEMORY[0xFFDF0324];
              v52 = MEMORY[0xFFDF0320];
              if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
              {
                do
                {
                  _mm_pause();
                  v51 = MEMORY[0xFFDF0324];
                  v52 = MEMORY[0xFFDF0320];
                }
                while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
                v10 = v68;
                v49 = v74;
              }
              v43 = (unsigned int)v49 * (unsigned __int64)v52;
              v50 = v49 * (v51 << 8) + (v43 >> 24);
            }
            else
            {
              v43 = (unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320];
              v50 = v43 >> 24;
            }
            v42 = _InterlockedExchange((volatile __int32 *)(v75[61] + 12), v50);
          }
        }
        else
        {
          memset(v58, 0, sizeof(v58));
          v47 = PsChargeProcessWakeCounter(**(_DWORD **)(*(_DWORD *)(Valid + 8) + 232), 0, 2, 2);
          if ( v47 )
            PushW32ThreadLock(v47, v58, ReleaseWakeReference);
          v80 = xxxInterSendMsgEx(
                  0,
                  (struct tagPROCESSINFO *)0x314,
                  a3,
                  (size_t)v59,
                  1,
                  *(_DWORD *)(Valid + 8),
                  0,
                  1u,
                  0);
          if ( v47 )
            PopAndFreeAlwaysW32ThreadLock(v58);
        }
        HMAssignmentLock(v42, HIDWORD(v43));
        v53 = *(_DWORD *)(v10 + 260);
        if ( v53 )
        {
          *(_DWORD *)(v53 + 32) = v76;
          ms_exc.registration.TryLevel = -2;
        }
        v38 = (void (*)(void))ThreadUnlock1;
        ThreadUnlock1();
        goto LABEL_168;
      }
    }
    goto LABEL_169;
  }
  v26 = *(_DWORD *)(Valid + 36);
  if ( v26 != -1
    && ((1 << v26) & *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 224)) == 0
    && ((CurrentProcess = PsGetCurrentProcess(), PsIsProtectedProcess(CurrentProcess))
     || PsGetWin32KFilterSet() == 5
     || !xxxLoadHmodIndex(*(_DWORD *)(Valid + 36)))
    || (v28 = *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8) | *(_DWORD *)(_gptiCurrent + 372), (v28 & 0x400) != 0)
    && *(_DWORD *)(Valid + 24) != 9
    && (v82[0] = (int)PsGetThreadId((PETHREAD)*_gptiCurrent),
        v82[1] = 0,
        v82[4] = v79,
        v82[3] = (int)a3,
        v82[2] = (int)a4,
        xxxCallHook(*(struct tagHOOK **)(Valid + 24), 0, (unsigned int *)v82, 9u, (int)v55, v56)) )
  {
LABEL_169:
    Valid = PhkNextValid(Valid);
    v39 = ThreadUnlock1();
    if ( v39 )
    {
      v40 = (*(_BYTE *)(v39 + 32) & 0x10) == 0;
      goto LABEL_171;
    }
LABEL_173:
    v9 = v77;
    goto LABEL_174;
  }
  v29 = *(_DWORD *)(_gptiCurrent + 376);
  v71 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v71;
  v72 = v29;
  if ( v29 )
    HMLockObject(v29);
  v30 = *(_DWORD *)(_gptiCurrent + 260);
  if ( !v30 )
    goto LABEL_122;
  v31 = Valid;
  while ( 2 )
  {
    if ( *(_DWORD *)(v31 + 20) )
    {
      v31 = *(_DWORD *)(v31 + 20);
LABEL_114:
      if ( !v31 || *(char *)(v31 + 32) >= 0 )
        goto LABEL_118;
      continue;
    }
    break;
  }
  if ( (*(_BYTE *)(v31 + 32) & 1) == 0 )
  {
    v31 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 252) + 4 * *(_DWORD *)(v31 + 24) + 24);
    goto LABEL_114;
  }
  v31 = 0;
LABEL_118:
  ms_exc.registration.TryLevel = 0;
  v28 = *(_DWORD *)(v30 + 32);
  v76 = v28;
  if ( v31 )
    v34 = *(_DWORD *)v31;
  else
    v34 = 0;
  *(_DWORD *)(v30 + 32) = v34;
  ms_exc.registration.TryLevel = -2;
LABEL_122:
  HMAssignmentLock(v28, v30);
  v80 = xxxHkCallHook(a3, a4);
  HMAssignmentLock(v36, v35);
  v37 = *(_DWORD *)(_gptiCurrent + 260);
  if ( v37 )
  {
    *(_DWORD *)(v37 + 32) = v76;
    ms_exc.registration.TryLevel = -2;
  }
  v38 = (void (*)(void))ThreadUnlock1;
  ThreadUnlock1();
  if ( (*(_BYTE *)(Valid + 32) & 0x10) != 0 )
  {
    Valid = PhkNextValid(Valid);
    v39 = ThreadUnlock1();
    v40 = v39 == 0;
LABEL_171:
    if ( !v40 )
      FreeHook((_DWORD *)v39);
    goto LABEL_173;
  }
LABEL_168:
  v38();
  return v80;
}
