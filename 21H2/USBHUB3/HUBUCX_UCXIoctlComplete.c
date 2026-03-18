/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x1C00234D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000C19C (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_q @ 0x1C0013D04 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00144D4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0030374 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 */

char __fastcall HUBUCX_UCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 jj; // rax
  int v5; // esi
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  _QWORD *v15; // r8
  __int64 v16; // rdx
  unsigned int k; // ecx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r8
  _QWORD *m; // rax
  unsigned int n; // edx
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  unsigned int ii; // r8d
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned __int16 v30; // r9
  unsigned __int8 v31; // dl
  int v32; // esi
  unsigned int v33; // eax
  __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned int kk; // edx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  unsigned __int8 v45; // cf
  unsigned __int64 v46; // r8
  unsigned __int64 i; // rcx
  unsigned int j; // edx
  __int64 v49; // rdx
  __int64 v51; // [rsp+20h] [rbp-48h]
  __int64 v52; // [rsp+28h] [rbp-40h]
  __int64 v53; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  jj = (unsigned __int64)&retaddr;
  v5 = *(_DWORD *)(a3 + 8);
  v7 = 0;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        a2,
        5u,
        0xBu,
        (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
        *(_DWORD *)(a4 + 440),
        *(_DWORD *)(a3 + 8));
    v8 = *(unsigned int *)(a4 + 440);
    jj = (unsigned int)(v8 - 4788231);
    if ( (unsigned int)jj > 0x38 || (v9 = 0x100000001000001LL, !_bittest64(&v9, jj)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v53) = v5;
        LODWORD(v52) = *(_DWORD *)(a4 + 440);
        WPP_RECORDER_SF_Ld(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          v8,
          5u,
          0xCu,
          (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
          v52,
          v53);
      }
      v10 = *(unsigned __int64 **)(a4 + 8);
      jj = *v10;
      v11 = *(unsigned int *)(*v10 + 2592);
      if ( (v11 & 0x80u) != 0LL )
        LOBYTE(jj) = HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", v10 + 34);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
      {
        LODWORD(v52) = v5;
        LODWORD(v51) = *(_DWORD *)(a4 + 440);
        LOBYTE(jj) = McTemplateK0pqq_EtwWriteTransfer(
                       v11,
                       &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
                       (const GUID *)(a4 + 1516),
                       *(_QWORD *)(a4 + 24),
                       v51,
                       v52);
      }
    }
  }
  if ( *(_DWORD *)(a4 + 440) == 4788247 )
  {
    jj = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
           WdfDriverGlobals,
           *(_QWORD *)(a4 + 432),
           0LL);
    if ( (*(_DWORD *)(jj + 32) & 3) != 0 )
    {
      v49 = *(_QWORD *)(a4 + 2416);
      *(_DWORD *)(a4 + 1564) = -2147481856;
      v5 = -1073741823;
      LOBYTE(jj) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
                     WdfDriverGlobals,
                     v49,
                     -10000000LL);
    }
    else
    {
      if ( v5 >= 0 )
      {
        LOBYTE(jj) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
                       WdfDriverGlobals,
                       *(_QWORD *)(a4 + 2416),
                       0LL);
        goto LABEL_111;
      }
      if ( v5 == -1073741823 )
        v5 = -1073741670;
    }
    goto LABEL_109;
  }
  if ( *(_DWORD *)(a4 + 440) == 4788251 )
  {
    jj = *(_QWORD *)(a4 + 48);
    if ( jj )
    {
      v46 = jj + 16;
      jj = *(_QWORD *)(jj + 16);
      for ( i = jj - 8; v46 != jj; i = jj - 8 )
      {
        for ( j = 0; j < *(_DWORD *)(i + 24); ++j )
        {
          if ( *(_DWORD *)(i + 72LL * j + 48) == 5 )
            *(_DWORD *)(i + 72LL * j + 48) = 6;
        }
        jj = *(_QWORD *)(i + 8);
      }
    }
    goto LABEL_101;
  }
  if ( *(_DWORD *)(a4 + 440) != 4788255 )
  {
    if ( *(_DWORD *)(a4 + 440) != 4788259 )
    {
      if ( *(_DWORD *)(a4 + 440) == 4788267 )
      {
        if ( (*(_DWORD *)(a4 + 1644) & 0x4000000) != 0 )
        {
          v38 = *(_QWORD *)(a4 + 16);
          if ( v38 )
          {
            if ( *(_DWORD *)(v38 + 4) == 1 )
            {
              v39 = v38 + 456;
              if ( *(_QWORD *)(v38 + 488) && (LODWORD(jj) = *(_DWORD *)(v38 + 496), (jj & 2) != 0) )
              {
                *(_BYTE *)(v38 + 536) = 1;
                v40 = *(_QWORD *)(v38 + 544);
                v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v40,
                        off_1C0067120);
                *(_QWORD *)v41 = v39;
                *(_QWORD *)(v41 + 16) = a4;
                *(_DWORD *)(v41 + 8) = 1;
                LOBYTE(jj) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(
                               WdfDriverGlobals,
                               v40);
                v7 = 1;
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                LOBYTE(jj) = WPP_RECORDER_SF_q(
                               *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                               4u,
                               2u,
                               0xDu,
                               (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
                               v42);
              }
            }
          }
        }
        goto LABEL_101;
      }
      if ( *(_DWORD *)(a4 + 440) != 4788279 )
        goto LABEL_101;
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
              WdfDriverGlobals,
              *(_QWORD *)(a4 + 432),
              0LL);
      v13 = *(_QWORD *)(a4 + 48);
      v14 = v12;
      if ( v13 )
      {
        v15 = (_QWORD *)(v13 + 16);
        v16 = *v15 - 8LL;
        if ( v15 != (_QWORD *)*v15 )
        {
          do
          {
            for ( k = 0; k < *(_DWORD *)(v16 + 24); ++k )
            {
              if ( *(_DWORD *)(v16 + 72LL * k + 48) == 5 )
                *(_DWORD *)(v16 + 72LL * k + 48) = 6;
            }
            v18 = *(_QWORD **)(v16 + 8);
            v16 = (__int64)(v18 - 1);
          }
          while ( v15 != v18 );
        }
      }
      v19 = *(_QWORD *)(a4 + 56);
      if ( v19 )
      {
        v20 = (_QWORD *)(v19 + 16);
        for ( m = *(_QWORD **)(v19 + 16); ; m = (_QWORD *)*m )
        {
          v23 = m - 1;
          if ( v20 == m )
            break;
          for ( n = 0; n < *((_DWORD *)v23 + 6); ++n )
          {
            if ( LODWORD(v23[9 * n + 6]) == 5 )
              LODWORD(v23[9 * n + 6]) = 6;
          }
        }
      }
      v24 = *(_QWORD *)(a4 + 72);
      if ( v24 )
      {
        for ( ii = 0; ii < *(_DWORD *)(v24 + 24); *(_DWORD *)(v24 + 72 * v26 + 48) = 6 )
          v26 = ii++;
      }
      v27 = *(_DWORD *)(v14 + 76);
      if ( !v27 )
        goto LABEL_45;
      if ( (*(_DWORD *)(v14 + 72) & 4) != 0 )
      {
        v28 = *(unsigned __int16 *)(a4 + 2208);
        if ( v28 <= v27 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v53) = *(unsigned __int16 *)(a4 + 2208);
            v30 = 15;
            LODWORD(v52) = *(_DWORD *)(v14 + 76);
            v31 = 2;
            goto LABEL_43;
          }
        }
        else
        {
          v29 = v28 - v27;
          *(_DWORD *)(a4 + 2584) = v29;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v53) = v29;
            v30 = 14;
            v31 = 4;
            LODWORD(v52) = *(_DWORD *)(v14 + 76);
LABEL_43:
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              v31,
              5u,
              v30,
              (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
              v52,
              v53);
          }
        }
      }
      else if ( v5 >= 0 )
      {
        v33 = v27 + *(unsigned __int16 *)(a4 + 2208);
        *(_DWORD *)(a4 + 2584) = v33;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v53) = v33;
          LODWORD(v52) = *(_DWORD *)(v14 + 76);
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            4u,
            5u,
            0x10u,
            (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
            v52,
            v53);
        }
        goto LABEL_45;
      }
      *(_DWORD *)(a4 + 2584) = 0;
LABEL_45:
      if ( (*(_DWORD *)(v14 + 72) & 7) != 0 )
      {
        v5 = -1073741823;
        *(_DWORD *)(a4 + 1564) = -2147481856;
        if ( *(_WORD *)(a4 + 2208) )
        {
          memmove(
            (void *)(*(_QWORD *)(a4 + 136) + 8LL * *(unsigned int *)(a4 + 144)),
            *(const void **)(a4 + 120),
            8LL * *(unsigned int *)(a4 + 128));
          *(_DWORD *)(a4 + 144) += *(_DWORD *)(a4 + 128);
          v32 = 4024;
          *(_DWORD *)(a4 + 128) = 0;
          *(_DWORD *)(a4 + 1560) = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
LABEL_112:
          LOBYTE(jj) = HUBSM_AddEvent(a4 + 504, v32);
          return jj;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2416),
          -10000000LL);
      }
      if ( (*(_DWORD *)(a4 + 1636) & 0x8000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFF7FFF);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            4u,
            5u,
            0x11u,
            (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids);
        v34 = *(_QWORD *)(a4 + 2416);
        *(_DWORD *)(a4 + 1564) = -2147481856;
        v5 = -1073741823;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
          WdfDriverGlobals,
          v34,
          -10000000LL);
      }
      else if ( *(_DWORD *)(a4 + 112) && v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2416),
          0LL);
      }
      else if ( v5 == -1073741823 )
      {
        v5 = -1073741670;
      }
      jj = *(_QWORD *)(a4 + 48);
      if ( jj )
      {
        v35 = jj + 16;
        for ( jj = *(_QWORD *)(jj + 16); ; jj = *(_QWORD *)jj )
        {
          v37 = jj - 8;
          if ( v35 == jj )
            break;
          for ( kk = 0; kk < *(_DWORD *)(v37 + 24); ++kk )
          {
            if ( *(_DWORD *)(v37 + 72LL * kk + 48) == 3 )
              *(_DWORD *)(v37 + 72LL * kk + 48) = ((v5 >> 31) & 2) + 4;
          }
        }
      }
      *(_DWORD *)(a4 + 128) = 0;
      *(_DWORD *)(a4 + 112) = 0;
      *(_DWORD *)(a4 + 144) = 0;
LABEL_101:
      if ( v5 >= 0 )
        goto LABEL_111;
      goto LABEL_109;
    }
    if ( v5 >= 0 )
    {
      LOWORD(jj) = *(_WORD *)(a4 + 2210);
      *(_WORD *)(a4 + 2208) = jj;
      goto LABEL_111;
    }
    jj = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
           WdfDriverGlobals,
           *(_QWORD *)(a4 + 432),
           0LL);
    if ( (*(_DWORD *)(jj + 56) & 1) != 0 )
    {
      v32 = 4024;
      goto LABEL_112;
    }
LABEL_109:
    *(_DWORD *)(a4 + 1560) = v5;
    if ( !*(_DWORD *)(a4 + 1564) )
    {
      LODWORD(jj) = HUBPDO_GetUSBDErrorFromNTStatus(v5);
      *(_DWORD *)(a4 + 1564) = jj;
    }
    goto LABEL_111;
  }
  v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C00671E8);
  if ( v5 < 0 )
  {
    *(_DWORD *)(a4 + 2432) = 1073807361;
    LOBYTE(jj) = WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LODWORD(v51) = v5;
      LOBYTE(jj) = McTemplateK0pq_EtwWriteTransfer(
                     v43,
                     &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
                     (const GUID *)(a4 + 1516),
                     *(_QWORD *)(a4 + 24),
                     v51);
    }
    if ( (*(_DWORD *)(a4 + 1456) & 0x20000) != 0 && (*(_DWORD *)(a4 + 1636) & 0x10000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LOBYTE(jj) = WPP_RECORDER_SF_(
                       *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                       2u,
                       5u,
                       0x13u,
                       (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids);
      _InterlockedOr((volatile signed __int32 *)(a4 + 1636), 0x10000u);
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 88));
      goto LABEL_101;
    }
    goto LABEL_109;
  }
  jj = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         *(_QWORD *)(a4 + 432),
         0LL);
  v45 = _bittest((const signed __int32 *)(a4 + 1636), 0x10u);
  *(_DWORD *)(a4 + 1648) = *(_DWORD *)(jj + 28);
  if ( v45 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LOBYTE(jj) = WPP_RECORDER_SF_(
                     *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                     2u,
                     5u,
                     0x12u,
                     (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids);
    _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFEFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v44 + 88));
  }
LABEL_111:
  v32 = ((v5 >> 31) & 0xFFFFFFF8) + 4028;
  if ( !v7 )
    goto LABEL_112;
  return jj;
}
