/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x1C00120A0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0007380 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0011CC0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0033A48 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003F064 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rbp
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r14
  int v10; // edx
  int Ulong; // eax
  __int64 v12; // rdx
  unsigned int v13; // r11d
  unsigned int v14; // r8d
  int v15; // ebx
  unsigned int v16; // r12d
  __int64 v17; // r13
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // edx
  int v29; // ebx
  unsigned int v30; // ebx
  int v31; // r8d
  int v32; // r9d
  char v33; // al
  int v34; // edx
  int v35; // r9d
  __int64 v36; // r8
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // edx
  int v46; // ebx
  unsigned int v47; // ebx
  int v48; // r8d
  int v49; // r9d
  char v50; // al
  int v51; // edx
  int v52; // r9d
  int v53; // edx
  int v54; // ebx
  unsigned int v55; // ebx
  int v56; // r8d
  int v57; // r9d
  int v58; // edx
  int v59; // ebx
  unsigned int v60; // ebx
  int v61; // r8d
  int v62; // r9d
  int v63; // eax
  int v64; // eax
  int v65; // ebx
  _UNKNOWN **v66; // rdx
  unsigned int v67; // ebx
  int v68; // r8d
  int v69; // r9d
  char v70; // al
  int v71; // edx
  __int64 v72; // rdx
  unsigned __int16 v73; // ax
  int v74; // r9d
  int v75; // edx
  int v76; // r8d
  int v77; // edx
  int v78; // ebx
  unsigned int v79; // ebx
  int v80; // r8d
  int v81; // r9d
  int v82; // edx
  int v83; // ebx
  unsigned int v84; // ebx
  int v85; // r8d
  int v86; // r9d
  int v87; // edx
  int v88; // ebx
  unsigned int v89; // ebx
  int v90; // r8d
  int v91; // r9d
  int v92; // edx
  int v93; // ebx
  unsigned int v94; // ebx
  int v95; // r8d
  int v96; // r9d
  int v97; // eax
  int v98; // ebx
  _UNKNOWN **v99; // rdx
  __int64 v100; // r10
  unsigned int v101; // ebx
  int v102; // r9d
  __int64 v103; // rcx
  int v104; // r8d
  int v105; // r9d
  int v106; // eax
  int v107; // edx
  int v108; // ebx
  unsigned int v109; // ebx
  int v110; // edx
  int v111; // ebx
  unsigned int v112; // ebx
  int v113; // r8d
  int v114; // r9d
  int v115; // edx
  int v116; // ebx
  unsigned int v117; // ebx
  int v118; // r8d
  int v119; // r9d
  int v120; // edx
  int v121; // ebx
  unsigned int v122; // ebx
  int v123; // r8d
  int v124; // r9d
  int v125; // edx
  int v126; // ebx
  unsigned int v127; // ebx
  int v128; // r8d
  int v129; // r9d
  int v130; // edx
  int v131; // ebx
  unsigned int v132; // ebx
  int v133; // r8d
  int v134; // r9d
  int v135; // edx
  int v136; // ebx
  unsigned int v137; // ebx
  int v138; // r8d
  int v139; // r9d
  unsigned int v140; // [rsp+70h] [rbp-88h]
  unsigned int v141; // [rsp+74h] [rbp-84h]
  __int64 v142; // [rsp+78h] [rbp-80h]
  __int64 v143; // [rsp+80h] [rbp-78h]
  _OWORD v145[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v146; // [rsp+B0h] [rbp-48h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(v7 + 88);
  if ( *(_BYTE *)(v7 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v146 = 0LL;
  memset(v145, 0, sizeof(v145));
  LOWORD(v145[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v145);
  v9 = *((_QWORD *)&v145[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v10,
        11,
        38,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    }
    goto LABEL_84;
  }
  Ulong = XilRegister_ReadUlong(v8, *(_QWORD *)(v4 + 32) + 4LL);
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v12,
        11,
        39,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    }
    LOBYTE(v12) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v4 + 8), v12);
LABEL_84:
    *(_DWORD *)(v9 + 4) = -1073713152;
    v36 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v36);
  }
  if ( (Ulong & 1) == 0 )
  {
    v13 = *(unsigned __int8 *)(v9 + 132);
    v14 = *(unsigned __int8 *)(v9 + 133);
    v15 = *(unsigned __int16 *)(v9 + 130);
    v141 = v13;
    v140 = v14;
    if ( *(_WORD *)(v9 + 128) != 291 || !*(_BYTE *)(v9 + 132) || v13 > *(_DWORD *)(v4 + 16) || *(_WORD *)(v9 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v75 = *(unsigned __int8 *)(v9 + 134);
        v74 = 41;
        v76 = *(unsigned __int8 *)(v9 + 131);
        goto LABEL_191;
      }
      goto LABEL_192;
    }
    v16 = v13 - 1;
    v18 = v13 - 1;
    v17 = *(_QWORD *)(v4 + 40) + 16LL * (v13 - 1);
    v142 = 112LL * (v13 - 1);
    LOBYTE(v18) = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v142 + 13);
    v19 = v17 + 4;
    v143 = v17 + 4;
    if ( (_BYTE)v18 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v18,
          11,
          42,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v13,
          v15,
          v14);
        v13 = v141;
        v14 = v140;
      }
      if ( v15 != 22 && v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v74 = 43;
LABEL_92:
          v75 = *(unsigned __int8 *)(v9 + 134);
          v76 = *(unsigned __int8 *)(v9 + 133);
LABEL_191:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v75, v76, v74);
        }
LABEL_192:
        v36 = 3221225473LL;
        goto LABEL_193;
      }
      v20 = v15 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          v63 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v4, v13, 0);
          v36 = (unsigned int)v63;
          if ( v63 >= 0 )
          {
            RootHub_AcquireReadModifyWriteLock(v4, v16);
            v64 = XilRegister_ReadUlong(v8, v17);
            v65 = v64;
            v66 = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v66) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                (_DWORD)v66,
                11,
                49,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v64);
              v66 = &WPP_RECORDER_INITIALIZED;
            }
            if ( ((v65 & 2) == 0 || (v65 & 0x1E0) != 0x60 && (v65 & 0x1E0) != 0x1E0)
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v66) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                (_DWORD)v66,
                11,
                50,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
            }
            v67 = v65 & 0xE00C200 | 0x101E0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v66) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                (_DWORD)v66,
                11,
                51,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v67);
            }
            XilRegister_WriteUlong(v8, v17, v67);
            RootHub_ReleaseReadModifyWriteLock(v4, v16, v68, v69);
            v70 = XilRegister_ReadUlong(v8, v17);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v71) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v71,
                11,
                52,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v70);
            }
            v72 = *(_QWORD *)(v4 + 48);
            if ( *(int *)(v72 + v142 + 48) > 0 )
              v73 = *(_WORD *)(v72 + v142 + 52);
            else
              v73 = 50;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
              WdfDriverGlobals,
              *(_QWORD *)(v72 + v142 + 40),
              -10000LL * v73);
            goto LABEL_29;
          }
LABEL_193:
          *(_DWORD *)(v9 + 4) = -1073741820;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v36);
        }
        v22 = v21 - 6;
        if ( v22 )
        {
          v23 = v22 - 8;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  v27 = v26 - 1;
                  if ( !v27 )
                  {
                    RootHub_AcquireReadModifyWriteLock(v4, v16);
                    v29 = XilRegister_ReadUlong(v8, v17);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v28) = 4;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                        v28,
                        11,
                        63,
                        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                        v29);
                    }
                    v30 = v29 & 0xE00C200 | 0x200000;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v28) = 4;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                        v28,
                        11,
                        64,
                        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                        v30);
                    }
                    XilRegister_WriteUlong(v8, v17, v30);
                    RootHub_ReleaseReadModifyWriteLock(v4, v16, v31, v32);
                    v33 = XilRegister_ReadUlong(v8, v17);
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_29;
                    v35 = 65;
                    goto LABEL_28;
                  }
                  if ( v27 != 2 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v74 = 75;
                      goto LABEL_92;
                    }
                    goto LABEL_192;
                  }
                  if ( v14 > 3 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v74 = 56;
                      goto LABEL_92;
                    }
                    goto LABEL_192;
                  }
                  RootHub_AcquireReadModifyWriteLock(v4, v16);
                  v78 = XilRegister_ReadUlong(v8, v17);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v77) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                      v77,
                      11,
                      57,
                      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                      v78);
                  }
                  v79 = v78 & 0xE000200;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v77) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                      v77,
                      11,
                      58,
                      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                      v79);
                  }
                  XilRegister_WriteUlong(v8, v17, v79);
                  RootHub_ReleaseReadModifyWriteLock(v4, v16, v80, v81);
                  v33 = XilRegister_ReadUlong(v8, v17);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_29;
                  v35 = 59;
                }
                else
                {
                  RootHub_AcquireReadModifyWriteLock(v4, v16);
                  v83 = XilRegister_ReadUlong(v8, v17);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v82) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                      v82,
                      11,
                      72,
                      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                      v83);
                  }
                  v84 = v83 & 0xE00C200 | 0x100000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v82) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                      v82,
                      11,
                      73,
                      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                      v84);
                  }
                  XilRegister_WriteUlong(v8, v17, v84);
                  RootHub_ReleaseReadModifyWriteLock(v4, v16, v85, v86);
                  v33 = XilRegister_ReadUlong(v8, v17);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_29;
                  v35 = 74;
                }
              }
              else
              {
                RootHub_AcquireReadModifyWriteLock(v4, v16);
                v59 = XilRegister_ReadUlong(v8, v17);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v58) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                    v58,
                    11,
                    69,
                    (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                    v59);
                }
                v60 = v59 & 0xE00C200 | 0x400000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v58) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                    v58,
                    11,
                    70,
                    (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                    v60);
                }
                XilRegister_WriteUlong(v8, v17, v60);
                RootHub_ReleaseReadModifyWriteLock(v4, v16, v61, v62);
                v33 = XilRegister_ReadUlong(v8, v17);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_29;
                v35 = 71;
              }
            }
            else
            {
              RootHub_AcquireReadModifyWriteLock(v4, v16);
              v88 = XilRegister_ReadUlong(v8, v17);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v87) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                  v87,
                  11,
                  66,
                  (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                  v88);
              }
              v89 = v88 & 0xE00C200 | 0x40000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v87) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                  v87,
                  11,
                  67,
                  (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                  v89);
              }
              XilRegister_WriteUlong(v8, v17, v89);
              RootHub_ReleaseReadModifyWriteLock(v4, v16, v90, v91);
              v33 = XilRegister_ReadUlong(v8, v17);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_29;
              v35 = 68;
            }
          }
          else
          {
            RootHub_AcquireReadModifyWriteLock(v4, v16);
            v54 = XilRegister_ReadUlong(v8, v17);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v53) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v53,
                11,
                60,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v54);
            }
            v55 = v54 & 0xE00C200 | 0x20000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v53) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v53,
                11,
                61,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v55);
            }
            XilRegister_WriteUlong(v8, v17, v55);
            RootHub_ReleaseReadModifyWriteLock(v4, v16, v56, v57);
            v33 = XilRegister_ReadUlong(v8, v17);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_29;
            v35 = 62;
          }
        }
        else
        {
          RootHub_AcquireReadModifyWriteLock(v4, v16);
          v93 = XilRegister_ReadUlong(v8, v17);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v92) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v92,
              11,
              53,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v93);
          }
          v94 = v93 & 0xE00C000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v92) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v92,
              11,
              54,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v94);
          }
          XilRegister_WriteUlong(v8, v17, v94);
          RootHub_ReleaseReadModifyWriteLock(v4, v16, v95, v96);
          v33 = XilRegister_ReadUlong(v8, v17);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_29;
          v35 = 55;
        }
LABEL_28:
        LOBYTE(v34) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v34,
          11,
          v35,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v33);
LABEL_29:
        *(_DWORD *)(v9 + 4) = 0;
LABEL_30:
        v36 = 0LL;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v36);
      }
      RootHub_AcquireReadModifyWriteLock(v4, v16);
      v97 = XilRegister_ReadUlong(v8, v17);
      v98 = v97;
      v99 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v99) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          (_DWORD)v99,
          11,
          44,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v97);
        v99 = &WPP_RECORDER_INITIALIZED;
      }
      v100 = *(_QWORD *)(v4 + 8);
      if ( (*(_QWORD *)(v100 + 336) & 0x2000000LL) != 0 )
      {
        if ( ((v98 & 2) == 0 || (v98 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v99) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(v100 + 72),
            (_DWORD)v99,
            11,
            45,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
        }
        v101 = v98 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_138;
        v102 = 46;
        v103 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL);
      }
      else
      {
        v101 = v98 & 0xE00C200 | 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_138:
          XilRegister_WriteUlong(v8, v17, v101);
          RootHub_ReleaseReadModifyWriteLock(v4, v16, v104, v105);
          v33 = XilRegister_ReadUlong(v8, v17);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_29;
          v35 = 48;
          goto LABEL_28;
        }
        v103 = *(_QWORD *)(v100 + 72);
        v102 = 47;
      }
      LOBYTE(v99) = 4;
      WPP_RECORDER_SF_d(v103, (_DWORD)v99, 11, v102, (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids, v101);
      goto LABEL_138;
    }
    if ( (_BYTE)v18 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v74 = 103;
        v75 = *(unsigned __int8 *)(v9 + 134);
        v76 = *(unsigned __int8 *)(v9 + 131);
        goto LABEL_191;
      }
      goto LABEL_192;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v18,
        11,
        76,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v13,
        v15,
        v14);
      v14 = v140;
      v19 = v17 + 4;
    }
    if ( v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v74 = 77;
        goto LABEL_92;
      }
      goto LABEL_192;
    }
    v38 = v15 - 8;
    if ( v38 )
    {
      v39 = v38 - 8;
      if ( v39 )
      {
        v40 = v39 - 3;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            v42 = v41 - 5;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                v44 = v43 - 3;
                if ( v44 )
                {
                  if ( v44 != 1 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v74 = 102;
                      goto LABEL_92;
                    }
                    goto LABEL_192;
                  }
                  v106 = XilRegister_ReadUlong(v8, v19);
                  v108 = v106;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v107) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                      v107,
                      11,
                      99,
                      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                      v106);
                  }
                  v109 = v108 & 0xFFFEFFFF;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v107) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                      v107,
                      11,
                      100,
                      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                      v109);
                  }
                  XilRegister_WriteUlong(v8, v143, v109);
                  v50 = XilRegister_ReadUlong(v8, v143);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
LABEL_50:
                    *(_DWORD *)(v9 + 4) = 0;
                    goto LABEL_30;
                  }
                  v52 = 101;
                }
                else
                {
                  RootHub_AcquireReadModifyWriteLock(v4, v16);
                  v46 = XilRegister_ReadUlong(v8, v17);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v45) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                      v45,
                      11,
                      96,
                      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                      v46);
                  }
                  v47 = v46 & 0xE00C200 | 0x80000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v45) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                      v45,
                      11,
                      97,
                      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                      v47);
                  }
                  XilRegister_WriteUlong(v8, v17, v47);
                  RootHub_ReleaseReadModifyWriteLock(v4, v16, v48, v49);
                  v50 = XilRegister_ReadUlong(v8, v17);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_50;
                  v52 = 98;
                }
              }
              else
              {
                RootHub_AcquireReadModifyWriteLock(v4, v16);
                v111 = XilRegister_ReadUlong(v8, v17);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v110) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                    v110,
                    11,
                    93,
                    (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                    v111);
                }
                v112 = v111 & 0xE00C200 | 0x800000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v110) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                    v110,
                    11,
                    94,
                    (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                    v112);
                }
                XilRegister_WriteUlong(v8, v17, v112);
                RootHub_ReleaseReadModifyWriteLock(v4, v16, v113, v114);
                v50 = XilRegister_ReadUlong(v8, v17);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_50;
                v52 = 95;
              }
            }
            else
            {
              RootHub_AcquireReadModifyWriteLock(v4, v16);
              v116 = XilRegister_ReadUlong(v8, v17);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v115) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                  v115,
                  11,
                  90,
                  (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                  v116);
              }
              v117 = v116 & 0xE00C200 | 0x400000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v115) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                  v115,
                  11,
                  91,
                  (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                  v117);
              }
              XilRegister_WriteUlong(v8, v17, v117);
              RootHub_ReleaseReadModifyWriteLock(v4, v16, v118, v119);
              v50 = XilRegister_ReadUlong(v8, v17);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_50;
              v52 = 92;
            }
          }
          else
          {
            RootHub_AcquireReadModifyWriteLock(v4, v16);
            v121 = XilRegister_ReadUlong(v8, v17);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v120) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v120,
                11,
                84,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v121);
            }
            v122 = v121 & 0xE00C200 | 0x200000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v120) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v120,
                11,
                85,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v122);
            }
            XilRegister_WriteUlong(v8, v17, v122);
            RootHub_ReleaseReadModifyWriteLock(v4, v16, v123, v124);
            v50 = XilRegister_ReadUlong(v8, v17);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_50;
            v52 = 86;
          }
        }
        else
        {
          RootHub_AcquireReadModifyWriteLock(v4, v16);
          v126 = XilRegister_ReadUlong(v8, v17);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v125) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v125,
              11,
              87,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v126);
          }
          v127 = v126 & 0xE00C200 | 0x100000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v125) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v125,
              11,
              88,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v127);
          }
          XilRegister_WriteUlong(v8, v17, v127);
          RootHub_ReleaseReadModifyWriteLock(v4, v16, v128, v129);
          v50 = XilRegister_ReadUlong(v8, v17);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_50;
          v52 = 89;
        }
      }
      else
      {
        RootHub_AcquireReadModifyWriteLock(v4, v16);
        v131 = XilRegister_ReadUlong(v8, v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v130) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v130,
            11,
            81,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v131);
        }
        v132 = v131 & 0xE00C200 | 0x20000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v130) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v130,
            11,
            82,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v132);
        }
        XilRegister_WriteUlong(v8, v17, v132);
        RootHub_ReleaseReadModifyWriteLock(v4, v16, v133, v134);
        v50 = XilRegister_ReadUlong(v8, v17);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_50;
        v52 = 83;
      }
    }
    else
    {
      RootHub_AcquireReadModifyWriteLock(v4, v16);
      v136 = XilRegister_ReadUlong(v8, v17);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v135) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v135,
          11,
          78,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v136);
      }
      v137 = v136 & 0xE00C000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v135) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v135,
          11,
          79,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v137);
      }
      XilRegister_WriteUlong(v8, v17, v137);
      RootHub_ReleaseReadModifyWriteLock(v4, v16, v138, v139);
      v50 = XilRegister_ReadUlong(v8, v17);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_50;
      v52 = 80;
    }
    LOBYTE(v51) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v51,
      11,
      v52,
      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
      v50);
    goto LABEL_50;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v12,
      11,
      40,
      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
  }
  *(_DWORD *)(v9 + 4) = -1073741807;
  v36 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v36);
}
