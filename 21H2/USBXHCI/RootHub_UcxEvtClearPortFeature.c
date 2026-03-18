/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x1C0011FE0
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
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003ECA4 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // edx
  int Ulong; // eax
  __int64 v9; // rdx
  unsigned int v10; // r11d
  unsigned int v11; // r8d
  int v12; // ebx
  unsigned int v13; // r12d
  __int64 v14; // r13
  unsigned int v15; // edx
  __int64 v16; // r9
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // edx
  int v25; // ebx
  unsigned int v26; // ebx
  char v27; // al
  int v28; // edx
  int v29; // r9d
  __int64 v30; // r8
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // edx
  int v41; // ebx
  unsigned int v42; // ebx
  char v43; // al
  int v44; // edx
  int v45; // r9d
  int v46; // edx
  int v47; // ebx
  unsigned int v48; // ebx
  int v49; // edx
  int v50; // r8d
  int v51; // r9d
  int v52; // r9d
  int v53; // edx
  int v54; // r8d
  int v55; // edx
  int v56; // ebx
  unsigned int v57; // ebx
  int v58; // edx
  int v59; // ebx
  unsigned int v60; // ebx
  int v61; // edx
  int v62; // ebx
  unsigned int v63; // ebx
  int v64; // edx
  int v65; // ebx
  unsigned int v66; // ebx
  int v67; // eax
  int v68; // eax
  int v69; // ebx
  _UNKNOWN **v70; // rdx
  unsigned int v71; // ebx
  char v72; // al
  int v73; // edx
  __int64 v74; // rdx
  unsigned __int16 v75; // ax
  int v76; // eax
  int v77; // ebx
  _UNKNOWN **v78; // rdx
  __int64 v79; // r10
  unsigned int v80; // ebx
  int v81; // r9d
  __int64 v82; // rcx
  int v83; // edx
  int v84; // ebx
  unsigned int v85; // ebx
  int v86; // eax
  int v87; // edx
  int v88; // ebx
  unsigned int v89; // ebx
  int v90; // edx
  int v91; // ebx
  unsigned int v92; // ebx
  int v93; // edx
  int v94; // ebx
  unsigned int v95; // ebx
  int v96; // edx
  int v97; // ebx
  unsigned int v98; // ebx
  int v99; // edx
  int v100; // ebx
  unsigned int v101; // ebx
  int v102; // edx
  int v103; // ebx
  unsigned int v104; // ebx
  int v105; // edx
  int v106; // ebx
  unsigned int v107; // ebx
  unsigned int v108; // [rsp+70h] [rbp-88h]
  unsigned int v109; // [rsp+74h] [rbp-84h]
  __int64 v110; // [rsp+78h] [rbp-80h]
  __int64 v111; // [rsp+80h] [rbp-78h]
  _OWORD v113[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v49, v50, v51);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v114 = 0LL;
  memset(v113, 0, sizeof(v113));
  LOWORD(v113[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v113);
  v6 = *((_QWORD *)&v113[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v7,
        11,
        38,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    }
    goto LABEL_65;
  }
  Ulong = XilRegister_ReadUlong(v5, *(_QWORD *)(v3 + 32) + 4LL);
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v9,
        11,
        39,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    }
    LOBYTE(v9) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v9);
LABEL_65:
    *(_DWORD *)(v6 + 4) = -1073713152;
    v30 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v30);
  }
  if ( (Ulong & 1) == 0 )
  {
    v10 = *(unsigned __int8 *)(v6 + 132);
    v11 = *(unsigned __int8 *)(v6 + 133);
    v12 = *(unsigned __int16 *)(v6 + 130);
    v109 = v10;
    v108 = v11;
    if ( *(_WORD *)(v6 + 128) != 291 || !*(_BYTE *)(v6 + 132) || v10 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v6 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v53 = *(unsigned __int8 *)(v6 + 134);
        v52 = 41;
        v54 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_191;
      }
      goto LABEL_192;
    }
    v13 = v10 - 1;
    v15 = v10 - 1;
    v14 = *(_QWORD *)(v3 + 40) + 16LL * (v10 - 1);
    v110 = 112LL * (v10 - 1);
    LOBYTE(v15) = *(_BYTE *)(v110 + *(_QWORD *)(v3 + 48) + 13);
    v16 = v14 + 4;
    v111 = v14 + 4;
    if ( (_BYTE)v15 != 2 )
    {
      if ( (_BYTE)v15 == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 4;
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v15,
            11,
            76,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v10,
            v12,
            v11);
          v11 = v108;
          v16 = v14 + 4;
        }
        if ( !v11 )
        {
          v17 = v12 - 8;
          if ( !v17 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v13);
            v106 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v105) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v105,
                11,
                78,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v106);
            }
            v107 = v106 & 0xE00C000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v105) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v105,
                11,
                79,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v107);
            }
            XilRegister_WriteUlong(v5, v14, v107);
            RootHub_ReleaseReadModifyWriteLock(v3, v13);
            v27 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_28;
            v29 = 80;
            goto LABEL_27;
          }
          v18 = v17 - 8;
          if ( !v18 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v13);
            v103 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v102) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v102,
                11,
                81,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v103);
            }
            v104 = v103 & 0xE00C200 | 0x20000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v102) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v102,
                11,
                82,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v104);
            }
            XilRegister_WriteUlong(v5, v14, v104);
            RootHub_ReleaseReadModifyWriteLock(v3, v13);
            v27 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_28;
            v29 = 83;
            goto LABEL_27;
          }
          v19 = v18 - 3;
          if ( !v19 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v13);
            v100 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v99) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v99,
                11,
                87,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v100);
            }
            v101 = v100 & 0xE00C200 | 0x100000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v99) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v99,
                11,
                88,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v101);
            }
            XilRegister_WriteUlong(v5, v14, v101);
            RootHub_ReleaseReadModifyWriteLock(v3, v13);
            v27 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_28;
            v29 = 89;
            goto LABEL_27;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v13);
            v97 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v96) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v96,
                11,
                84,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v97);
            }
            v98 = v97 & 0xE00C200 | 0x200000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v96) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v96,
                11,
                85,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v98);
            }
            XilRegister_WriteUlong(v5, v14, v98);
            RootHub_ReleaseReadModifyWriteLock(v3, v13);
            v27 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_28;
            v29 = 86;
            goto LABEL_27;
          }
          v21 = v20 - 5;
          if ( !v21 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v13);
            v94 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v93) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v93,
                11,
                90,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v94);
            }
            v95 = v94 & 0xE00C200 | 0x400000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v93) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v93,
                11,
                91,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v95);
            }
            XilRegister_WriteUlong(v5, v14, v95);
            RootHub_ReleaseReadModifyWriteLock(v3, v13);
            v27 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_28;
            v29 = 92;
            goto LABEL_27;
          }
          v22 = v21 - 1;
          if ( !v22 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v13);
            v91 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v90) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v90,
                11,
                93,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v91);
            }
            v92 = v91 & 0xE00C200 | 0x800000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v90) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v90,
                11,
                94,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v92);
            }
            XilRegister_WriteUlong(v5, v14, v92);
            RootHub_ReleaseReadModifyWriteLock(v3, v13);
            v27 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_28;
            v29 = 95;
            goto LABEL_27;
          }
          v23 = v22 - 3;
          if ( !v23 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v13);
            v25 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v24) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v24,
                11,
                96,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v25);
            }
            v26 = v25 & 0xE00C200 | 0x80000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v24) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v24,
                11,
                97,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v26);
            }
            XilRegister_WriteUlong(v5, v14, v26);
            RootHub_ReleaseReadModifyWriteLock(v3, v13);
            v27 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_28;
            v29 = 98;
LABEL_27:
            LOBYTE(v28) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v28,
              11,
              v29,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v27);
LABEL_28:
            *(_DWORD *)(v6 + 4) = 0;
LABEL_29:
            v30 = 0LL;
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WdfDriverGlobals,
                     a2,
                     v30);
          }
          if ( v23 == 1 )
          {
            v86 = XilRegister_ReadUlong(v5, v16);
            v88 = v86;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v87) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v87,
                11,
                99,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v86);
            }
            v89 = v88 & 0xFFFEFFFF;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v87) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v87,
                11,
                100,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v89);
            }
            XilRegister_WriteUlong(v5, v111, v89);
            v27 = XilRegister_ReadUlong(v5, v111);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_28;
            v29 = 101;
            goto LABEL_27;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_192;
          v52 = 102;
          goto LABEL_73;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v52 = 77;
          goto LABEL_73;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v52 = 103;
        v53 = *(unsigned __int8 *)(v6 + 134);
        v54 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_191;
      }
LABEL_192:
      v30 = 3221225473LL;
      goto LABEL_193;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v15,
        11,
        42,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v10,
        v12,
        v11);
      v10 = v109;
      v11 = v108;
    }
    if ( v12 == 22 )
    {
      if ( v11 > 3 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_192;
        v52 = 56;
        goto LABEL_73;
      }
LABEL_134:
      RootHub_AcquireReadModifyWriteLock(v3, v13);
      v84 = XilRegister_ReadUlong(v5, v14);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v83) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v83,
          11,
          57,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v84);
      }
      v85 = v84 & 0xE000200;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v83) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v83,
          11,
          58,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v85);
      }
      XilRegister_WriteUlong(v5, v14, v85);
      RootHub_ReleaseReadModifyWriteLock(v3, v13);
      v43 = XilRegister_ReadUlong(v5, v14);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_50;
      v45 = 59;
      goto LABEL_49;
    }
    if ( v11 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_192;
      v52 = 43;
LABEL_73:
      v53 = *(unsigned __int8 *)(v6 + 134);
      v54 = *(unsigned __int8 *)(v6 + 133);
LABEL_191:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v53, v54, v52);
      goto LABEL_192;
    }
    v32 = v12 - 1;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( !v33 )
      {
        v67 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v10, 0);
        v30 = (unsigned int)v67;
        if ( v67 < 0 )
        {
LABEL_193:
          *(_DWORD *)(v6 + 4) = -1073741820;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v30);
        }
        RootHub_AcquireReadModifyWriteLock(v3, v13);
        v68 = XilRegister_ReadUlong(v5, v14);
        v69 = v68;
        v70 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v70) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v70,
            11,
            49,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v68);
          v70 = &WPP_RECORDER_INITIALIZED;
        }
        if ( ((v69 & 2) == 0 || (v69 & 0x1E0) != 0x60 && (v69 & 0x1E0) != 0x1E0)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v70) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v70,
            11,
            50,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
        }
        v71 = v69 & 0xE00C200 | 0x101E0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v70) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v70,
            11,
            51,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v71);
        }
        XilRegister_WriteUlong(v5, v14, v71);
        RootHub_ReleaseReadModifyWriteLock(v3, v13);
        v72 = XilRegister_ReadUlong(v5, v14);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v73) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v73,
            11,
            52,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v72);
        }
        v74 = *(_QWORD *)(v3 + 48);
        if ( *(int *)(v110 + v74 + 48) <= 0 )
          v75 = 50;
        else
          v75 = *(_WORD *)(v110 + v74 + 52);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(v110 + v74 + 40),
          -10000LL * v75);
LABEL_50:
        *(_DWORD *)(v6 + 4) = 0;
        goto LABEL_29;
      }
      v34 = v33 - 6;
      if ( v34 )
      {
        v35 = v34 - 8;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( !v39 )
                {
                  RootHub_AcquireReadModifyWriteLock(v3, v13);
                  v41 = XilRegister_ReadUlong(v5, v14);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v40) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v40,
                      11,
                      63,
                      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                      v41);
                  }
                  v42 = v41 & 0xE00C200 | 0x200000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v40) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v40,
                      11,
                      64,
                      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                      v42);
                  }
                  XilRegister_WriteUlong(v5, v14, v42);
                  RootHub_ReleaseReadModifyWriteLock(v3, v13);
                  v43 = XilRegister_ReadUlong(v5, v14);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_50;
                  v45 = 65;
                  goto LABEL_49;
                }
                if ( v39 != 2 )
                {
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_192;
                  v52 = 75;
                  goto LABEL_73;
                }
                goto LABEL_134;
              }
              RootHub_AcquireReadModifyWriteLock(v3, v13);
              v56 = XilRegister_ReadUlong(v5, v14);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v55) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v55,
                  11,
                  72,
                  (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                  v56);
              }
              v57 = v56 & 0xE00C200 | 0x100000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v55) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v55,
                  11,
                  73,
                  (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                  v57);
              }
              XilRegister_WriteUlong(v5, v14, v57);
              RootHub_ReleaseReadModifyWriteLock(v3, v13);
              v43 = XilRegister_ReadUlong(v5, v14);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_50;
              v45 = 74;
            }
            else
            {
              RootHub_AcquireReadModifyWriteLock(v3, v13);
              v59 = XilRegister_ReadUlong(v5, v14);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v58) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v58,
                  11,
                  69,
                  (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                  v59);
              }
              v60 = v59 & 0xE00C200 | 0x400000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v58) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v58,
                  11,
                  70,
                  (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                  v60);
              }
              XilRegister_WriteUlong(v5, v14, v60);
              RootHub_ReleaseReadModifyWriteLock(v3, v13);
              v43 = XilRegister_ReadUlong(v5, v14);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_50;
              v45 = 71;
            }
          }
          else
          {
            RootHub_AcquireReadModifyWriteLock(v3, v13);
            v62 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v61) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v61,
                11,
                66,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v62);
            }
            v63 = v62 & 0xE00C200 | 0x40000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v61) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v61,
                11,
                67,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v63);
            }
            XilRegister_WriteUlong(v5, v14, v63);
            RootHub_ReleaseReadModifyWriteLock(v3, v13);
            v43 = XilRegister_ReadUlong(v5, v14);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_50;
            v45 = 68;
          }
        }
        else
        {
          RootHub_AcquireReadModifyWriteLock(v3, v13);
          v47 = XilRegister_ReadUlong(v5, v14);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v46) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v46,
              11,
              60,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v47);
          }
          v48 = v47 & 0xE00C200 | 0x20000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v46) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v46,
              11,
              61,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v48);
          }
          XilRegister_WriteUlong(v5, v14, v48);
          RootHub_ReleaseReadModifyWriteLock(v3, v13);
          v43 = XilRegister_ReadUlong(v5, v14);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_50;
          v45 = 62;
        }
      }
      else
      {
        RootHub_AcquireReadModifyWriteLock(v3, v13);
        v65 = XilRegister_ReadUlong(v5, v14);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v64) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v64,
            11,
            53,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v65);
        }
        v66 = v65 & 0xE00C000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v64) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v64,
            11,
            54,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v66);
        }
        XilRegister_WriteUlong(v5, v14, v66);
        RootHub_ReleaseReadModifyWriteLock(v3, v13);
        v43 = XilRegister_ReadUlong(v5, v14);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_50;
        v45 = 55;
      }
LABEL_49:
      LOBYTE(v44) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v44,
        11,
        v45,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v43);
      goto LABEL_50;
    }
    RootHub_AcquireReadModifyWriteLock(v3, v13);
    v76 = XilRegister_ReadUlong(v5, v14);
    v77 = v76;
    v78 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v78) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        (_DWORD)v78,
        11,
        44,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v76);
      v78 = &WPP_RECORDER_INITIALIZED;
    }
    v79 = *(_QWORD *)(v3 + 8);
    if ( (*(_QWORD *)(v79 + 336) & 0x2000000LL) != 0 )
    {
      if ( ((v77 & 2) == 0 || (v77 & 0x1E0u) >= 0x60)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v78) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(v79 + 72),
          (_DWORD)v78,
          11,
          45,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
      }
      v80 = v77 & 0xE00C200 | 0x10060;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_129;
      v81 = 46;
      v82 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
    }
    else
    {
      v80 = v77 & 0xE00C200 | 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_129:
        XilRegister_WriteUlong(v5, v14, v80);
        RootHub_ReleaseReadModifyWriteLock(v3, v13);
        v43 = XilRegister_ReadUlong(v5, v14);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_50;
        v45 = 48;
        goto LABEL_49;
      }
      v82 = *(_QWORD *)(v79 + 72);
      v81 = 47;
    }
    LOBYTE(v78) = 4;
    WPP_RECORDER_SF_d(v82, (_DWORD)v78, 11, v81, (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids, v80);
    goto LABEL_129;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v9,
      11,
      40,
      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
  }
  *(_DWORD *)(v6 + 4) = -1073741807;
  v30 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v30);
}
