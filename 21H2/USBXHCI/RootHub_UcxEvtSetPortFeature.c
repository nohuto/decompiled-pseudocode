/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C0013360
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
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0032D48 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D268 (RootHub_ForceU0AndWait.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003E404 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rbp
  int Ulong; // eax
  __int64 v11; // rdx
  unsigned int v12; // r11d
  unsigned int v13; // ebx
  unsigned int v14; // r13d
  unsigned int v15; // r8d
  int v16; // edi
  __int64 v17; // rcx
  char v18; // r9
  _UNKNOWN **v19; // rdx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // edx
  int v25; // ebx
  unsigned int v26; // ebx
  int v27; // r8d
  int v28; // r9d
  char v29; // al
  int v30; // edx
  int v31; // r9d
  __int64 v32; // r8
  int v34; // eax
  int v35; // edx
  int v36; // ebx
  unsigned int v37; // ebx
  int v38; // r8d
  int v39; // r9d
  _UNKNOWN **v40; // rdx
  int v41; // eax
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  int v48; // edx
  __int16 v49; // di
  int v50; // r8d
  int v51; // r9d
  int v52; // eax
  int v53; // edx
  int v54; // ebx
  unsigned int v55; // ebx
  int v56; // r8d
  int v57; // r9d
  int v58; // r9d
  int v59; // edx
  int v60; // r8d
  unsigned int v61; // ebx
  char v62; // bl
  int v63; // eax
  int v64; // edx
  int v65; // edi
  unsigned int v66; // ebx
  int v67; // r8d
  int v68; // r9d
  int v69; // eax
  int v70; // edx
  int v71; // ebx
  unsigned int v72; // ebx
  int v73; // edx
  int v74; // ebx
  unsigned int v75; // ebx
  int v76; // edx
  int v77; // ebx
  unsigned int v78; // ebx
  int v79; // eax
  unsigned int v80; // ebx
  int v81; // eax
  int v82; // edx
  int v83; // ebx
  unsigned int v84; // ebx
  int v85; // eax
  int v86; // edx
  int v87; // ebx
  unsigned int v88; // ebx
  int v89; // r8d
  int v90; // r9d
  int v91; // edx
  int v92; // edi
  unsigned int v93; // edi
  char v94; // al
  int v95; // edx
  int v96; // eax
  int v97; // edx
  int v98; // ebx
  unsigned int v99; // ebx
  char v100; // al
  int v101; // edx
  int v102; // eax
  int v103; // edx
  int v104; // ebx
  unsigned int v105; // ebx
  int v106; // r8d
  int v107; // r9d
  int v108; // eax
  int v109; // eax
  int v110; // edx
  int v111; // ebx
  int v112; // ebx
  unsigned int v113; // edi
  int v114; // r8d
  int v115; // r9d
  char v116; // al
  int v117; // edx
  int v118; // eax
  int v119; // eax
  int v120; // edx
  int v121; // ebx
  unsigned int v122; // ebx
  int v123; // r8d
  int v124; // r9d
  unsigned int v125; // [rsp+70h] [rbp-98h]
  int v126; // [rsp+74h] [rbp-94h]
  __int64 v127; // [rsp+78h] [rbp-90h]
  __int64 v128; // [rsp+80h] [rbp-88h]
  __int64 v129; // [rsp+88h] [rbp-80h]
  __int64 v130; // [rsp+90h] [rbp-78h]
  _OWORD v132[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v133; // [rsp+C0h] [rbp-48h]

  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060248);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v7 + 88);
  if ( *(_BYTE *)(v7 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v133 = 0LL;
  memset(v132, 0, sizeof(v132));
  LOWORD(v132[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v132);
  v9 = *((_QWORD *)&v132[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v6 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        2,
        11,
        120,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    goto LABEL_68;
  }
  Ulong = XilRegister_ReadUlong(v8, *(_QWORD *)(v6 + 32) + 4LL);
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        2,
        11,
        121,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    LOBYTE(v11) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v6 + 8), v11);
LABEL_68:
    *(_DWORD *)(v9 + 4) = -1073713152;
    v32 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v32);
  }
  if ( (Ulong & 1) == 0 )
  {
    v12 = *(unsigned __int8 *)(v9 + 132);
    v13 = *(unsigned __int16 *)(v9 + 130);
    v14 = *(unsigned __int8 *)(v9 + 133);
    v126 = v12;
    if ( *(_WORD *)(v9 + 128) != 803 || !*(_BYTE *)(v9 + 132) || v12 > *(_DWORD *)(v6 + 16) || *(_WORD *)(v9 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v59 = *(unsigned __int8 *)(v9 + 134);
        v58 = 123;
        v60 = *(unsigned __int8 *)(v9 + 131);
        goto LABEL_187;
      }
      goto LABEL_188;
    }
    v15 = v12 - 1;
    v16 = 2;
    v125 = v12 - 1;
    v127 = 16LL * (v12 - 1) + *(_QWORD *)(v6 + 40);
    v129 = 112LL * (v12 - 1);
    v17 = v127 + 4;
    v130 = v127 + 12;
    v128 = v127 + 4;
    v18 = *(_BYTE *)(*(_QWORD *)(v6 + 48) + v129 + 13);
    if ( v18 == 2 )
    {
      v19 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          (_DWORD)v19,
          11,
          124,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v12,
          v13,
          v14);
        v17 = v127 + 4;
        v15 = v125;
        v12 = v126;
      }
      if ( v13 - 21 > 1 && v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v58 = 125;
LABEL_76:
          v59 = *(unsigned __int8 *)(v9 + 134);
          v60 = *(unsigned __int8 *)(v9 + 133);
LABEL_187:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL), v59, v60, v58);
        }
LABEL_188:
        v32 = 3221225473LL;
        goto LABEL_189;
      }
      v20 = v13 - 2;
      if ( v20 )
      {
        v21 = v20 - 2;
        if ( !v21 )
        {
          RootHub_AcquireReadModifyWriteLock(v6, v15);
          if ( *(_BYTE *)(*(_QWORD *)(v6 + 48) + v129 + 20) )
          {
            v74 = XilRegister_ReadUlong(v8, v128);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v73) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v73,
                11,
                126,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v74);
            }
            v75 = v74 & 0xFFFE0007;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v73) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v73,
                11,
                127,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v75);
            }
            XilRegister_WriteUlong(v8, v128, v75);
            v77 = XilRegister_ReadUlong(v8, v130);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v76) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v76,
                11,
                128,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v77);
            }
            v78 = v77 & 0xFFFFC000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v76) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v76,
                11,
                129,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v78);
            }
            XilRegister_WriteUlong(v8, v130, v78);
            *(_BYTE *)(*(_QWORD *)(v6 + 48) + v129 + 20) = 0;
          }
          v34 = XilRegister_ReadUlong(v8, v127);
          v36 = v34;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v35,
              11,
              130,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v34);
          }
          v37 = v36 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v35,
              11,
              131,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v37);
          }
          XilRegister_WriteUlong(v8, v127, v37);
          RootHub_ReleaseReadModifyWriteLock(v6, v125, v38, v39);
          v29 = XilRegister_ReadUlong(v8, v127);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_24;
          v31 = 132;
          goto LABEL_23;
        }
        v22 = v21 - 4;
        if ( !v22 )
        {
          RootHub_AcquireReadModifyWriteLock(v6, v15);
          v23 = XilRegister_ReadUlong(v8, v127);
          v25 = v23;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v24,
              11,
              137,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v23);
          }
          v26 = v25 & 0xE00C000 | 0x200;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v24,
              11,
              138,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v26);
          }
          XilRegister_WriteUlong(v8, v127, v26);
          RootHub_ReleaseReadModifyWriteLock(v6, v125, v27, v28);
          v29 = XilRegister_ReadUlong(v8, v127);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_24;
          v31 = 139;
LABEL_23:
          LOBYTE(v30) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v30,
            11,
            v31,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v29);
LABEL_24:
          *(_DWORD *)(v9 + 4) = 0;
          v32 = 0LL;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v32);
        }
        v61 = v22 - 13;
        if ( !v61 )
        {
          if ( v14 <= 5 )
          {
            v69 = XilRegister_ReadUlong(v8, v17);
            v71 = v69;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v70) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v70,
                11,
                141,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v69);
            }
            v72 = (v14 << 28) | v71 & 0xFFFFFFF;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v70) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v70,
                11,
                142,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v72);
            }
            XilRegister_WriteUlong(v8, v128, v72);
            v29 = XilRegister_ReadUlong(v8, v128);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_24;
            v31 = 143;
            goto LABEL_23;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_188;
          v58 = 140;
          goto LABEL_76;
        }
        if ( v61 == 1 )
        {
          if ( v14 <= 3 )
          {
            v62 = 0;
            if ( v14 != 3 )
              v62 = v14;
            RootHub_AcquireReadModifyWriteLock(v6, v15);
            v63 = XilRegister_ReadUlong(v8, v127);
            v65 = v63;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v64) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v64,
                11,
                145,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v63);
            }
            v66 = v65 & 0xE000200 | ((v62 & 3) << 14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v64) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
                v64,
                11,
                146,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v66);
            }
            XilRegister_WriteUlong(v8, v127, v66);
            RootHub_ReleaseReadModifyWriteLock(v6, v125, v67, v68);
            v29 = XilRegister_ReadUlong(v8, v127);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_24;
            v31 = 147;
            goto LABEL_23;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_188;
          v58 = 144;
          goto LABEL_76;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v58 = 148;
          goto LABEL_76;
        }
        goto LABEL_188;
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 336LL) & 0x8000000LL) == 0
        || (v79 = RootHub_ForceU0AndWait(v6, v12), v32 = (unsigned int)v79, v79 >= 0) )
      {
        RootHub_AcquireReadModifyWriteLock(v6, v125);
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + v129 + 18) = 0;
        v52 = XilRegister_ReadUlong(v8, v127);
        v54 = v52;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v53) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v53,
            11,
            133,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v52);
        }
        if ( ((v54 & 2) == 0 || (v54 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v53) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v53,
            11,
            134,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
        }
        v55 = v54 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v53) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v53,
            11,
            135,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v55);
        }
        XilRegister_WriteUlong(v8, v127, v55);
        RootHub_ReleaseReadModifyWriteLock(v6, v125, v56, v57);
        v29 = XilRegister_ReadUlong(v8, v127);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_24;
        v31 = 136;
        goto LABEL_23;
      }
LABEL_189:
      *(_DWORD *)(v9 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v32);
    }
    if ( v18 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v58 = 179;
        v59 = *(unsigned __int8 *)(v9 + 134);
        v60 = *(unsigned __int8 *)(v9 + 131);
        goto LABEL_187;
      }
      goto LABEL_188;
    }
    v40 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        (_DWORD)v40,
        11,
        149,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v12,
        v13,
        v14);
      v17 = v127 + 4;
      v15 = v125;
      v12 = v126;
    }
    if ( v13 > 0x1B || (v41 = 159383584, !_bittest(&v41, v13)) )
    {
      if ( v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v58 = 150;
          goto LABEL_76;
        }
        goto LABEL_188;
      }
    }
    v42 = v13 - 4;
    if ( !v42 )
    {
      RootHub_AcquireReadModifyWriteLock(v6, v15);
      v119 = XilRegister_ReadUlong(v8, v127);
      v121 = v119;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v120) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v120,
          11,
          151,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v119);
      }
      v122 = v121 & 0xE00C200 | 0x10;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v120) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v120,
          11,
          152,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v122);
      }
      XilRegister_WriteUlong(v8, v127, v122);
      RootHub_ReleaseReadModifyWriteLock(v6, v125, v123, v124);
      v29 = XilRegister_ReadUlong(v8, v127);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_24;
      v31 = 153;
      goto LABEL_23;
    }
    v43 = v42 - 1;
    if ( v43 )
    {
      v44 = v43 - 3;
      if ( !v44 )
      {
        RootHub_AcquireReadModifyWriteLock(v6, v15);
        v102 = XilRegister_ReadUlong(v8, v127);
        v104 = v102;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v103) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v103,
            11,
            157,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v102);
        }
        v105 = v104 & 0xE00C000 | 0x200;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v103) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v103,
            11,
            158,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v105);
        }
        XilRegister_WriteUlong(v8, v127, v105);
        RootHub_ReleaseReadModifyWriteLock(v6, v125, v106, v107);
        v29 = XilRegister_ReadUlong(v8, v127);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_24;
        v31 = 159;
        goto LABEL_23;
      }
      v45 = v44 - 15;
      if ( !v45 )
      {
        v96 = XilRegister_ReadUlong(v8, v17);
        v98 = v96;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v97) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v97,
            11,
            161,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v96);
        }
        v99 = v14 | v98 & 0xFFFFFF00;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v97) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v97,
            11,
            162,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v99);
        }
        XilRegister_WriteUlong(v8, v128, v99);
        v100 = XilRegister_ReadUlong(v8, v128);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v101) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v101,
            11,
            163,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v100);
        }
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + v129 + 21) = v14;
        goto LABEL_24;
      }
      v46 = v45 - 1;
      if ( !v46 )
      {
        v92 = XilRegister_ReadUlong(v8, v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v91) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v91,
            11,
            164,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v92);
        }
        v93 = v92 & 0xFFFF00FF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v91) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v91,
            11,
            165,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v93);
        }
        XilRegister_WriteUlong(v8, v128, v93 | (v14 << 8));
        v94 = XilRegister_ReadUlong(v8, v128);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v95) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v95,
            11,
            166,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v94);
        }
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + v129 + 22) = v14;
        goto LABEL_24;
      }
      v47 = v46 - 3;
      if ( v47 )
      {
        v80 = v47 - 1;
        if ( !v80 )
        {
          RootHub_AcquireReadModifyWriteLock(v6, v15);
          v85 = XilRegister_ReadUlong(v8, v127);
          v87 = v85;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v86) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v86,
              11,
              154,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v85);
          }
          v88 = v87 & 0xE00C200 | 0x80000000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v86) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v86,
              11,
              155,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v88);
          }
          XilRegister_WriteUlong(v8, v127, v88);
          RootHub_ReleaseReadModifyWriteLock(v6, v125, v89, v90);
          v29 = XilRegister_ReadUlong(v8, v127);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_24;
          v31 = 156;
          goto LABEL_23;
        }
        if ( v80 == 2 )
        {
          v81 = XilRegister_ReadUlong(v8, v17);
          v83 = v81;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v82) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v82,
              11,
              175,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v81);
          }
          v84 = v83 | 0x10000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v82) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v82,
              11,
              176,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v84);
          }
          XilRegister_WriteUlong(v8, v128, v84);
          v29 = XilRegister_ReadUlong(v8, v128);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_24;
          v31 = 177;
          goto LABEL_23;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_188;
        v58 = 178;
      }
      else
      {
        if ( (unsigned __int8)v14 < 8u )
        {
          RootHub_AcquireReadModifyWriteLock(v6, v15);
          v49 = XilRegister_ReadUlong(v8, v127);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v48) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v48,
              11,
              172,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v49);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v48) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              v48,
              11,
              173,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              0);
          }
          XilRegister_WriteUlong(v8, v127, v49 & 0xC200 | ((unsigned __int8)(v14 & 7) << 25));
          RootHub_ReleaseReadModifyWriteLock(v6, v125, v50, v51);
          v29 = XilRegister_ReadUlong(v8, v127);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_24;
          v31 = 174;
          goto LABEL_23;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_188;
        v58 = 171;
      }
      goto LABEL_76;
    }
    if ( v14 > 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v58 = 167;
        goto LABEL_76;
      }
      goto LABEL_188;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 336LL) & 0x80000LL) != 0 )
    {
      if ( !v14 )
        goto LABEL_162;
      v108 = RootHub_ForceU0AndWait(v6, v12);
      v32 = (unsigned int)v108;
      if ( v108 < 0 )
        goto LABEL_189;
    }
    if ( v14 )
    {
LABEL_163:
      RootHub_AcquireReadModifyWriteLock(v6, v125);
      if ( v14 == 3 )
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + v129 + 18) = 0;
      v111 = XilRegister_ReadUlong(v8, v127);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v110) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v110,
          11,
          168,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v111);
      }
      v112 = v111 & 0xE00C200;
      if ( v14 != 4 )
        v16 = 32 * (v14 & 0xF | 0x800);
      v113 = v112 | v16;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v110) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v110,
          11,
          169,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v113);
      }
      XilRegister_WriteUlong(v8, v127, v113);
      RootHub_ReleaseReadModifyWriteLock(v6, v125, v114, v115);
      v116 = XilRegister_ReadUlong(v8, v127);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v117) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v117,
          11,
          170,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v116);
      }
      if ( v14 != 3 )
        goto LABEL_24;
      if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 336LL) & 0x4000000LL) == 0 )
        goto LABEL_24;
      v118 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v6, v126, 1);
      v32 = (unsigned int)v118;
      if ( v118 >= 0 )
        goto LABEL_24;
      goto LABEL_189;
    }
LABEL_162:
    v109 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v6, v126, 0);
    v32 = (unsigned int)v109;
    if ( v109 < 0 )
      goto LABEL_189;
    goto LABEL_163;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
      2,
      11,
      122,
      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
  *(_DWORD *)(v9 + 4) = -1073741807;
  v32 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v32);
}
