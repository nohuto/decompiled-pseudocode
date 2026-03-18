/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C00128A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0007380 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0013F4C (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0033A48 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003F064 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rbp
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // edx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // r13d
  __int64 v15; // r12
  __int64 v16; // rdx
  unsigned int Ulong; // ebx
  char v18; // cl
  int v19; // r9d
  unsigned __int16 *v20; // r15
  int v21; // edx
  int v22; // r12d
  unsigned __int16 v23; // cx
  int v24; // edx
  int v25; // ecx
  __int16 v26; // ax
  unsigned __int16 v27; // ax
  __int16 v28; // cx
  __int64 v29; // rdx
  int v30; // edx
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  __int64 v33; // r15
  int v34; // edx
  unsigned __int16 v35; // cx
  __int16 v36; // ax
  int v37; // edx
  __int16 v38; // cx
  unsigned int v39; // r9d
  unsigned __int16 v40; // r8
  __int16 v41; // cx
  int v42; // edx
  unsigned int v43; // eax
  int v44; // edx
  unsigned int v45; // ecx
  int v46; // eax
  int v47; // r9d
  int v48; // edx
  int v49; // r8d
  char v51; // [rsp+28h] [rbp-D0h]
  __int64 v52; // [rsp+70h] [rbp-88h]
  __int64 v53; // [rsp+78h] [rbp-80h]
  __int64 v54; // [rsp+80h] [rbp-78h]
  _OWORD v56[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-48h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(v7 + 88);
  v54 = v8;
  if ( *(_BYTE *)(v7 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v57 = 0LL;
  memset(v56, 0, sizeof(v56));
  LOWORD(v56[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v56);
  v9 = *((_QWORD *)&v56[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v10,
        11,
        105,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    }
    *(_DWORD *)(v9 + 4) = -1073713152;
    v11 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v11);
  }
  v12 = *(unsigned __int16 *)(v9 + 130);
  v13 = 8;
  v14 = *(unsigned __int16 *)(v9 + 132);
  if ( v12 != 2 )
    v13 = 4;
  if ( *(_BYTE *)(v9 + 128) != 0xA3
    || *(_BYTE *)(v9 + 129)
    || (_WORD)v12 && v12 != 2
    || !*(_WORD *)(v9 + 132)
    || v14 > *(_DWORD *)(v4 + 16)
    || *(unsigned __int16 *)(v9 + 134) != v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = BYTE1(v12);
      v47 = 106;
      v49 = (unsigned __int8)v12;
      goto LABEL_91;
    }
LABEL_92:
    v11 = -1073741823;
    *(_DWORD *)(v9 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v11);
  }
  v53 = 16LL * (v14 - 1);
  v15 = 112LL * (v14 - 1);
  Ulong = XilRegister_ReadUlong(v8, v53 + *(_QWORD *)(v4 + 40));
  v52 = v15;
  v18 = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v15 + 13);
  if ( v18 != 2 )
  {
    if ( v18 == 3 )
    {
      if ( Ulong != -1 )
      {
        v33 = *(_QWORD *)(v9 + 40);
        v11 = 0;
        *(_DWORD *)v33 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v16,
            11,
            114,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v14,
            Ulong);
        }
        if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v4, v14) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v34,
              11,
              115,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v14);
          }
          v35 = *(_WORD *)v33 & 0xFC04 | 0x2A0;
          *(_WORD *)(v33 + 2) &= 0xFF06u;
          v36 = *(_WORD *)(v33 + 2);
          *(_WORD *)v33 = v35;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v37 = v35;
            LOBYTE(v37) = 4;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v37,
              11,
              116,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v35,
              v36);
            *(_DWORD *)(v9 + 4) = 0;
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                     WdfDriverGlobals,
                     a2,
                     v11);
          }
        }
        else
        {
          v38 = Ulong & 1 | *(_WORD *)v33 & 0xFE04 | (2
                                                    * ((Ulong >> 1) & 1 | (4
                                                                         * ((Ulong >> 3) & 1 | (2
                                                                                              * ((2
                                                                                                * ((Ulong >> 5) & 0xF)) | (Ulong >> 4) & 1))))));
          if ( ((2
               * ((Ulong >> 1) & 1 | (unsigned __int16)(4
                                                      * ((Ulong >> 3) & 1 | (2
                                                                           * ((2 * ((Ulong >> 5) & 0xF)) | (Ulong >> 4) & 1)))))) & 0x1E0) == 0x1E0 )
            v38 = Ulong & 1 | *(_WORD *)v33 & 0xFE04 | (2
                                                      * (((Ulong & 2) != 0) | (unsigned __int8)(4
                                                                                              * (((Ulong & 8) != 0) | (2 * ((2 * ((Ulong >> 5) & 0xF)) | ((Ulong & 0x10) != 0))))))) & 0x1F | 0x100;
          if ( (Ulong & 0x1000000) != 0 )
            v38 = v38 & 0xFE1F | 0x140;
          v39 = Ulong >> 22;
          v40 = v38 ^ (v38 ^ Ulong & 0xFE00) & 0x200;
          *(_WORD *)v33 = v40;
          v41 = *(_WORD *)(v33 + 2) & 0xFF06 | (Ulong >> 17) & 1 | (8
                                                                  * ((Ulong >> 20) & 1 | (2
                                                                                        * ((Ulong >> 21) & 1 | (2 * ((Ulong >> 19) & 1 | (2 * (((Ulong & 0x400000) != 0) | (unsigned __int16)(2 * ((Ulong >> 23) & 1))))))))));
          *(_WORD *)(v33 + 2) = v41;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v42 = v40;
            LOBYTE(v42) = 4;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v42,
              11,
              117,
              (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
              v40,
              v41);
            LOBYTE(v39) = Ulong >> 22;
          }
          if ( *(_DWORD *)(*(_QWORD *)(v4 + 48) + v15 + 108) && ((Ulong >> 5) & 0xF) == 6 && (v39 & 1) != 0 )
            *(_WORD *)(v33 + 2) |= 0x80u;
          if ( *(_WORD *)(v9 + 130) == 2 )
          {
            v43 = XilRegister_ReadUlong(v54, *(_QWORD *)(v4 + 40) + v53 + 8);
            *(_DWORD *)(v33 + 4) = 0;
            if ( *(_WORD *)(*(_QWORD *)(v4 + 48) + v15 + 54) || (Ulong & 0x3C00) != 0x400 )
              v45 = (Ulong & 0x3C00 | (Ulong >> 4) & 0x3C0) >> 6;
            else
              v45 = 68;
            v46 = v45 | (v43 >> 8) & 0xFF00;
            *(_DWORD *)(v33 + 4) = v46;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v44) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v44,
                11,
                118,
                (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
                v46);
            }
          }
        }
        *(_DWORD *)(v9 + 4) = 0;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v11);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_61;
      v19 = 113;
      goto LABEL_60;
    }
LABEL_87:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v47 = 119;
      v48 = *(unsigned __int8 *)(v9 + 134);
      v49 = *(unsigned __int8 *)(v9 + 133);
LABEL_91:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v48, v49, v47);
      goto LABEL_92;
    }
    goto LABEL_92;
  }
  if ( *(_WORD *)(v9 + 130) )
    goto LABEL_87;
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_61:
      LOBYTE(v16) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v4 + 8), v16);
      *(_DWORD *)(v9 + 4) = -1073713152;
      v11 = -1073741810;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    }
    v19 = 107;
LABEL_60:
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v16,
      11,
      v19,
      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    goto LABEL_61;
  }
  v20 = *(unsigned __int16 **)(v9 + 40);
  v11 = 0;
  *(_DWORD *)v20 = 0;
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v21,
      11,
      108,
      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
      v14,
      Ulong);
    v21 = *v20;
  }
  v22 = (Ulong >> 5) & 0xF;
  LOWORD(v21) = v21 & 0xFFFC;
  v23 = v21 | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
  if ( v22 == 2 )
  {
    v23 |= 0x20u;
  }
  else
  {
    switch ( (Ulong >> 5) & 0xF )
    {
      case 3u:
        goto LABEL_31;
      case 0xBu:
        v23 |= 0x800u;
        *v20 = v23;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v21,
            11,
            109,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v14);
          v23 = *v20;
        }
        break;
      case 0xFu:
LABEL_31:
        v23 |= 4u;
        break;
    }
  }
  LOWORD(v24) = v23 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
  v25 = (Ulong >> 10) & 0xF;
  *v20 = v24;
  if ( v25 == 2 )
  {
    LOWORD(v24) = v24 | 0x200;
    *v20 = v24;
    v26 = v24;
  }
  else
  {
    v26 = v24;
    if ( v25 == 3 )
    {
      v26 = v24 | 0x400;
      *v20 = v24 | 0x400;
      LOWORD(v24) = v24 | 0x400;
    }
  }
  if ( (Ulong & 0xC000) != 0 )
  {
    v27 = v26 | 0x1000;
    *v20 = v27;
    LOWORD(v24) = v27;
  }
  v28 = v20[1] & 0xFFF8 | (Ulong >> 17) & 1 | (2 * ((Ulong >> 18) & 1));
  if ( v22 != 15 )
    v28 |= 4 * ((Ulong >> 22) & 1);
  v20[1] = v28 & 0xFFE7 | (8 * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1))));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = (unsigned __int16)v24;
    v51 = v24;
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v24,
      11,
      110,
      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
      v51,
      v28 & 0xE7 | (8 * (((Ulong & 0x100000) != 0) | (2 * ((Ulong & 0x200000) != 0)))));
  }
  v29 = v52 + *(_QWORD *)(v4 + 48);
  if ( v22 == 15 )
  {
    _InterlockedOr((volatile signed __int32 *)(v29 + 64), 1u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v4 + 48) + v52 + 80),
      -100000000LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v4 + 48) + v52 + 72),
      -10000000LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v30,
        11,
        111,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v14,
        Ulong);
    }
    *(_DWORD *)(v9 + 4) = 1;
  }
  else
  {
    _m_prefetchw((const void *)(v29 + 64));
    v31 = *(_DWORD *)(v29 + 64);
    do
    {
      v32 = v31;
      v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 64), 0, v31);
    }
    while ( v32 != v31 );
    if ( v31 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v29,
          11,
          112,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v14,
          Ulong);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(*(_QWORD *)(v4 + 48) + v52 + 80),
        0LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(*(_QWORD *)(v4 + 48) + v52 + 72),
        0LL);
    }
    *(_DWORD *)(v9 + 4) = 0;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}
