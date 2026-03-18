/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C00125C0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C000D734 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0032DC8 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D7D8 (RootHub_ForceU0AndWait.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003ECA4 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // rbp
  int Ulong; // eax
  __int64 v8; // rdx
  unsigned int v9; // r11d
  int v10; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // r8d
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  unsigned int v22; // ebx
  char v23; // al
  int v24; // edx
  int v25; // r9d
  __int64 v26; // r8
  __int16 v28; // ax
  __int16 v29; // di
  _UNKNOWN **v30; // rdx
  int v31; // edi
  unsigned int v32; // ebx
  int v33; // eax
  int v34; // edx
  int v35; // ebx
  unsigned int v36; // ebx
  int v37; // eax
  int v38; // edx
  int v39; // ebx
  unsigned int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  int v47; // edx
  int v48; // r8d
  int v49; // r9d
  int v50; // r9d
  int v51; // edx
  int v52; // r8d
  int v53; // ebx
  int v54; // edx
  int v55; // ebx
  unsigned int v56; // ebx
  int v57; // edx
  int v58; // ebx
  unsigned int v59; // ebx
  int v60; // eax
  char v61; // bl
  int v62; // edx
  int v63; // edi
  unsigned int v64; // ebx
  int v65; // eax
  int v66; // edx
  int v67; // ebx
  unsigned int v68; // ebx
  int v69; // ebx
  int v70; // eax
  int v71; // edx
  int v72; // ebx
  unsigned int v73; // ebx
  int v74; // eax
  int v75; // edx
  int v76; // ebx
  unsigned int v77; // ebx
  int v78; // eax
  int v79; // edx
  int v80; // ebx
  unsigned int v81; // ebx
  int v82; // eax
  int v83; // edx
  int v84; // ebx
  unsigned int v85; // ebx
  int v86; // eax
  int v87; // edx
  int v88; // ebx
  int v89; // ebx
  unsigned int v90; // ebx
  char v91; // al
  int v92; // edx
  int v93; // eax
  int v94; // edx
  int v95; // edi
  unsigned int v96; // edi
  char v97; // al
  int v98; // edx
  int v99; // eax
  int v100; // edx
  int v101; // ebx
  unsigned int v102; // ebx
  char v103; // al
  int v104; // edx
  unsigned int v105; // [rsp+70h] [rbp-A8h]
  __int64 v106; // [rsp+78h] [rbp-A0h]
  int v107; // [rsp+80h] [rbp-98h]
  __int64 v108; // [rsp+88h] [rbp-90h]
  __int64 v109; // [rsp+90h] [rbp-88h]
  __int64 v110; // [rsp+98h] [rbp-80h]
  _OWORD v112[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v113; // [rsp+C8h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v47, v48, v49);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v113 = 0LL;
  memset(v112, 0, sizeof(v112));
  LOWORD(v112[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v112);
  v6 = *((_QWORD *)&v112[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2,
        11,
        121,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    goto LABEL_71;
  }
  Ulong = XilRegister_ReadUlong(v5, *(_QWORD *)(v3 + 32) + 4LL);
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2,
        11,
        122,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    LOBYTE(v8) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v8);
LABEL_71:
    *(_DWORD *)(v6 + 4) = -1073713152;
    v26 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v26);
  }
  if ( (Ulong & 1) == 0 )
  {
    v9 = *(unsigned __int8 *)(v6 + 132);
    v10 = *(unsigned __int16 *)(v6 + 130);
    v11 = *(unsigned __int8 *)(v6 + 133);
    v107 = v9;
    if ( *(_WORD *)(v6 + 128) != 803 || !*(_BYTE *)(v6 + 132) || v9 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v6 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = *(unsigned __int8 *)(v6 + 134);
        v50 = 124;
        v52 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_196;
      }
      goto LABEL_197;
    }
    v12 = v9 - 1;
    v13 = 2;
    v15 = 112LL * (v9 - 1);
    v109 = v15;
    v106 = 16LL * (v9 - 1) + *(_QWORD *)(v3 + 40);
    v105 = v9 - 1;
    v14 = v106 + 4;
    v110 = v106 + 12;
    v108 = v106 + 4;
    LOBYTE(v15) = *(_BYTE *)(v15 + *(_QWORD *)(v3 + 48) + 13);
    if ( (_BYTE)v15 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v15,
          11,
          125,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v9,
          v10,
          v11);
        v14 = v106 + 4;
        v12 = v105;
        v9 = v107;
      }
      if ( v10 == 21 )
      {
        if ( v11 > 5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v50 = 141;
            goto LABEL_79;
          }
          goto LABEL_197;
        }
        goto LABEL_111;
      }
      if ( v10 == 22 )
      {
        if ( v11 > 3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v50 = 145;
            goto LABEL_79;
          }
          goto LABEL_197;
        }
        goto LABEL_100;
      }
      if ( v11 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v50 = 126;
LABEL_79:
          v51 = *(unsigned __int8 *)(v6 + 134);
          v52 = *(unsigned __int8 *)(v6 + 133);
LABEL_196:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v51, v52, v50);
        }
LABEL_197:
        v26 = 3221225473LL;
        goto LABEL_198;
      }
      v16 = v10 - 2;
      if ( v16 )
      {
        v17 = v16 - 2;
        if ( !v17 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v109 + 20) )
          {
            v55 = XilRegister_ReadUlong(v5, v108);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v54) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v54,
                11,
                127,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v55);
            }
            v56 = v55 & 0xFFFE0007;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v54) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v54,
                11,
                128,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v56);
            }
            XilRegister_WriteUlong(v5, v108, v56);
            v58 = XilRegister_ReadUlong(v5, v110);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v57) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v57,
                11,
                129,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v58);
            }
            v59 = v58 & 0xFFFFC000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v57) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v57,
                11,
                130,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v59);
            }
            XilRegister_WriteUlong(v5, v110, v59);
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + v109 + 20) = 0;
          }
          v33 = XilRegister_ReadUlong(v5, v106);
          v35 = v33;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v34,
              11,
              131,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v33);
          }
          v36 = v35 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v34,
              11,
              132,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v36);
          }
          XilRegister_WriteUlong(v5, v106, v36);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v23 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v25 = 133;
          goto LABEL_24;
        }
        v18 = v17 - 4;
        if ( !v18 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          v19 = XilRegister_ReadUlong(v5, v106);
          v21 = v19;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v20,
              11,
              138,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v19);
          }
          v22 = v21 & 0xE00C000 | 0x200;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v20,
              11,
              139,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v22);
          }
          XilRegister_WriteUlong(v5, v106, v22);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v23 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v25 = 140;
LABEL_24:
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v24,
            11,
            v25,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v23);
LABEL_25:
          *(_DWORD *)(v6 + 4) = 0;
          v26 = 0LL;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v26);
        }
        v53 = v18 - 13;
        if ( v53 )
        {
          if ( v53 != 1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v50 = 149;
              goto LABEL_79;
            }
            goto LABEL_197;
          }
LABEL_100:
          v61 = 0;
          if ( v11 != 3 )
            v61 = v11;
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          v63 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v62) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v62,
              11,
              146,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v63);
          }
          v64 = v63 & 0xE000200 | ((v61 & 3) << 14);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v62) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v62,
              11,
              147,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v64);
          }
          XilRegister_WriteUlong(v5, v106, v64);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v23 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v25 = 148;
          goto LABEL_24;
        }
LABEL_111:
        v65 = XilRegister_ReadUlong(v5, v14);
        v67 = v65;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v66) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v66,
            11,
            142,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v65);
        }
        v68 = (v11 << 28) | v67 & 0xFFFFFFF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v66) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v66,
            11,
            143,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v68);
        }
        XilRegister_WriteUlong(v5, v108, v68);
        v23 = XilRegister_ReadUlong(v5, v108);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v25 = 144;
        goto LABEL_24;
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x8000000LL) == 0
        || (v60 = RootHub_ForceU0AndWait(v3, v9), v26 = (unsigned int)v60, v60 >= 0) )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v105);
        *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 18) = 0;
        v37 = XilRegister_ReadUlong(v5, v106);
        v39 = v37;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v38) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v38,
            11,
            134,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v37);
        }
        if ( ((v39 & 2) == 0 || (v39 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v38) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v38,
            11,
            135,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
        }
        v40 = v39 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v38) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v38,
            11,
            136,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v40);
        }
        XilRegister_WriteUlong(v5, v106, v40);
        RootHub_ReleaseReadModifyWriteLock(v3, v105);
        v23 = XilRegister_ReadUlong(v5, v106);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v25 = 137;
        goto LABEL_24;
      }
LABEL_198:
      *(_DWORD *)(v6 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v26);
    }
    if ( (_BYTE)v15 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = 180;
        v51 = *(unsigned __int8 *)(v6 + 134);
        v52 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_196;
      }
      goto LABEL_197;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v15,
        11,
        150,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v9,
        v10,
        v11);
      v14 = v106 + 4;
      v12 = v105;
      v9 = v107;
    }
    switch ( v10 )
    {
      case 27:
LABEL_31:
        if ( (unsigned __int8)v11 < 8u )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          v28 = XilRegister_ReadUlong(v5, v106);
          v29 = v28;
          v30 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              (_DWORD)v30,
              11,
              173,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v28);
            v30 = &WPP_RECORDER_INITIALIZED;
          }
          v31 = v29 & 0xC200;
          if ( (*(_DWORD *)(v109 + *(_QWORD *)(v3 + 48) + 64) & 2) != 0 )
            v32 = v31;
          else
            v32 = v31 | ((v11 & 7) << 25);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              (_DWORD)v30,
              11,
              174,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v32);
          }
          XilRegister_WriteUlong(v5, v106, v32);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v23 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v25 = 175;
          goto LABEL_24;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_197;
        v50 = 172;
        goto LABEL_79;
      case 23:
        goto LABEL_185;
      case 24:
        goto LABEL_178;
      case 5:
        if ( v11 > 5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v50 = 168;
            goto LABEL_79;
          }
          goto LABEL_197;
        }
        break;
      default:
        if ( v11 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v50 = 151;
            goto LABEL_79;
          }
          goto LABEL_197;
        }
        v41 = v10 - 4;
        if ( !v41 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          v82 = XilRegister_ReadUlong(v5, v106);
          v84 = v82;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v83) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v83,
              11,
              152,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v82);
          }
          v85 = v84 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v83) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v83,
              11,
              153,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v85);
          }
          XilRegister_WriteUlong(v5, v106, v85);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v23 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v25 = 154;
          goto LABEL_24;
        }
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 3;
          if ( !v43 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v12);
            v78 = XilRegister_ReadUlong(v5, v106);
            v80 = v78;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v79) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v79,
                11,
                158,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v78);
            }
            v81 = v80 & 0xE00C000 | 0x200;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v79) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v79,
                11,
                159,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v81);
            }
            XilRegister_WriteUlong(v5, v106, v81);
            RootHub_ReleaseReadModifyWriteLock(v3, v105);
            v23 = XilRegister_ReadUlong(v5, v106);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_25;
            v25 = 160;
            goto LABEL_24;
          }
          v44 = v43 - 15;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 - 3;
              if ( v46 )
              {
                v69 = v46 - 1;
                if ( !v69 )
                {
                  RootHub_AcquireReadModifyWriteLock(v3, v12);
                  v74 = XilRegister_ReadUlong(v5, v106);
                  v76 = v74;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v75) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v75,
                      11,
                      155,
                      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                      v74);
                  }
                  v77 = v76 & 0xE00C200 | 0x80000000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v75) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v75,
                      11,
                      156,
                      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                      v77);
                  }
                  XilRegister_WriteUlong(v5, v106, v77);
                  RootHub_ReleaseReadModifyWriteLock(v3, v105);
                  v23 = XilRegister_ReadUlong(v5, v106);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_25;
                  v25 = 157;
                  goto LABEL_24;
                }
                if ( v69 == 2 )
                {
                  v70 = XilRegister_ReadUlong(v5, v14);
                  v72 = v70;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v71) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v71,
                      11,
                      176,
                      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                      v70);
                  }
                  v73 = v72 | 0x10000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v71) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v71,
                      11,
                      177,
                      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                      v73);
                  }
                  XilRegister_WriteUlong(v5, v108, v73);
                  v23 = XilRegister_ReadUlong(v5, v108);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_25;
                  v25 = 178;
                  goto LABEL_24;
                }
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_197;
                v50 = 179;
                goto LABEL_79;
              }
              goto LABEL_31;
            }
LABEL_178:
            v95 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v94) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v94,
                11,
                165,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v95);
            }
            v96 = v95 & 0xFFFF00FF;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v94) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v94,
                11,
                166,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v96);
            }
            XilRegister_WriteUlong(v5, v108, v96 | (v11 << 8));
            v97 = XilRegister_ReadUlong(v5, v108);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v98) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v98,
                11,
                167,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v97);
            }
            *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 22) = v11;
            goto LABEL_25;
          }
LABEL_185:
          v99 = XilRegister_ReadUlong(v5, v14);
          v101 = v99;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v100) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v100,
              11,
              162,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v99);
          }
          v102 = v11 | v101 & 0xFFFFFF00;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v100) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v100,
              11,
              163,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v102);
          }
          XilRegister_WriteUlong(v5, v108, v102);
          v103 = XilRegister_ReadUlong(v5, v108);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v104) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v104,
              11,
              164,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v103);
          }
          *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 21) = v11;
          goto LABEL_25;
        }
        break;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x80000LL) != 0 )
    {
      if ( v11 )
      {
        v86 = RootHub_ForceU0AndWait(v3, v9);
        goto LABEL_161;
      }
    }
    else if ( v11 )
    {
LABEL_164:
      RootHub_AcquireReadModifyWriteLock(v3, v105);
      if ( v11 == 3 )
        *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 18) = 0;
      v88 = XilRegister_ReadUlong(v5, v106);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v87) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v87,
          11,
          169,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v88);
      }
      v89 = v88 & 0xE00C200;
      if ( v11 != 4 )
        v13 = 32 * (v11 & 0xF | 0x800);
      v90 = v13 | v89;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v87) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v87,
          11,
          170,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v90);
      }
      XilRegister_WriteUlong(v5, v106, v90);
      RootHub_ReleaseReadModifyWriteLock(v3, v105);
      v91 = XilRegister_ReadUlong(v5, v106);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v92) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v92,
          11,
          171,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v91);
      }
      if ( v11 != 3 )
        goto LABEL_25;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x4000000LL) == 0 )
        goto LABEL_25;
      v93 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v107, 1);
      v26 = (unsigned int)v93;
      if ( v93 >= 0 )
        goto LABEL_25;
      goto LABEL_198;
    }
    v86 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v9, 0);
LABEL_161:
    v26 = (unsigned int)v86;
    if ( v86 < 0 )
      goto LABEL_198;
    goto LABEL_164;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2,
      11,
      123,
      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
  *(_DWORD *)(v6 + 4) = -1073741807;
  v26 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v26);
}
