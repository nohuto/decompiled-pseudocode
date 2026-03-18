/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A830 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C015981C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0159CA4 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015AEFC (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C015E880 (RIMGetPointerInputType.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0170C70 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0170D50 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171450 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0177428 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C0177580 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017E42C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017E4C0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017E514 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C017E5B8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C017E994 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C017E9EC (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  int v6; // r12d
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v9; // r8
  LARGE_INTEGER v10; // r9
  unsigned __int64 v11; // r13
  int v12; // edi
  __int64 active; // rax
  __int64 v14; // xmm1_8
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  _DWORD *v19; // rdi
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 ButtonContact; // rdi
  __int64 v25; // rcx
  int v26; // edx
  int v27; // edx
  int v29; // edx
  __int128 v30; // [rsp+40h] [rbp-29h] BYREF
  __int64 v31; // [rsp+50h] [rbp-19h]
  __int128 v32; // [rsp+58h] [rbp-11h] BYREF
  __int64 v33; // [rsp+68h] [rbp-1h]
  _BYTE v34[80]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v35; // [rsp+D8h] [rbp+6Fh]
  __int64 v37; // [rsp+E8h] [rbp+7Fh]

  v5 = 1;
  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v37 = *(_QWORD *)(a2 + 816) + 1LL;
  v35 = *(_DWORD *)(a2 + 788) + 1;
  if ( !gDeviceArbitrationType )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(
      0xFFFFF78000000004uLL,
      (LARGE_INTEGER)v7.QuadPart,
      (LARGE_INTEGER)v9.QuadPart,
      (LARGE_INTEGER)v10.QuadPart);
  v12 = RIMGetPointerInputType(a2);
  if ( v12 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v32, a2);
    v14 = *(_QWORD *)(active + 16);
    v30 = *(_OWORD *)active;
    v31 = v14;
    while ( 1 )
    {
      v15 = RIMCmActiveContactsEnd(v34, a2);
      v16 = *(_OWORD *)v15;
      v17 = *(_QWORD *)(v15 + 16);
      v18 = *(_QWORD *)v15;
      v33 = v17;
      v32 = v16;
      if ( (_QWORD)v30 == v18 && DWORD2(v30) == DWORD2(v32) && v31 == v33 )
        break;
      v19 = (_DWORD *)(v31 - 16);
      if ( (*(_DWORD *)(v31 + 16) & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v19) )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v20 = v19[13], (unsigned int)v11 <= v20 + 500)
          || !v20 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v19 + 662, a2, a3, 0LL) )
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
            RIMCmAddContactSuppressionReasons(a2, v19, 1LL);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v21) = 4;
              WPP_RECORDER_SF_dDD(
                v22,
                v21,
                v23,
                16,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *v19,
                v19[2],
                v19[665]);
            }
            RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v19, v37, v35, 1);
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v30);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed((__int64)a1, a2, v6) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v25, ButtonContact, 1LL);
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
            LOBYTE(v27) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v27, 1, 17, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
          }
          return 0;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v27, 1, 18, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
        }
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v37, v35, 1);
LABEL_36:
        RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v37, v35);
        v5 = RIMCompletePointerDeviceFrame(a1, *(struct RIMDEV **)(a2 + 16));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v29) = 4;
          WPP_RECORDER_SF_d((_DWORD)gRimLog, v29, 1, 20, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids, v5);
        }
        return v5;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v26, 1, 19, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
      }
    }
    if ( !v6 )
      return v5;
    goto LABEL_36;
  }
  return v5;
}
