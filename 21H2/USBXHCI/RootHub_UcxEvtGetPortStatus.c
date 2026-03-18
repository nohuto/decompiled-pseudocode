/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C0012CD0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00139F0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0032DC8 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003ECA4 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned int Ulong; // ebx
  char v15; // cl
  unsigned int v16; // esi
  int v17; // edx
  unsigned __int16 *v18; // rdx
  unsigned int v19; // r9d
  unsigned __int16 v20; // cx
  unsigned int v21; // r10d
  unsigned __int16 v22; // r8
  unsigned __int16 v23; // cx
  int v24; // edx
  unsigned int v25; // eax
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  unsigned __int16 *v30; // r12
  int v31; // edx
  unsigned int v32; // ebp
  __int16 v33; // cx
  __int16 v34; // r8
  int v35; // edx
  int v36; // eax
  __int16 v37; // cx
  __int16 v38; // cx
  __int64 v39; // rdx
  int v40; // eax
  int v41; // edx
  int v42; // r8d
  int v43; // r9d
  int v44; // r9d
  unsigned __int16 v45; // cx
  int v46; // edx
  unsigned __int16 v47; // cx
  unsigned __int16 v48; // ax
  int v49; // edx
  int v50; // r9d
  int v51; // edx
  int v52; // r8d
  char v53; // [rsp+28h] [rbp-D0h]
  __int64 v54; // [rsp+70h] [rbp-88h]
  unsigned __int16 *v55; // [rsp+70h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-78h]
  _OWORD v57[2]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  v56 = v5;
  if ( *(_BYTE *)(v4 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v41, v42, v43);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v58 = 0LL;
  memset(v57, 0, sizeof(v57));
  LOWORD(v57[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v57);
  v6 = *((_QWORD *)&v57[0] + 1);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    v8 = *(unsigned __int16 *)(v6 + 130);
    v9 = 8;
    v10 = *(unsigned __int16 *)(v6 + 132);
    if ( v8 != 2 )
      v9 = 4;
    if ( *(_BYTE *)(v6 + 128) != 0xA3
      || *(_BYTE *)(v6 + 129)
      || (_WORD)v8 && v8 != 2
      || !*(_WORD *)(v6 + 132)
      || v10 > *(_DWORD *)(v3 + 16)
      || *(unsigned __int16 *)(v6 + 134) != v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = BYTE1(v8);
        v50 = 106;
        v52 = (unsigned __int8)v8;
        goto LABEL_95;
      }
LABEL_96:
      v16 = -1073741823;
      *(_DWORD *)(v6 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v16);
    }
    v11 = 16LL * (v10 - 1);
    v12 = 112LL * (v10 - 1);
    Ulong = XilRegister_ReadUlong(v5, v11 + *(_QWORD *)(v3 + 40));
    v54 = v12;
    v15 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v12 + 13);
    if ( v15 != 2 )
    {
      if ( v15 == 3 )
      {
        if ( Ulong != -1 )
        {
          v16 = 0;
          v55 = *(unsigned __int16 **)(v6 + 40);
          *(_DWORD *)v55 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v13,
              11,
              114,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v10,
              Ulong);
          }
          if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v3, v10) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v17,
                11,
                115,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v10);
            }
            v47 = *v55 & 0xFC04 | 0x2A0;
            v55[1] &= 0xFF06u;
            v48 = v55[1];
            *v55 = v47;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v49 = v47;
              LOBYTE(v49) = 4;
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v49,
                11,
                116,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v47,
                v48);
            }
          }
          else
          {
            v18 = v55;
            v19 = Ulong >> 5;
            v20 = Ulong & 1 | *v55 & 0xFE04 | (2
                                             * ((Ulong >> 1) & 1 | (4
                                                                  * ((Ulong >> 3) & 1 | (2
                                                                                       * ((2 * ((Ulong >> 5) & 0xF)) | (Ulong >> 4) & 1))))));
            *v55 = v20;
            if ( (v20 & 0x1E0) == 0x1E0 )
            {
              v20 = v20 & 0xFE1F | 0x100;
              *v55 = v20;
            }
            if ( (Ulong & 0x1000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v18) = 4;
                WPP_RECORDER_SF_(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  (_DWORD)v18,
                  11,
                  117,
                  (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
                v18 = v55;
                LOBYTE(v19) = Ulong >> 5;
                v20 = *v55;
              }
              v20 = v20 & 0xFE1F | 0x140;
            }
            v21 = Ulong >> 22;
            v22 = v20 ^ (v20 ^ Ulong & 0xFE00) & 0x200;
            *v18 = v22;
            v23 = v18[1] & 0xFF06 | (Ulong >> 17) & 1 | (8
                                                       * ((Ulong >> 20) & 1 | (2
                                                                             * ((Ulong >> 21) & 1 | (2 * ((Ulong >> 19) & 1 | (2 * (((Ulong & 0x400000) != 0) | (unsigned __int16)(2 * ((Ulong >> 23) & 1))))))))));
            v18[1] = v23;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v24 = v22;
              LOBYTE(v24) = 4;
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v24,
                11,
                118,
                (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                v22,
                v23);
              v18 = v55;
              LOBYTE(v19) = Ulong >> 5;
              LOBYTE(v21) = Ulong >> 22;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v3 + 48) + v12 + 108) && (v19 & 0xF) == 6 && (v21 & 1) != 0 )
              v18[1] |= 0x80u;
            if ( *(_WORD *)(v6 + 130) == 2 )
            {
              v25 = XilRegister_ReadUlong(v56, v11 + *(_QWORD *)(v3 + 40) + 8LL);
              v26 = (int)v55;
              *((_DWORD *)v55 + 1) = 0;
              if ( *(_WORD *)(*(_QWORD *)(v3 + 48) + v12 + 54) || (Ulong & 0x3C00) != 0x400 )
                v27 = (Ulong & 0x3C00 | (Ulong >> 4) & 0x3C0) >> 6;
              else
                v27 = 68;
              v28 = v27 | (v25 >> 8) & 0xFF00;
              *((_DWORD *)v55 + 1) = v28;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v26) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v26,
                  11,
                  119,
                  (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                  v28);
              }
            }
          }
          *(_DWORD *)(v6 + 4) = 0;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v16);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v44 = 113;
          goto LABEL_77;
        }
        goto LABEL_78;
      }
LABEL_91:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = 120;
        v51 = *(unsigned __int8 *)(v6 + 134);
        v52 = *(unsigned __int8 *)(v6 + 133);
LABEL_95:
        WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v51, v52, v50);
        goto LABEL_96;
      }
      goto LABEL_96;
    }
    if ( *(_WORD *)(v6 + 130) )
      goto LABEL_91;
    if ( Ulong == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = 107;
LABEL_77:
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v13,
          11,
          v44,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
      }
LABEL_78:
      LOBYTE(v13) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v13);
      *(_DWORD *)(v6 + 4) = -1073713152;
      v16 = -1073741810;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v16);
    }
    v30 = *(unsigned __int16 **)(v6 + 40);
    v16 = 0;
    *(_DWORD *)v30 = 0;
    v31 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v31) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v31,
        11,
        108,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v10,
        Ulong);
      v31 = *v30;
    }
    v32 = (Ulong >> 5) & 0xF;
    LOWORD(v31) = v31 & 0xFFFC;
    v33 = v31 | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
    if ( v32 >= 4 )
    {
      v34 = v31 | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
      if ( v32 < 0xB )
        goto LABEL_37;
    }
    v34 = v31 | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
    switch ( v32 )
    {
      case 2u:
        v34 = v33 | 0x20;
        break;
      case 3u:
        goto LABEL_54;
      case 0xBu:
        v34 = v33 | 0x800;
        *v30 = v33 | 0x800;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v31,
            11,
            109,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v10);
          v34 = *v30;
        }
        break;
      case 0xFu:
LABEL_54:
        v34 = v33 | 4;
        break;
    }
LABEL_37:
    LOWORD(v35) = v34 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
    v36 = Ulong & 0x3C00;
    *v30 = v35;
    if ( v36 == 2048 )
    {
      LOWORD(v35) = v35 | 0x200;
      *v30 = v35;
      v37 = v35;
    }
    else
    {
      v37 = v34 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
      if ( v36 == 3072 )
      {
        v37 = v35 | 0x400;
        *v30 = v35 | 0x400;
        LOWORD(v35) = v35 | 0x400;
      }
    }
    if ( (Ulong & 0xC000) != 0 )
    {
      v45 = v37 | 0x1000;
      *v30 = v45;
      LOWORD(v35) = v45;
    }
    v38 = v30[1] & 0xFFF8 | (Ulong >> 17) & 1 | (2 * ((Ulong >> 18) & 1));
    if ( v32 != 15 )
      v38 |= 4 * ((Ulong >> 22) & 1);
    v30[1] = v38 & 0xFFE7 | (8 * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1))));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = (unsigned __int16)v35;
      v53 = v35;
      LOBYTE(v35) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v35,
        11,
        110,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v53,
        v38 & 0xE7 | (8 * (((Ulong & 0x100000) != 0) | (2 * ((Ulong & 0x200000) != 0)))));
    }
    v39 = v54 + *(_QWORD *)(v3 + 48);
    if ( v32 == 15 )
    {
      _InterlockedOr((volatile signed __int32 *)(v39 + 64), 1u);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(v54 + *(_QWORD *)(v3 + 48) + 80),
        -100000000LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(v54 + *(_QWORD *)(v3 + 48) + 72),
        -10000000LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v46) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v46,
          11,
          111,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v10,
          Ulong);
      }
      v40 = 1;
    }
    else
    {
      _m_prefetchw((const void *)(v39 + 64));
      if ( (_InterlockedAnd((volatile signed __int32 *)(v39 + 64), 0xFFFFFFFE) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = 4;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v39,
            11,
            112,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v10,
            Ulong);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(v54 + *(_QWORD *)(v3 + 48) + 80),
          0LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(v54 + *(_QWORD *)(v3 + 48) + 72),
          0LL);
      }
      v40 = 0;
    }
    *(_DWORD *)(v6 + 4) = v40;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v16);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v7,
      11,
      105,
      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
  }
  *(_DWORD *)(v6 + 4) = -1073713152;
  v16 = -1073741810;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v16);
}
