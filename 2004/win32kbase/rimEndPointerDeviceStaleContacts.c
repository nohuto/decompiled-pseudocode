/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C017AF40
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C0179764 (RIMEndAllStaleContacts.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015CD90 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015D45C (WPP_RECORDER_SF_dDD.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01730A0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0173180 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0173880 (RIMStartPointerDeviceFrame.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0177860 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0178720 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0179858 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01799B0 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMCmActiveContactsBegin @ 0x1C01807D8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C01808F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0180944 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C0180C3C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180E1C (RIMCmIsContactDeliveringPointerData.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01818F8 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  int v7; // r12d
  int v8; // edi
  int v9; // r13d
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  _DWORD *v16; // rbx
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  _WORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // [rsp+28h] [rbp-91h]
  __int64 v29; // [rsp+30h] [rbp-89h]
  __int64 v30; // [rsp+38h] [rbp-81h]
  __int16 v31; // [rsp+60h] [rbp-59h] BYREF
  __int16 v32; // [rsp+62h] [rbp-57h] BYREF
  __int16 v33; // [rsp+64h] [rbp-55h] BYREF
  int v34; // [rsp+68h] [rbp-51h] BYREF
  int v35; // [rsp+6Ch] [rbp-4Dh] BYREF
  __int64 v36; // [rsp+70h] [rbp-49h]
  __int64 v37; // [rsp+78h] [rbp-41h] BYREF
  __int128 v38; // [rsp+80h] [rbp-39h] BYREF
  __int64 v39; // [rsp+90h] [rbp-29h]
  __int128 v40; // [rsp+98h] [rbp-21h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-11h]
  _BYTE v42[96]; // [rsp+B0h] [rbp-9h] BYREF
  char v43; // [rsp+120h] [rbp+67h] BYREF
  char v44; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v45; // [rsp+130h] [rbp+77h]
  unsigned int v46; // [rsp+138h] [rbp+7Fh]

  v46 = a4;
  v45 = a3;
  v4 = *(_QWORD *)(a2 + 480);
  v7 = 0;
  v8 = 0;
  v9 = *(_DWORD *)(v4 + 744) + *(_DWORD *)(v4 + 788);
  v36 = *(_QWORD *)(v4 + 752) + *(_QWORD *)(v4 + 816);
  active = RIMCmActiveContactsBegin(&v40, v4);
  v11 = *(_QWORD *)(active + 16);
  v38 = *(_OWORD *)active;
  v39 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v42, v4);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v41 = v14;
    v40 = v13;
    if ( (_QWORD)v38 == v15 && DWORD2(v38) == DWORD2(v40) && v39 == v41 )
      break;
    v16 = (_DWORD *)(v39 - 16);
    if ( (*(_DWORD *)(v39 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v38);
    if ( v46 > *(_DWORD *)(v4 + 744) + v16[11] )
    {
      v17 = *(_DWORD *)(v4 + 24);
      if ( (unsigned int)(v17 - 5) > 1 )
      {
        if ( (unsigned int)(v17 - 1) <= 3 )
          v8 = 1;
      }
      else
      {
        v8 = 2;
      }
      if ( (unsigned int)dword_1C0245170 > 5 && tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
      {
        v20 = *(_WORD **)(a2 + 464);
        v37 = 0x1000000LL;
        v34 = v18 - v16[581];
        v35 = v16[580];
        v43 = v19;
        v44 = 0;
        v31 = v20[57];
        v32 = v20[56];
        v33 = v20[55];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          (__int64)v20,
          byte_1C0217FD9,
          v18,
          v19,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v37);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) )
      {
        if ( !v7 )
        {
          RIMAbandonPointerDeviceFrame(a1, a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame(a1, a2, v45) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_29;
            LOBYTE(v23) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, 50, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
            break;
          }
          v7 = 1;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v30) = v16[665];
          LODWORD(v29) = v16[2];
          LODWORD(v28) = *v16;
          WPP_RECORDER_SF_dDD(
            v21,
            4u,
            v22,
            0x33u,
            (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
            v28,
            v29,
            v30);
        }
        v16[585] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame(a1, a2, (__int64)v16, v36, v9, 0);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v30) = v16[665];
          LODWORD(v29) = v16[2];
          LODWORD(v28) = *v16;
          WPP_RECORDER_SF_dDD(
            v21,
            4u,
            v22,
            0x31u,
            (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
            v28,
            v29,
            v30);
        }
        RIMCmDeactivateContact(v4, v16);
      }
    }
  }
  if ( v7 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer((const struct RIMDEV *)a2);
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, a2, v36, v9);
    RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2, v24, v25);
    RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 2LL, v26);
  }
LABEL_29:
  v27 = *(_QWORD *)(a1 + 856);
  if ( v27 )
  {
    if ( v8 )
    {
      PalmTelemetry::_ResetTelemetryData(*(PalmTelemetry **)(a1 + 856));
      if ( *(_DWORD *)v27 )
      {
        if ( v8 == 1 )
          *(_DWORD *)(v27 + 4) = 1;
        else
          *(_QWORD *)v27 = 0LL;
      }
    }
  }
}
