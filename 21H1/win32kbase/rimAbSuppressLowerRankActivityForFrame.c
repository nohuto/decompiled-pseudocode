/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C016269C
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01630E0 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01620CC (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0162554 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01637AC (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C0167130 (RIMGetPointerInputType.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01793D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0179BB0 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017F558 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C017F6B0 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018655C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01866E8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0186AC4 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0186B1C (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  int v6; // r12d
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v8; // r13
  int v9; // edi
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  _DWORD *v16; // rdi
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 ButtonContact; // rdi
  __int64 v22; // rcx
  int v23; // edx
  int v24; // edx
  int v26; // edx
  __int128 v27; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+50h] [rbp-19h]
  __int128 v29; // [rsp+58h] [rbp-11h] BYREF
  __int64 v30; // [rsp+68h] [rbp-1h]
  _BYTE v31[80]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v32; // [rsp+D8h] [rbp+6Fh]
  __int64 v34; // [rsp+E8h] [rbp+7Fh]

  v5 = 1;
  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v34 = *(_QWORD *)(a2 + 816) + 1LL;
  v32 = *(_DWORD *)(a2 + 788) + 1;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL);
  v9 = RIMGetPointerInputType(a2);
  if ( v9 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v29, a2);
    v11 = *(_QWORD *)(active + 16);
    v27 = *(_OWORD *)active;
    v28 = v11;
    while ( 1 )
    {
      v12 = RIMCmActiveContactsEnd(v31, a2);
      v13 = *(_OWORD *)v12;
      v14 = *(_QWORD *)(v12 + 16);
      v15 = *(_QWORD *)v12;
      v30 = v14;
      v29 = v13;
      if ( (_QWORD)v27 == v15 && DWORD2(v27) == DWORD2(v29) && v28 == v30 )
        break;
      v16 = (_DWORD *)(v28 - 16);
      if ( (*(_DWORD *)(v28 + 16) & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v17 = v16[13], (unsigned int)v8 <= v17 + 500)
          || !v17 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v16 + 662, a2, a3, 0) )
          {
            if ( !v6 )
            {
              RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                    a1,
                                    *(_QWORD *)(a2 + 16),
                                    (LARGE_INTEGER)PerformanceCounter.QuadPart) )
                return 0;
              v6 = 1;
            }
            RIMCmAddContactSuppressionReasons(a2, v16, 1LL);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 4;
              WPP_RECORDER_SF_dDD(
                v19,
                v18,
                v20,
                16,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *v16,
                v16[2],
                v16[665]);
            }
            RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v16, v34, v32, 1);
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v27);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed((__int64)a1, a2, v6) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v22, ButtonContact, 1LL);
      if ( !v6 )
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 17, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
          }
          return 0;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 18, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
        }
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v34, v32, 1);
LABEL_36:
        RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v34, v32);
        v5 = RIMCompletePointerDeviceFrame(a1, *(struct RIMDEV **)(a2 + 16));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 4;
          WPP_RECORDER_SF_d((_DWORD)gRimLog, v26, 1, 20, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids, v5);
        }
        return v5;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, 19, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
      }
    }
    if ( !v6 )
      return v5;
    goto LABEL_36;
  }
  return v5;
}
