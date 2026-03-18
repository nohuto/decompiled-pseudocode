/*
 * XREFs of HUBMUX_CreatePSM @ 0x1C000E9AC
 * Callers:
 *     HUBMUX_CreateChildPSMs @ 0x1C000EF44 (HUBMUX_CreateChildPSMs.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C000E808 (WPP_RECORDER_SF_qqd.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

unsigned __int64 __fastcall HUBMUX_CreatePSM(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // esi
  __int64 v7; // rax
  int v8; // r9d
  __int64 *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 Timer; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-89h]
  unsigned __int64 v22; // [rsp+40h] [rbp-69h] BYREF
  __int128 v23; // [rsp+48h] [rbp-61h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+58h] [rbp-51h]
  __int64 v25; // [rsp+60h] [rbp-49h]
  __int128 v26; // [rsp+68h] [rbp-41h]
  void *v27; // [rsp+78h] [rbp-31h]
  __int128 v28; // [rsp+80h] [rbp-29h] BYREF
  __int128 v29; // [rsp+90h] [rbp-19h]
  __int64 v30; // [rsp+A0h] [rbp-9h]
  __int128 v31; // [rsp+A8h] [rbp-1h] BYREF
  __int128 v32; // [rsp+B8h] [rbp+Fh]
  char pszDest[16]; // [rsp+C8h] [rbp+1Fh] BYREF

  v22 = 0LL;
  *(_QWORD *)&v23 = 56LL;
  v30 = 0LL;
  v27 = off_1C00662E8;
  v4 = 0LL;
  v26 = *(unsigned __int64 *)(a1 + 16);
  *((_QWORD *)&v23 + 1) = HUBMISC_EvtPsmCleanup;
  v24 = HUBMISC_EvtPsmDestroy;
  v28 = 0LL;
  v29 = 0LL;
  v25 = 0x100000002LL;
  v31 = 0LL;
  v32 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, unsigned __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         &v23,
         &v22);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        4u,
        0xAu,
        (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids,
        v5);
    v22 = 0LL;
    goto LABEL_22;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v7,
    "PSM Tag",
    141LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v22,
         off_1C00662E8);
  memset((void *)(v4 + 8), 0, 0x5B0uLL);
  *(_QWORD *)v4 = a1;
  *(_OWORD *)(v4 + 200) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 216) = *((_OWORD *)a2 + 1);
  *(_QWORD *)(v4 + 232) = *((_QWORD *)a2 + 4);
  v8 = *(_DWORD *)(a1 + 96);
  v21 = *a2;
  *(_QWORD *)&v31 = 48LL;
  pszDest[0] = 0;
  HIDWORD(v32) = 16;
  *(_QWORD *)&v32 = v4;
  BYTE8(v32) = 1;
  *((_QWORD *)&v31 + 1) = 0x20000000400LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d port%d", v8, v21);
  v9 = (__int64 *)(v4 + 1432);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v31, v4 + 1432) < 0 )
    *v9 = *(_QWORD *)(a1 + 2520);
  v10 = *(_QWORD *)(a1 + 16);
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0x100000001LL;
  v26 = v22;
  v23 = 0LL;
  LODWORD(v23) = 56;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v10);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v23,
          v11,
          v4 + 16);
  v6 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v13 = 11;
    goto LABEL_10;
  }
  *(_QWORD *)(v4 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                           WdfDriverGlobals,
                           *(_QWORD *)(v4 + 16));
  KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 1112));
  v14 = *(_QWORD *)v4;
  *(_DWORD *)(v4 + 1152) = 0;
  *(_DWORD *)(v4 + 1224) = 0;
  *(_QWORD *)(v4 + 1232) = v4;
  *(_QWORD *)(v4 + 1240) = HUBSM_AddPsm20Event;
  v15 = *(_QWORD *)(v14 + 248);
  *(_QWORD *)(v4 + 1272) = v14;
  *(_QWORD *)(v4 + 1304) = v15;
  Timer = ExAllocateTimer(HUBMISC_PsmEventTimer, v4, 4LL);
  *(_QWORD *)(v4 + 1312) = Timer;
  if ( Timer )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x80000) != 0 )
    {
      LODWORD(v29) = 0;
      DWORD2(v29) = 0;
      LODWORD(v28) = 40;
      v27 = 0LL;
      v24 = 0LL;
      v25 = 0x100000001LL;
      v26 = v22;
      *((_QWORD *)&v28 + 1) = HUBMISC_PsmResetCompletePollingTimer;
      v23 = 0LL;
      BYTE4(v29) = 1;
      LODWORD(v23) = 56;
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01015 + 2544))(
              WdfDriverGlobals,
              &v28,
              &v23,
              v4 + 240);
      v6 = v12;
      if ( v12 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v13 = 13;
LABEL_10:
        WPP_RECORDER_SF_d(*v9, 2u, 4u, v13, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids, v12);
        goto LABEL_22;
      }
    }
    v17 = *(_QWORD *)v4;
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v4 + 16LL));
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v17 + 496))(*(_QWORD *)(v17 + 248), v18, 1LL);
    *(_QWORD *)(v4 + 1264) = v19;
    if ( !v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*v9, 2u, 4u, 0xEu, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
      v6 = -1073741670;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xCu, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
  }
LABEL_22:
  if ( v6 >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        *(_QWORD *)(a1 + 2520),
        4u,
        3u,
        0xFu,
        (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids,
        a1,
        v4,
        *a2);
  }
  else if ( v22 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return 0LL;
  }
  return v22;
}
