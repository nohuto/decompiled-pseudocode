/*
 * XREFs of xxxInjectTouchInput @ 0x1C01DD30C
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C01FE850 (NtUserInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032D80 (WPP_RECORDER_SF_d.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C003AEFC (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckGrantedAccess @ 0x1C003B114 (CheckGrantedAccess.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003DDA4 (WPP_RECORDER_SF_dd.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00EB62C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     GetScreenRect @ 0x1C0118904 (GetScreenRect.c)
 *     WPP_RECORDER_SF_D @ 0x1C01DA100 (WPP_RECORDER_SF_D.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DBA24 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C01DBDC0 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DC15C (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DC418 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01DC70C (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01DC798 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01DC808 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DC87C (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DC9E4 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     WPP_RECORDER_SF_didi @ 0x1C01DCE44 (WPP_RECORDER_SF_didi.c)
 *     WPP_RECORDER_SF_ii @ 0x1C01DCF64 (WPP_RECORDER_SF_ii.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  int v2; // esi
  struct tagPOINTER_TOUCH_INFO *v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbp
  ULONG v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx
  int v11; // r9d
  int v12; // edx
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  int v17; // r9d
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  ULONG v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int16 v31; // r9
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // edi
  char *v36; // rax
  unsigned int v37; // ecx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // r13
  struct tagINJECTED_CONTACT *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  int v50; // edx
  int v51; // r9d
  int v52; // ecx
  int v53; // eax
  int v54; // r9d
  __int64 v55; // r8
  _DWORD *v56; // rcx
  __int64 v57; // rdx
  int v58; // eax
  bool v59; // zf
  __int64 v60; // rcx
  int v61; // r9d
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // r8
  __int64 v69; // rbp
  int v70; // ecx
  bool v71; // cf
  ULONG v72; // r14d
  int QpcBasedTouchStackTime; // eax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rdx
  unsigned int *v78; // r9
  __int64 v79; // r10
  __int64 v80; // r8
  unsigned int v81; // edx
  __int64 v82; // rcx
  INT *v83; // r13
  char *v84; // rbp
  __int64 v85; // r15
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v87; // rcx
  INT DpiForSystem; // edi
  INT v89; // ebx
  INT v90; // eax
  INT v91; // ecx
  INT v92; // eax
  int v93; // edx
  _DWORD *v94; // rax
  int v95; // r8d
  __int64 v96; // rcx
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rdx
  int v99; // [rsp+20h] [rbp-A8h]
  unsigned int v100; // [rsp+28h] [rbp-A0h]
  unsigned int v101; // [rsp+30h] [rbp-98h]
  int v102; // [rsp+50h] [rbp-78h]
  unsigned int v103; // [rsp+54h] [rbp-74h]
  unsigned __int64 v104; // [rsp+58h] [rbp-70h]
  __int64 v105; // [rsp+60h] [rbp-68h]
  struct tagRECT v106; // [rsp+68h] [rbp-60h] BYREF
  __int128 v107; // [rsp+78h] [rbp-50h]
  unsigned int v109; // [rsp+E0h] [rbp+18h]
  __int64 v110; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = a1;
  LODWORD(v110) = 0;
  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
  {
    v6 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v6, v7, v8);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 19;
LABEL_160:
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(v10, v9, 20, v11, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 880LL), 0x20u) )
  {
    v13 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v13, v14, v15);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 20;
    goto LABEL_160;
  }
  v16 = gptiBlockInput;
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 21;
LABEL_14:
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(v16, v12, 20, v17, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 22;
      goto LABEL_14;
    }
    return 1LL;
  }
  v21 = *(_QWORD *)(v5 + 896);
  if ( !v21 )
  {
    v22 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v22, v23, v24);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 23;
    goto LABEL_160;
  }
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v21 + 16), v18, v19, v20);
  gppiInputProvider = v5;
  v27 = *(_QWORD *)(v5 + 896);
  v28 = *(unsigned int *)(v27 + 28);
  if ( (unsigned int)v4 > (unsigned int)v28 )
  {
    UserSetLastError(87LL, v25, v26);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v101 = v28;
    v31 = 24;
    v100 = v4;
LABEL_118:
    WPP_RECORDER_SF_dd(v29, 2u, v30, v31, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v100, v101);
    return 0LL;
  }
  v32 = *((_QWORD *)v3 + 10);
  v103 = *(_DWORD *)(v27 + 40);
  v104 = *(_QWORD *)(v27 + 64);
  v109 = *((_DWORD *)v3 + 16);
  v105 = v32;
  if ( !(unsigned int)SortTouchContacts(v3, v4) )
  {
    UserSetLastError(87LL, v33, v34);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 25;
    goto LABEL_160;
  }
  v35 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_56:
    v39 = *(_QWORD *)(v5 + 896);
    v40 = *(_QWORD *)(v39 + 16);
    *(_QWORD *)&v107 = v40;
    if ( !*(_DWORD *)(*(_QWORD *)(v40 + 480) + 952LL) )
    {
      *(_DWORD *)(v39 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v5 + 896) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 896) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 72LL) = 0;
      v39 = *(_QWORD *)(v5 + 896);
    }
    v41 = *(struct tagINJECTED_CONTACT **)(v39 + 80);
    if ( v109 && v32 || *(_DWORD *)(v39 + 32) && v32 || (v42 = *(_QWORD *)(v39 + 56)) != 0 && v109 )
    {
      xxxSendLastFrameTouchUp(
        *(struct tagINJECTED_CONTACT **)(v39 + 80),
        (struct DEVICEINFO *)v40,
        (unsigned int)v28,
        *(_DWORD *)(v39 + 36));
      UserSetLastError(87LL, v43, v44);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_didi(*(_QWORD *)(v5 + 896), v45, v46, v47, v99);
      return 0LL;
    }
    if ( v32 || (v54 = 1, v42) )
      v54 = 0;
    v55 = *(_QWORD *)(v40 + 480);
    v102 = v54;
    if ( !*(_DWORD *)(v55 + 952) && (_DWORD)v28 )
    {
      v56 = (_DWORD *)((char *)v41 + 8);
      v57 = v28;
      do
      {
        if ( ((*v56 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v56 = 0x40000;
          LODWORD(v110) = 1;
        }
        v56 += 3;
        --v57;
      }
      while ( v57 );
      v55 = *(_QWORD *)(v40 + 480);
    }
    v58 = *(_DWORD *)(v55 + 952);
    v59 = v54 == 0;
    v60 = *(_QWORD *)(v5 + 896);
    v61 = 0;
    if ( v59 )
    {
      LOBYTE(v61) = v58 == 0;
      if ( !_ValidateInjectionQpcCount(v32, v104, *(_QWORD *)(v55 + 752), v61, *(_DWORD *)(v60 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v41,
          (struct DEVICEINFO *)v40,
          (unsigned int)v28,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 896) + 56LL)) / gliQpcFreq);
        UserSetLastError(87LL, v64, v65);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ii(
            v66,
            2u,
            0x14u,
            0x2Du,
            (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
            v32,
            v104);
        return 0LL;
      }
    }
    else
    {
      LOBYTE(v61) = v58 == 0;
      if ( !_ValidateInjectionTime(v109, v103, *(_DWORD *)(v55 + 744), v61, *(_DWORD *)(v60 + 48)) )
      {
        xxxSendLastFrameTouchUp(
          v41,
          (struct DEVICEINFO *)v40,
          (unsigned int)v28,
          *(_DWORD *)(*(_QWORD *)(v5 + 896) + 36LL));
        UserSetLastError(87LL, v62, v63);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v31 = 44;
        v101 = v103;
        v100 = v109;
        goto LABEL_118;
      }
    }
    v106 = (struct tagRECT)*GetScreenRect((__m128i *)&v106);
    v67 = ValidateInjectedTouchFrame(v4, v3, v41, &v106, v28);
    v69 = *(_QWORD *)(v5 + 896);
    *(_QWORD *)&v106.left = v69;
    if ( !v67 )
    {
      xxxSendLastFrameTouchUp(v41, (struct DEVICEINFO *)v40, (unsigned int)v28, *(_DWORD *)(v69 + 36));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 2;
        WPP_RECORDER_SF_d(v70, v33, 20, 46, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v110);
      }
      v71 = (_DWORD)v110 != 0;
      LODWORD(v110) = -(int)v110;
      v48 = v71 ? 1460 : 87;
      goto LABEL_69;
    }
    if ( v102 )
    {
      v72 = 10 * (v109 - *(_DWORD *)(v69 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v76 = *(_QWORD *)(v40 + 480);
      if ( *(_DWORD *)(v76 + 952) )
      {
        if ( !v72 )
        {
          v76 = *(unsigned int *)(v69 + 44);
          v72 = QpcBasedTouchStackTime - *(_DWORD *)(v69 + 36);
          if ( v72 <= (unsigned int)v76 )
          {
            if ( (unsigned int)v76 - v72 >= 5 )
            {
              UserSetLastError(21LL, v74, v75);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return 0LL;
              v11 = 47;
              goto LABEL_160;
            }
            v72 = v76 + 1;
          }
        }
        goto LABEL_133;
      }
      *(_DWORD *)(v69 + 32) = v109;
      *(_DWORD *)(v69 + 36) = QpcBasedTouchStackTime;
    }
    else
    {
      v97 = (unsigned __int64)(10000 * (v32 - *(_QWORD *)(v69 + 56))) / gliQpcFreq;
      v98 = (unsigned __int64)(10000 * (v32 - *(_QWORD *)(v69 + 56))) % gliQpcFreq;
      v76 = *(_QWORD *)(v40 + 480);
      v72 = v97;
      if ( *(_DWORD *)(v76 + 952) )
      {
        if ( (_DWORD)v97 == *(_DWORD *)(v69 + 44) )
        {
          UserSetLastError(21LL, v98, v68);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v11 = 48;
          goto LABEL_160;
        }
        goto LABEL_133;
      }
      *(_QWORD *)(v69 + 56) = v105;
    }
    v72 = 0;
LABEL_133:
    if ( (_DWORD)v28 )
    {
      v76 = 0LL;
      v77 = v28;
      do
      {
        v76 += 12LL;
        *(_DWORD *)(v76 + *(_QWORD *)(v69 + 80) - 4) = 0x40000;
        --v77;
      }
      while ( v77 );
    }
    if ( (_DWORD)v4 )
    {
      v78 = (unsigned int *)((char *)v3 + 4);
      v79 = v4;
      do
      {
        v80 = *v78;
        v81 = v78[2];
        v78 += 36;
        *(_DWORD *)(*(_QWORD *)(v69 + 80) + 12 * v80 + 8) = v81 & 0xFFFF7FFF;
        v76 = *(_QWORD *)(v69 + 80);
        *(_QWORD *)(v76 + 12 * v80) = *(_QWORD *)(v78 - 29);
        --v79;
      }
      while ( v79 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v76) & 0xF) != 2 && (_DWORD)v4 )
    {
      v83 = (INT *)((char *)v3 + 116);
      v84 = (char *)v3 + 32;
      v85 = v4;
      do
      {
        v110 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v82);
        LogicalToPhysicalDPIPoint(v84, v84, CurrentThreadDpiAwarenessContext, &v110);
        DpiForSystem = GetDpiForSystem(v87);
        v89 = *(unsigned __int16 *)(*(_QWORD *)(v110 + 40) + 64LL);
        v90 = EngMulDiv(*(v83 - 1) - *(v83 - 3), v89, DpiForSystem);
        v91 = *v83 - *(v83 - 2);
        *(v83 - 1) = v90;
        v92 = EngMulDiv(v91, v89, DpiForSystem);
        v84 += 144;
        *(_QWORD *)(v83 - 3) = 0LL;
        *v83 = v92;
        v83 += 36;
        --v85;
      }
      while ( v85 );
      v69 = *(_QWORD *)&v106.left;
      v3 = a2;
      v40 = v107;
    }
    v107 = *(_OWORD *)(*(_QWORD *)(v40 + 480) + 160LL);
    if ( (_DWORD)v4 )
    {
      v93 = DWORD1(v107);
      v94 = (_DWORD *)((char *)v3 + 36);
      v95 = v107;
      v96 = v4;
      do
      {
        *(v94 - 1) -= v95;
        *v94 -= v93;
        v94 += 36;
        --v96;
      }
      while ( v96 );
    }
    *(_DWORD *)(v69 + 44) = v72;
    if ( v102 )
    {
      if ( v103 && !v109 )
        v2 = 1;
      *(_DWORD *)(v69 + 48) = v2;
      *(_DWORD *)(v69 + 40) = v109;
    }
    else
    {
      if ( v104 && !v105 )
        v2 = 1;
      *(_DWORD *)(v69 + 72) = v2;
      *(_QWORD *)(v69 + 64) = v105;
    }
    xxxSendToTouchStack((struct DEVICEINFO *)v40, v4, v3, v72);
    return 1LL;
  }
  v36 = (char *)v3 + 12;
  while ( 1 )
  {
    if ( *((_DWORD *)v36 - 2) >= (unsigned int)v28 )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v31 = 26;
      v101 = v28;
      v29 = 18LL * v35;
      v100 = *((_DWORD *)v3 + 36 * v35 + 1);
      goto LABEL_118;
    }
    if ( *((_DWORD *)v36 - 3) != 2 )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v51 = 27;
      v52 = 18 * v35;
      v53 = *((_DWORD *)v3 + 36 * v35);
LABEL_75:
      LOBYTE(v50) = 2;
      WPP_RECORDER_SF_d(v52, v50, 20, v51, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v53);
      return 0LL;
    }
    v37 = *(_DWORD *)v36 & 0xFFFF7FFF;
    if ( v37 != 0x40000 )
    {
      v33 = v37 - 0x20000;
      if ( (unsigned int)v33 > 6 || (v34 = 69LL, !_bittest((const int *)&v34, v33)) )
      {
        if ( v37 != 65542 && v37 != 262146 )
          break;
      }
    }
    v38 = *((_DWORD *)v36 + 22);
    if ( (v38 & 2) != 0 && *((_DWORD *)v36 + 31) >= 0x168u )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v51 = 29;
      v52 = 18 * v35;
      v53 = *((_DWORD *)v3 + 36 * v35 + 34);
      goto LABEL_75;
    }
    if ( (v38 & 4) != 0 && *((_DWORD *)v36 + 32) > 0xFDE8u )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v51 = 30;
      v52 = 18 * v35;
      v53 = *((_DWORD *)v3 + 36 * v35 + 35);
      goto LABEL_75;
    }
    if ( *((_DWORD *)v36 + 21) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 31;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 + 28) || *((_DWORD *)v36 + 30) || *((_DWORD *)v36 + 27) || *((_DWORD *)v36 + 29) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 32;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 - 1) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 33;
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v36 + 4) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 34;
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v36 + 12) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 35;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 + 7) || *((_DWORD *)v36 + 8) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 36;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 + 9) || *((_DWORD *)v36 + 10) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 37;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 + 11) || *((_DWORD *)v36 + 12) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 38;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 + 14) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 39;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 + 15) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 40;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 + 16) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 41;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v36 + 19) )
    {
      UserSetLastError(87LL, v33, v34);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 42;
      goto LABEL_160;
    }
    ++v35;
    v36 += 144;
    if ( v35 >= (unsigned int)v4 )
      goto LABEL_56;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v33) = 2;
    WPP_RECORDER_SF_D(
      18 * v35,
      v33,
      20,
      28,
      (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
      *((_DWORD *)v3 + 36 * v35 + 3));
  }
  v48 = 87LL;
LABEL_69:
  UserSetLastError(v48, v33, v34);
  return 0LL;
}
