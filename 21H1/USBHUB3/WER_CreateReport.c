/*
 * XREFs of WER_CreateReport @ 0x1C003CA80
 * Callers:
 *     HUBMISC_CreateWerReport @ 0x1C0030D40 (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C007E5AC (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WER_UpdateThrottlePolicy @ 0x1C003C70C (WER_UpdateThrottlePolicy.c)
 *     WER_StoreDeviceContext @ 0x1C003C798 (WER_StoreDeviceContext.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C003EDF0 (TelemetryData_InsertTriageDataBlock.c)
 *     TelemetryData_CreateReport @ 0x1C003EF6C (TelemetryData_CreateReport.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     HUBREG_QueryDeviceWerThrottleMask @ 0x1C0081D10 (HUBREG_QueryDeviceWerThrottleMask.c)
 *     TelemetryData_SubmitReport @ 0x1C0086794 (TelemetryData_SubmitReport.c)
 */

__int64 __fastcall WER_CreateReport(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rdx
  int v6; // r13d
  __int64 v8; // rcx
  __int64 v9; // rsi
  int DeviceWerThrottleMask; // eax
  signed int inserted; // ebx
  int v12; // r15d
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int i; // ebx
  __int64 j; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 Report; // rax
  unsigned int v23; // r15d
  __int64 m; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // r15d
  __int64 k; // r14
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v46; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v47; // [rsp+34h] [rbp-3Dh] BYREF
  __int64 v48; // [rsp+38h] [rbp-39h] BYREF
  int v49; // [rsp+40h] [rbp-31h]
  __int64 v50; // [rsp+48h] [rbp-29h] BYREF
  char pszDest[16]; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v52[24]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v53; // [rsp+78h] [rbp+7h] BYREF

  v5 = *(_QWORD *)(a1 + 2520);
  v6 = a4;
  v8 = *(_QWORD *)(a1 + 16);
  v49 = a4;
  v9 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  memset(v52, 0, sizeof(v52));
  v48 = 0LL;
  v46 = 0;
  v50 = 0LL;
  v47 = 0;
  v53 = 0LL;
  DeviceWerThrottleMask = HUBREG_QueryDeviceWerThrottleMask(v8, v5);
  inserted = ((1 << (v6 & 0x1F)) & DeviceWerThrottleMask) != 0 ? 0xC0000001 : 0;
  if ( ((1 << (v6 & 0x1F)) & DeviceWerThrottleMask) != 0 )
    goto LABEL_75;
  v12 = *(unsigned __int16 *)(a1 + 2468);
  v13 = *(unsigned __int16 *)(a1 + 2466);
  inserted = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 2464));
  if ( inserted < 0 )
    goto LABEL_75;
  inserted = RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", v13);
  if ( inserted < 0 )
    goto LABEL_75;
  inserted = RtlStringCchPrintfA(&pszDest[10], 5uLL, "%04X", v12);
  if ( inserted < 0 )
    goto LABEL_75;
  v14 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v52 = a1;
  *(_OWORD *)&v52[8] = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v14);
  for ( i = 1; i <= *(unsigned __int16 *)(a1 + 48); ++i )
  {
    for ( j = *(_QWORD *)(a1 + 2360); ; j = *(_QWORD *)(v16 + 248) )
    {
      v16 = j - 248;
      if ( a1 == v16 - 2112 )
        break;
      if ( *(unsigned __int16 *)(v16 + 200) == i )
      {
        if ( v16 )
        {
          v19 = *(_QWORD *)(v16 + 1328);
          if ( v19 )
          {
            v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v16 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
              WdfDriverGlobals,
              v20,
              "WER Tag",
              245LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
            _InterlockedOr((volatile signed __int32 *)(v19 + 1636), 0x80000u);
            v15 = *(_QWORD *)(v19 + 16);
            if ( v15 )
            {
              v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                WdfDriverGlobals,
                v21,
                "WER Tag",
                251LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v19 + 16) + 32LL), 0x8000u);
            }
          }
        }
        break;
      }
    }
  }
  Report = TelemetryData_CreateReport(v16, v15, v6, (unsigned int)pszDest, a5);
  v9 = Report;
  if ( Report )
  {
    inserted = TelemetryData_InsertTriageDataBlock(Report, pszDest, 40LL);
    if ( inserted >= 0 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, a1, 2736LL);
      if ( inserted >= 0 )
      {
        inserted = TelemetryData_InsertTriageDataBlock(v9, &WPP_GLOBAL_Control, 8LL);
        if ( inserted >= 0 )
        {
          if ( !WPP_GLOBAL_Control
            || (inserted = TelemetryData_InsertTriageDataBlock(v9, WPP_GLOBAL_Control, 80LL), inserted >= 0) )
          {
            inserted = imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 2520), &v48, &v46, &v53);
            if ( inserted >= 0 )
            {
              inserted = TelemetryData_InsertTriageDataBlock(v9, v48, v46);
              if ( inserted >= 0 )
              {
                inserted = imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v50, &v47, &v53);
                if ( inserted >= 0 )
                {
                  inserted = TelemetryData_InsertTriageDataBlock(v9, v50, v47);
                  if ( inserted >= 0 )
                  {
                    if ( !*(_BYTE *)(a1 + 240)
                      || (v25 = *(_QWORD *)(a1 + 24)) == 0
                      || (inserted = TelemetryData_InsertTriageDataBlock(v9, v25, 336LL), inserted >= 0)
                      && ((v26 = *(_QWORD *)(a1 + 24), (v27 = *(_QWORD *)(v26 + 64)) == 0)
                       || (inserted = TelemetryData_InsertTriageDataBlock(v9, *(_QWORD *)(v26 + 64), 528LL),
                           inserted >= 0)
                       && ((v28 = *(_QWORD *)(v27 + 24)) == 0
                        || (inserted = WER_StoreDeviceContext(v9, v28), inserted >= 0))) )
                    {
                      v29 = *(_QWORD *)(a1 + 816);
                      if ( !v29
                        || (inserted = TelemetryData_InsertTriageDataBlock(v9, v29, *(unsigned __int16 *)(v29 + 2)),
                            inserted >= 0) )
                      {
                        v30 = *(_QWORD *)(a1 + 1256);
                        if ( !v30
                          || (inserted = TelemetryData_InsertTriageDataBlock(v9, v30, *(unsigned __int16 *)(v30 + 2)),
                              inserted >= 0) )
                        {
                          v31 = *(_QWORD *)(a1 + 2552);
                          if ( !v31
                            || (inserted = TelemetryData_InsertTriageDataBlock(
                                             v9,
                                             v31,
                                             *(unsigned __int16 *)(a1 + 2544)),
                                inserted >= 0) )
                          {
                            v32 = 1;
                            if ( *(_WORD *)(a1 + 48) )
                            {
                              while ( 2 )
                              {
                                for ( k = *(_QWORD *)(a1 + 2360); ; k = *(_QWORD *)(v34 + 248) )
                                {
                                  v34 = k - 248;
                                  if ( a1 == v34 - 2112 )
                                    break;
                                  if ( *(unsigned __int16 *)(v34 + 200) == v32 )
                                  {
                                    if ( v34 )
                                    {
                                      inserted = TelemetryData_InsertTriageDataBlock(v9, v34, 1464LL);
                                      if ( inserted < 0 )
                                        goto LABEL_18;
                                      v35 = *(_QWORD *)(v34 + 32);
                                      if ( v35 )
                                      {
                                        inserted = TelemetryData_InsertTriageDataBlock(
                                                     v9,
                                                     v35,
                                                     *(unsigned __int16 *)(v35 + 2));
                                        if ( inserted < 0 )
                                          goto LABEL_18;
                                      }
                                      inserted = imp_WppRecorderLogDumpLiveData(
                                                   WPP_GLOBAL_Control,
                                                   *(_QWORD *)(v34 + 1432),
                                                   &v48,
                                                   &v46,
                                                   &v53);
                                      if ( inserted < 0 )
                                        goto LABEL_18;
                                      inserted = TelemetryData_InsertTriageDataBlock(v9, v48, v46);
                                      if ( inserted < 0 )
                                        goto LABEL_18;
                                      v36 = *(_QWORD *)(v34 + 1328);
                                      if ( v36 )
                                      {
                                        inserted = WER_StoreDeviceContext(v9, v36);
                                        if ( inserted < 0 )
                                          goto LABEL_18;
                                      }
                                    }
                                    break;
                                  }
                                }
                                if ( ++v32 <= (unsigned int)*(unsigned __int16 *)(a1 + 48) )
                                  continue;
                                break;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_18:
  v23 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
    do
    {
      for ( m = *(_QWORD *)(a1 + 2360); ; m = *(_QWORD *)(v37 + 248) )
      {
        v37 = m - 248;
        if ( a1 == v37 - 2112 )
          break;
        if ( *(unsigned __int16 *)(v37 + 200) == v23 )
        {
          if ( v37 )
          {
            v38 = *(_QWORD *)(v37 + 1328);
            if ( v38 )
            {
              v39 = *(_QWORD *)(v37 + 1328);
              if ( (*(_DWORD *)(v38 + 1636) & 0x80000) != 0 )
              {
                _InterlockedAnd((volatile signed __int32 *)(v38 + 1636), 0xFFF7FFFF);
                v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v39);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                  WdfDriverGlobals,
                  v40,
                  "WER Tag",
                  234LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                v41 = *(_QWORD *)(v38 + 16);
                if ( v41 && (*(_DWORD *)(v41 + 32) & 0x8000) != 0 )
                {
                  _InterlockedAnd((volatile signed __int32 *)(v41 + 32), 0xFFFF7FFF);
                  v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v38 + 16));
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                    WdfDriverGlobals,
                    v42,
                    "WER Tag",
                    240LL,
                    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                }
              }
              else
              {
                v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v39);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                  WdfDriverGlobals,
                  v43,
                  "WER Tag",
                  245LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                _InterlockedOr((volatile signed __int32 *)(v38 + 1636), 0x80000u);
                if ( *(_QWORD *)(v38 + 16) )
                {
                  v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                    WdfDriverGlobals,
                    v44,
                    "WER Tag",
                    251LL,
                    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v38 + 16) + 32LL), 0x8000u);
                }
              }
            }
          }
          break;
        }
      }
      ++v23;
    }
    while ( v23 <= *(unsigned __int16 *)(a1 + 48) );
    LOBYTE(v6) = v49;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16));
  if ( inserted < 0 )
  {
LABEL_75:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        5u,
        0xBu,
        (__int64)&WPP_da8d3c15072a309c1475fbd55ea34768_Traceguids,
        inserted);
  }
  else
  {
    inserted = TelemetryData_SubmitReport(v9);
    if ( inserted >= 0 )
      WER_UpdateThrottlePolicy(*(_QWORD *)(a1 + 16), v6, *(_QWORD *)(a1 + 2520));
  }
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 8) )
    {
      ExFreePoolWithTag(*(PVOID *)v9, 0x74614454u);
      *(_QWORD *)v9 = 0LL;
      *(_DWORD *)(v9 + 8) = 0;
    }
    ExFreePoolWithTag((PVOID)v9, 0x74614454u);
  }
  return (unsigned int)inserted;
}
