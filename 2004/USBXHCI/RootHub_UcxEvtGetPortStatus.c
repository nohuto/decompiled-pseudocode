/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x1C00122E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0012E70 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0032568 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003DB84 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rdi
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // r15d
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned int Ulong; // ebx
  char v18; // cl
  unsigned __int16 *v19; // r12
  unsigned int v20; // esi
  int v21; // edx
  unsigned int v22; // ebp
  __int16 v23; // cx
  __int16 v24; // r8
  int v25; // edx
  int v26; // eax
  __int16 v27; // cx
  __int16 v28; // cx
  __int64 v29; // rdx
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  int v32; // eax
  int v34; // edx
  __int16 v35; // cx
  unsigned __int16 v36; // r8
  __int16 v37; // cx
  int v38; // edx
  unsigned int v39; // eax
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // eax
  int v43; // r9d
  unsigned __int16 v44; // cx
  int v45; // edx
  unsigned __int16 v46; // cx
  __int16 v47; // ax
  int v48; // edx
  int v49; // r9d
  int v50; // edx
  int v51; // r8d
  char v52; // [rsp+28h] [rbp-C0h]
  __int64 v53; // [rsp+70h] [rbp-78h]
  __int64 v54; // [rsp+70h] [rbp-78h]
  __int64 v55; // [rsp+78h] [rbp-70h]
  _OWORD v56[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-48h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060248);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(v7 + 88);
  v55 = v8;
  if ( *(_BYTE *)(v7 + 537) && KeGetCurrentIrql() )
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
  if ( Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    v11 = *(unsigned __int16 *)(v9 + 130);
    v12 = 8;
    v13 = *(unsigned __int16 *)(v9 + 132);
    if ( v11 != 2 )
      v12 = 4;
    if ( *(_BYTE *)(v9 + 128) != 0xA3
      || *(_BYTE *)(v9 + 129)
      || (_WORD)v11 && v11 != 2
      || !*(_WORD *)(v9 + 132)
      || v13 > *(_DWORD *)(v4 + 16)
      || *(unsigned __int16 *)(v9 + 134) != v12 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = BYTE1(v11);
        v49 = 106;
        v51 = (unsigned __int8)v11;
        goto LABEL_92;
      }
LABEL_93:
      v20 = -1073741823;
      *(_DWORD *)(v9 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v20);
    }
    v14 = 16LL * (v13 - 1);
    v15 = 104LL * (v13 - 1);
    Ulong = XilRegister_ReadUlong(v8, v14 + *(_QWORD *)(v4 + 40));
    v53 = v15;
    v18 = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v15 + 13);
    if ( v18 == 2 )
    {
      if ( !*(_WORD *)(v9 + 130) )
      {
        if ( Ulong != -1 )
        {
          v19 = *(unsigned __int16 **)(v9 + 40);
          v20 = 0;
          *(_DWORD *)v19 = 0;
          v21 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = 4;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v21,
              11,
              108,
              (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
              v13,
              Ulong);
            v21 = *v19;
          }
          v22 = (Ulong >> 5) & 0xF;
          LOWORD(v21) = v21 & 0xFFFC;
          v23 = v21 | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
          if ( v22 >= 4 )
          {
            v24 = v21 | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
            if ( v22 < 0xB )
              goto LABEL_18;
          }
          v24 = v21 | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
          switch ( v22 )
          {
            case 2u:
              v24 = v23 | 0x20;
              break;
            case 3u:
              goto LABEL_57;
            case 0xBu:
              v24 = v23 | 0x800;
              *v19 = v23 | 0x800;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v21) = 2;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                  v21,
                  11,
                  109,
                  (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
                  v13);
                v24 = *v19;
              }
              break;
            case 0xFu:
LABEL_57:
              v24 = v23 | 4;
              break;
          }
LABEL_18:
          LOWORD(v25) = v24 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
          v26 = (Ulong >> 10) & 0xF;
          *v19 = v25;
          if ( v26 == 2 )
          {
            LOWORD(v25) = v25 | 0x200;
            *v19 = v25;
            v27 = v25;
          }
          else
          {
            v27 = v24 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
            if ( v26 == 3 )
            {
              v27 = v25 | 0x400;
              *v19 = v25 | 0x400;
              LOWORD(v25) = v25 | 0x400;
            }
          }
          if ( (Ulong & 0xC000) != 0 )
          {
            v44 = v27 | 0x1000;
            *v19 = v44;
            LOWORD(v25) = v44;
          }
          v28 = v19[1] & 0xFFF8 | (Ulong >> 17) & 1 | (2 * ((Ulong >> 18) & 1));
          if ( v22 != 15 )
            v28 |= 4 * ((Ulong >> 22) & 1);
          v19[1] = v28 & 0xFFE7 | (8 * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1))));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = (unsigned __int16)v25;
            v52 = v25;
            LOBYTE(v25) = 4;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
              v25,
              11,
              110,
              (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
              v52,
              v28 & 0xE7 | (8 * (((Ulong & 0x100000) != 0) | (2 * ((Ulong & 0x200000) != 0)))));
          }
          v29 = v53 + *(_QWORD *)(v4 + 48);
          if ( v22 == 15 )
          {
            _InterlockedOr((volatile signed __int32 *)(v29 + 64), 1u);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v4 + 48) + v53 + 80),
              -100000000LL);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v4 + 48) + v53 + 72),
              -10000000LL);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v45) = 4;
              WPP_RECORDER_SF_dd(
                *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                v45,
                11,
                111,
                (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
                v13,
                Ulong);
            }
            v32 = 1;
          }
          else
          {
            _m_prefetchw((const void *)(v29 + 64));
            v30 = *(_DWORD *)(v29 + 64);
            do
            {
              v31 = v30;
              v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 64), 0, v30);
            }
            while ( v31 != v30 );
            if ( v30 == 1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v29) = 4;
                WPP_RECORDER_SF_dd(
                  *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
                  v29,
                  11,
                  112,
                  (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
                  v13,
                  Ulong);
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v4 + 48) + v53 + 80),
                0LL);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v4 + 48) + v53 + 72),
                0LL);
            }
            v32 = 0;
          }
          *(_DWORD *)(v9 + 4) = v32;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v20);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = 107;
LABEL_80:
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v16,
            11,
            v43,
            (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids);
          goto LABEL_81;
        }
        goto LABEL_81;
      }
LABEL_88:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v49 = 119;
        v50 = *(unsigned __int8 *)(v9 + 134);
        v51 = *(unsigned __int8 *)(v9 + 133);
LABEL_92:
        WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v50, v51, v49);
        goto LABEL_93;
      }
      goto LABEL_93;
    }
    if ( v18 != 3 )
      goto LABEL_88;
    if ( Ulong == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = 113;
        goto LABEL_80;
      }
LABEL_81:
      LOBYTE(v16) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v4 + 8), v16);
      *(_DWORD *)(v9 + 4) = -1073713152;
      v20 = -1073741810;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v20);
    }
    v20 = 0;
    v54 = *(_QWORD *)(v9 + 40);
    *(_DWORD *)v54 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v16,
        11,
        114,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
        v13,
        Ulong);
    }
    if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v4, v13) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v34) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v34,
          11,
          115,
          (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
          v13);
      }
      v46 = *(_WORD *)v54 & 0xFC04 | 0x2A0;
      *(_WORD *)(v54 + 2) &= 0xFF06u;
      v47 = *(_WORD *)(v54 + 2);
      *(_WORD *)v54 = v46;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = v46;
        LOBYTE(v48) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v48,
          11,
          116,
          (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
          v46,
          v47);
      }
    }
    else
    {
      v35 = Ulong & 1 | *(_WORD *)v54 & 0xFE04 | (2
                                                * ((Ulong >> 1) & 1 | (4
                                                                     * ((Ulong >> 3) & 1 | (2
                                                                                          * ((Ulong >> 4) & 1 | (2 * ((Ulong >> 5) & 0xF))))))));
      if ( ((2
           * ((Ulong >> 1) & 1 | (unsigned __int16)(4
                                                  * ((Ulong >> 3) & 1 | (2
                                                                       * ((Ulong >> 4) & 1 | (2 * ((Ulong >> 5) & 0xF)))))))) & 0x1E0) == 0x1E0 )
        v35 = Ulong & 1 | *(_WORD *)v54 & 0xFE04 | (2
                                                  * (((Ulong & 2) != 0) | (unsigned __int8)(4
                                                                                          * (((Ulong & 8) != 0) | (2 * (((Ulong & 0x10) != 0) | (2 * ((Ulong >> 5) & 0xF)))))))) & 0x1F | 0x100;
      if ( (Ulong & 0x1000000) != 0 )
        v35 = v35 & 0xFE1F | 0x140;
      v36 = v35 ^ (v35 ^ Ulong & 0xFE00) & 0x200;
      *(_WORD *)v54 = v36;
      v37 = *(_WORD *)(v54 + 2) & 0xFF06 | (Ulong >> 17) & 1 | (8
                                                              * ((Ulong >> 20) & 1 | (2
                                                                                    * ((Ulong >> 21) & 1 | (2 * ((Ulong >> 19) & 1 | (2 * ((Ulong >> 22) & 1 | (2 * ((Ulong >> 23) & 1))))))))));
      *(_WORD *)(v54 + 2) = v37;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = v36;
        LOBYTE(v38) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          v38,
          11,
          117,
          (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
          v36,
          v37);
      }
      if ( *(_WORD *)(v9 + 130) == 2 )
      {
        v39 = XilRegister_ReadUlong(v55, v14 + *(_QWORD *)(v4 + 40) + 8LL);
        v40 = v54;
        *(_DWORD *)(v54 + 4) = 0;
        if ( *(_WORD *)(*(_QWORD *)(v4 + 48) + v15 + 54) || (Ulong & 0x3C00) != 0x400 )
          v41 = (Ulong & 0x3C00 | (Ulong >> 4) & 0x3C0) >> 6;
        else
          v41 = 68;
        v42 = v41 | (v39 >> 8) & 0xFF00;
        *(_DWORD *)(v54 + 4) = v42;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v40) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v40,
            11,
            118,
            (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
            v42);
        }
      }
    }
    *(_DWORD *)(v9 + 4) = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v10,
        11,
        105,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids);
    }
    *(_DWORD *)(v9 + 4) = -1073713152;
    v20 = -1073741810;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v20);
}
