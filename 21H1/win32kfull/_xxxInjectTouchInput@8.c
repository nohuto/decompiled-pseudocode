/*
 * XREFs of _xxxInjectTouchInput@8 @ 0x14A084
 * Callers:
 *     _NtUserInjectTouchInput@8 @ 0x165800 (_NtUserInjectTouchInput@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _CheckGrantedAccess@8 @ 0x2A3D4 (_CheckGrantedAccess@8.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YGHH@Z @ 0xAFF1C (-IsGpqForegroundAccessibleCurrent@@YGHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904 (-MSGLUA_GPQFOREGROUND@@YGXXZ.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0xF0CC8 (-InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 *     _WPP_RECORDER_SF_D@24 @ 0x147D5C (_WPP_RECORDER_SF_D@24.c)
 *     _WPP_RECORDER_SF_dd@28 @ 0x147DEC (_WPP_RECORDER_SF_dd@28.c)
 *     ?CheckCurrentInjectionConfiguration@@YGXXZ @ 0x149044 (-CheckCurrentInjectionConfiguration@@YGXXZ.c)
 *     ?SortTouchContacts@@YGHPAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1493C6 (-SortTouchContacts@@YGHPAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I@Z @ 0x149543 (-ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I.c)
 *     ?_GetQpcBasedTouchStackTime@@YGKXZ @ 0x149798 (-_GetQpcBasedTouchStackTime@@YGKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YGH_K00HH@Z @ 0x149874 (-_ValidateInjectionQpcCount@@YGH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YGHKKKHH@Z @ 0x1498F6 (-_ValidateInjectionTime@@YGHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YGXPAUtagINJECTED_CONTACT@@PAUDEVICEINFO@@IK@Z @ 0x1499B8 (-xxxSendLastFrameTouchUp@@YGXPAUtagINJECTED_CONTACT@@PAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YGXPAUDEVICEINFO@@IPAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x149ACB (-xxxSendToTouchStack@@YGXPAUDEVICEINFO@@IPAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     _WPP_RECORDER_SF_didi@44 @ 0x149DC0 (_WPP_RECORDER_SF_didi@44.c)
 *     _WPP_RECORDER_SF_ii@36 @ 0x149E47 (_WPP_RECORDER_SF_ii@36.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxInjectTouchInput(unsigned int a1, unsigned int a2)
{
  int v2; // ebx
  int v3; // esi
  struct _NT_TIB *v4; // eax
  struct _NT_TIB *v5; // eax
  int v6; // ecx
  struct _NT_TIB *v7; // eax
  int v8; // eax
  struct tagINJECTED_CONTACT *v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  unsigned int v13; // edx
  _DWORD *v14; // eax
  char *v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  struct tagINJECTED_CONTACT *v27; // edx
  void **v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  int *ScreenRect; // eax
  int v34; // eax
  int v35; // edi
  int v36; // edx
  int v37; // ecx
  int v38; // esi
  int QpcBasedTouchStackTime; // edx
  unsigned int v40; // ecx
  unsigned int v41; // esi
  struct tagINJECTED_CONTACT *v42; // ecx
  int v43; // edx
  int *v44; // esi
  int v45; // edx
  int v46; // ecx
  int v47; // ecx
  _DWORD *v48; // esi
  int CurrentThreadDpiAwarenessContext; // eax
  INT DpiForSystem; // edi
  INT v51; // esi
  int *v52; // esi
  unsigned int v53; // ecx
  int v54; // edx
  _DWORD *v55; // eax
  int v56; // esi
  int v57; // ecx
  int v58; // [esp-24h] [ebp-94h]
  int v59; // [esp-20h] [ebp-90h]
  int v60; // [esp-1Ch] [ebp-8Ch]
  int v61; // [esp-10h] [ebp-80h]
  int v62; // [esp-Ch] [ebp-7Ch]
  int v63; // [esp-8h] [ebp-78h]
  unsigned __int64 v64; // [esp-8h] [ebp-78h]
  unsigned __int64 v65; // [esp-8h] [ebp-78h]
  char v66; // [esp-4h] [ebp-74h]
  int v67; // [esp-4h] [ebp-74h]
  struct tagPROCESSINFO *v68; // [esp+0h] [ebp-70h]
  unsigned int v69; // [esp+0h] [ebp-70h]
  struct tagRECT *v70; // [esp+0h] [ebp-70h]
  struct tagPOINTER_TOUCH_INFO *v71; // [esp+0h] [ebp-70h]
  int v72; // [esp+4h] [ebp-6Ch]
  unsigned int v73; // [esp+4h] [ebp-6Ch]
  unsigned int v74; // [esp+4h] [ebp-6Ch]
  unsigned int v75; // [esp+4h] [ebp-6Ch]
  unsigned __int64 v77; // [esp+14h] [ebp-5Ch]
  int v78; // [esp+1Ch] [ebp-54h]
  _DWORD *v80; // [esp+24h] [ebp-4Ch]
  unsigned int v81; // [esp+28h] [ebp-48h]
  unsigned int v82; // [esp+28h] [ebp-48h]
  unsigned int v83; // [esp+28h] [ebp-48h]
  int v84; // [esp+2Ch] [ebp-44h]
  INT *v85; // [esp+2Ch] [ebp-44h]
  int v86; // [esp+30h] [ebp-40h]
  int v87; // [esp+30h] [ebp-40h]
  struct tagINJECTED_CONTACT *v88; // [esp+34h] [ebp-3Ch]
  struct tagINJECTED_CONTACT *v89; // [esp+34h] [ebp-3Ch]
  int v90; // [esp+38h] [ebp-38h]
  unsigned __int64 v91; // [esp+3Ch] [ebp-34h]
  int v92; // [esp+44h] [ebp-2Ch] BYREF
  int v93; // [esp+48h] [ebp-28h]
  int v94; // [esp+4Ch] [ebp-24h]
  int v95; // [esp+50h] [ebp-20h] BYREF
  int v96; // [esp+54h] [ebp-1Ch]
  int v97; // [esp+58h] [ebp-18h]
  int v98; // [esp+5Ch] [ebp-14h]
  int v99[4]; // [esp+60h] [ebp-10h] BYREF

  v2 = 0;
  v84 = 0;
  v3 = *(_DWORD *)(_gptiCurrent + 232);
  v92 = v3;
  CheckCurrentInjectionConfiguration(v68, v72);
  if ( *(_DWORD *)(_gptiCurrent + 248) != _grpdeskRitInput )
  {
    v4 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 19, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
    return 0;
  }
  if ( !CheckGrantedAccess(*(_DWORD *)(_gptiCurrent + 496), 0x20u) )
  {
    v5 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 20, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
    return 0;
  }
  if ( _gptiBlockInput && _gptiBlockInput != _gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 21, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
    return 1;
  }
  if ( !IsGpqForegroundAccessibleCurrent((void *)1) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 22, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
    return 1;
  }
  v6 = *(_DWORD *)(v3 + 508);
  if ( !v6 )
  {
    v7 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 23, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
    return 0;
  }
  InputTraceLogging::RIM::InjectInput(*(_DWORD *)(v6 + 16), *(_DWORD *)(v3 + 508));
  _gppiInputProvider = v3;
  v8 = *(_DWORD *)(v3 + 508);
  v9 = *(struct tagINJECTED_CONTACT **)(v8 + 24);
  v88 = v9;
  if ( a1 > (unsigned int)v9 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v66 = (char)v9;
    LOBYTE(v63) = a1;
    v61 = 24;
LABEL_120:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_dd(v11, v10, v11, v61, (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v63, v66);
    return 0;
  }
  v78 = *(_DWORD *)(a2 + 56);
  v90 = *(_DWORD *)(v8 + 36);
  v77 = *(_QWORD *)(a2 + 72);
  v91 = *(_QWORD *)(v8 + 64);
  v12 = v92;
  if ( !SortTouchContacts(a2, a1) )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 25, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
    return 0;
  }
  v13 = 0;
  v81 = 0;
  if ( !a1 )
  {
LABEL_57:
    v17 = *(_DWORD *)(v92 + 508);
    v18 = *(_DWORD *)(v17 + 16);
    v80 = (_DWORD *)v18;
    if ( !*(_DWORD *)(*(_DWORD *)(v18 + 284) + 848) )
    {
      *(_DWORD *)(v17 + 28) = 0;
      *(_DWORD *)(*(_DWORD *)(v12 + 508) + 32) = 0;
      *(_DWORD *)(*(_DWORD *)(v12 + 508) + 36) = 0;
      *(_DWORD *)(*(_DWORD *)(v12 + 508) + 44) = 0;
      v19 = *(_DWORD *)(v12 + 508);
      *(_DWORD *)(v19 + 56) = 0;
      *(_DWORD *)(v19 + 60) = 0;
      v20 = *(_DWORD *)(v12 + 508);
      *(_DWORD *)(v20 + 64) = 0;
      *(_DWORD *)(v20 + 68) = 0;
      *(_DWORD *)(*(_DWORD *)(v12 + 508) + 72) = 0;
      v17 = *(_DWORD *)(v12 + 508);
    }
    v82 = *(_DWORD *)(v17 + 76);
    if ( v78 && v77
      || *(_DWORD *)(v17 + 28) && v77
      || (v86 = *(_DWORD *)(v17 + 56), v21 = *(_QWORD *)(v17 + 56) == 0LL, v93 = *(_DWORD *)(v17 + 60), !v21) && v78 )
    {
      xxxSendLastFrameTouchUp(v18, v82, v9, *(struct DEVICEINFO **)(v17 + 32), v69, v73);
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_didi(
          v58,
          v59,
          v60,
          v78,
          v77,
          SHIDWORD(v77),
          *(_DWORD *)(*(_DWORD *)(v12 + 508) + 28),
          *(_DWORD *)(*(_DWORD *)(v12 + 508) + 56),
          *(_DWORD *)(*(_DWORD *)(v12 + 508) + 60));
      return 0;
    }
    if ( v77 || (v21 = (v93 | v86) == 0, v87 = 1, !v21) )
      v87 = 0;
    v26 = *(_DWORD *)(v18 + 284);
    if ( !*(_DWORD *)(v26 + 848) && v9 )
    {
      v27 = v9;
      v28 = (void **)(v82 + 8);
      do
      {
        if ( *v28 != (char *)&loc_3FFFD + 3 && *v28 != &loc_20000 )
        {
          *v28 = &loc_3FFFD + 3;
          v84 = 1;
        }
        v28 += 3;
        v27 = (struct tagINJECTED_CONTACT *)((char *)v27 - 1);
      }
      while ( v27 );
      v26 = v80[71];
    }
    v29 = *(_DWORD *)(v26 + 848);
    v30 = *(_DWORD *)(v12 + 508);
    v93 = v29;
    v94 = v30;
    if ( v87 )
    {
      if ( !_ValidateInjectionTime(v90, v78, *(_DWORD *)(v26 + 700), v93 == 0, *(_DWORD *)(v30 + 44), v69, v73) )
      {
        xxxSendLastFrameTouchUp(
          (int)v80,
          v82,
          v9,
          *(struct DEVICEINFO **)(*(_DWORD *)(v12 + 508) + 32),
          (unsigned int)v70,
          v74);
        UserSetLastError((struct _NT_TIB *)0x57);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v66 = v90;
        LOBYTE(v63) = v78;
        v61 = 44;
        goto LABEL_120;
      }
    }
    else if ( !_ValidateInjectionQpcCount(*(_DWORD *)(v94 + 72), v29 == 0, v77, v91, *(_QWORD *)(v26 + 704), v69, v73) )
    {
      HIDWORD(v64) = _gliQpcFreq[1];
      LODWORD(v64) = _gliQpcFreq[0];
      xxxSendLastFrameTouchUp(
        (int)v80,
        v82,
        v9,
        (struct DEVICEINFO *)(10000LL * *(_QWORD *)(*(_DWORD *)(v12 + 508) + 56) / v64),
        (unsigned int)v70,
        v74);
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v31) = 2;
        WPP_RECORDER_SF_ii(
          v32,
          v31,
          0x14u,
          45,
          (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
          v77,
          SHIDWORD(v77),
          v91,
          SHIDWORD(v91));
      }
      return 0;
    }
    ScreenRect = GetScreenRect(v99);
    v95 = *ScreenRect;
    v96 = ScreenRect[1];
    v97 = ScreenRect[2];
    v98 = ScreenRect[3];
    v34 = ValidateInjectedTouchFrame(a2, a1, v82, (struct tagPOINTER_TOUCH_INFO *)&v95, v9, v70, v74);
    v35 = *(_DWORD *)(v92 + 508);
    v94 = v35;
    if ( !v34 )
    {
      xxxSendLastFrameTouchUp((int)v80, v82, v88, *(struct DEVICEINFO **)(v35 + 32), (unsigned int)v71, v75);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 2;
        WPP_RECORDER_SF_q(v37, v36, 0x14u, 46, (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v84);
      }
      v22 = v84 != 0 ? 1460 : 87;
      goto LABEL_70;
    }
    if ( v87 )
    {
      v38 = 10 * (v78 - *(_DWORD *)(v35 + 28));
      v83 = v38;
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      if ( *(_DWORD *)(v80[71] + 848) )
      {
        if ( !v38 )
        {
          v40 = *(_DWORD *)(v35 + 40);
          v41 = QpcBasedTouchStackTime - *(_DWORD *)(v35 + 32);
          v83 = v41;
          if ( v41 <= v40 )
          {
            if ( v40 - v41 >= 5 )
            {
              UserSetLastError((struct _NT_TIB *)0x15);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(20, 47, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
              return 0;
            }
            v83 = v40 + 1;
          }
        }
        goto LABEL_135;
      }
      *(_DWORD *)(v35 + 28) = v78;
      *(_DWORD *)(v35 + 32) = QpcBasedTouchStackTime;
    }
    else
    {
      HIDWORD(v65) = _gliQpcFreq[1];
      LODWORD(v65) = _gliQpcFreq[0];
      v83 = 10000 * (v77 - *(_QWORD *)(v35 + 56)) / v65;
      if ( *(_DWORD *)(v80[71] + 848) )
      {
        if ( (unsigned int)(10000 * (v77 - *(_QWORD *)(v35 + 56)) / v65) == *(_DWORD *)(v35 + 40) )
        {
          UserSetLastError((struct _NT_TIB *)0x15);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(20, 48, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
          return 0;
        }
        goto LABEL_135;
      }
      *(_QWORD *)(v35 + 56) = v77;
    }
    v83 = 0;
LABEL_135:
    v42 = v88;
    if ( v88 )
    {
      v43 = 0;
      do
      {
        v43 += 12;
        *(_DWORD *)(v43 + *(_DWORD *)(v35 + 76) - 4) = 0x40000;
        v42 = (struct tagINJECTED_CONTACT *)((char *)v42 - 1);
      }
      while ( v42 );
    }
    if ( a1 )
    {
      v2 = a1;
      v44 = (int *)(a2 + 12);
      do
      {
        v45 = 12 * *(v44 - 2);
        v46 = *v44;
        v44 += 34;
        *(_DWORD *)(v45 + *(_DWORD *)(v35 + 76) + 8) = v46 & 0xFFFF7FFF;
        v47 = *(_DWORD *)(v35 + 76);
        *(_DWORD *)(v45 + v47) = *(v44 - 31);
        *(_DWORD *)(v45 + v47 + 4) = *(v44 - 30);
        --v2;
      }
      while ( v2 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 && a1 )
    {
      v48 = (_DWORD *)(a2 + 108);
      v89 = (struct tagINJECTED_CONTACT *)a1;
      v85 = (INT *)(a2 + 108);
      do
      {
        v92 = v2;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        LogicalToPhysicalDPIPoint(v48 - 21, v48 - 21, CurrentThreadDpiAwarenessContext, &v92);
        DpiForSystem = GetDpiForSystem();
        v51 = *(unsigned __int16 *)(*(_DWORD *)(v92 + 20) + 52);
        *(v85 - 1) = EngMulDiv(*(v85 - 1) - *(v85 - 3), v51, DpiForSystem);
        *v85 = EngMulDiv(*v85 - *(v85 - 2), v51, DpiForSystem);
        *(v85 - 2) = v2;
        *(v85 - 3) = v2;
        v48 = v85 + 34;
        v21 = v89 == (struct tagINJECTED_CONTACT *)1;
        v89 = (struct tagINJECTED_CONTACT *)((char *)v89 - 1);
        v85 += 34;
      }
      while ( !v21 );
    }
    v52 = (int *)(v80[71] + 148);
    v95 = *v52++;
    v96 = *v52++;
    v97 = *v52;
    v98 = v52[1];
    if ( a1 )
    {
      v53 = a1;
      v54 = v96;
      v55 = (_DWORD *)(a2 + 28);
      v56 = v95;
      do
      {
        *(v55 - 1) -= v56;
        *v55 -= v54;
        v55 += 34;
        --v53;
      }
      while ( v53 );
    }
    v57 = v94;
    *(_DWORD *)(v94 + 40) = v83;
    if ( v87 )
    {
      if ( v90 && !v78 )
        v2 = 1;
      *(_DWORD *)(v57 + 44) = v2;
      *(_DWORD *)(v57 + 36) = v78;
    }
    else
    {
      if ( v91 && !v77 )
        v2 = 1;
      *(_DWORD *)(v57 + 72) = v2;
      *(_QWORD *)(v57 + 64) = v77;
    }
    xxxSendToTouchStack(a1, v80, (struct DEVICEINFO *)a2, v83, v71, v75);
    return 1;
  }
  v14 = (_DWORD *)(a2 + 12);
  while ( 1 )
  {
    if ( *(v14 - 2) >= (unsigned int)v9 )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v11 = a2;
      v66 = (char)v9;
      v63 = *(_DWORD *)(136 * v81 + a2 + 4);
      v61 = 26;
      goto LABEL_120;
    }
    if ( *(v14 - 3) != 2 )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v25 = a2;
      v67 = *(_DWORD *)(136 * v81 + a2);
      v62 = 27;
LABEL_76:
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_q(v25, v24, 0x14u, v62, (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v67);
      return 0;
    }
    v15 = (char *)(*v14 & 0xFFFF7FFF);
    if ( v15 != (_BYTE *)&loc_20000 + 2
      && v15 != (char *)&loc_20006
      && v15 != (char *)65542
      && v15 != (_BYTE *)&loc_40001 + 1
      && v15 != (char *)&loc_20000
      && v15 != (_BYTE *)&loc_3FFFD + 3 )
    {
      break;
    }
    v16 = v14[20];
    if ( (v16 & 2) != 0 && v14[29] >= 0x168u )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v25 = a2;
      v67 = *(_DWORD *)(136 * v81 + a2 + 128);
      v62 = 29;
      goto LABEL_76;
    }
    if ( (v16 & 4) != 0 && v14[30] > 0xFDE8u )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v25 = a2;
      v67 = *(_DWORD *)(136 * v81 + a2 + 132);
      v62 = 30;
      goto LABEL_76;
    }
    if ( v14[19] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 31, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[26] || v14[28] || v14[25] || v14[27] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 32, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( *(v14 - 1) )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 33, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[1] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 34, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[2] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 35, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[5] || v14[6] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 36, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[7] || v14[8] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 37, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[9] || v14[10] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 38, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[12] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 39, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[13] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 40, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[14] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 41, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    if ( v14[17] )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(20, 42, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 0;
    }
    ++v13;
    v14 += 34;
    v81 = v13;
    if ( v13 >= a1 )
      goto LABEL_57;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_D((int)v15, v13, 0x14u, 28, (int)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, *v14);
  }
  v22 = 87;
LABEL_70:
  UserSetLastError((struct _NT_TIB *)v22);
  return 0;
}
