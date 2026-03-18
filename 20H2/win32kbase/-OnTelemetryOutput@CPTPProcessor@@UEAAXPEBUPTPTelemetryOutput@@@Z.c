/*
 * XREFs of ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A1560
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0072028 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00CBBF0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 *     EtwTracePTPElasticDragModeStart @ 0x1C0126190 (EtwTracePTPElasticDragModeStart.c)
 *     EtwTracePTPElasticDragModeStop @ 0x1C01261C0 (EtwTracePTPElasticDragModeStop.c)
 *     EtwTraceTouchPadAAP @ 0x1C0126940 (EtwTraceTouchPadAAP.c)
 *     EtwTraceTouchPadCurtainState @ 0x1C0126A10 (EtwTraceTouchPadCurtainState.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C019FD04 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A0F94 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A14F8 (-OnNewSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1C01A2068 (-SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z.c)
 *     ApiSetTraceLoggingPTPWarpBack @ 0x1C01CB328 (ApiSetTraceLoggingPTPWarpBack.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CPTPProcessor::OnTelemetryOutput(
        CPTPProcessor *this,
        const struct PTPTelemetryOutput *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // edx
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  __int16 v16; // si
  __int16 v17; // bp
  unsigned __int16 *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // edx
  int v25; // edx
  unsigned __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 *v31; // [rsp+58h] [rbp-30h] BYREF
  __int16 v32; // [rsp+98h] [rbp+10h] BYREF
  __int16 v33; // [rsp+A0h] [rbp+18h] BYREF
  int v34; // [rsp+A8h] [rbp+20h] BYREF

  v5 = *(_DWORD *)a2;
  if ( v5 )
  {
    v7 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v8 = *((_DWORD *)a2 + 1);
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  v13 = v12 - 1;
                  if ( v13 )
                  {
                    v14 = v13 - 1;
                    if ( v14 )
                    {
                      v15 = (unsigned int)(v14 - 1);
                      if ( (_DWORD)v15 )
                      {
                        if ( (_DWORD)v15 == 4 )
                        {
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v7, a3, a4);
                          if ( !*((_BYTE *)this + 2060) )
                          {
                            *((_BYTE *)this + 2060) = 1;
                            DbgkWerCaptureLiveKernelDump(
                              L"win32kbase.sys",
                              400LL,
                              17LL,
                              (char *)this - 232,
                              *((_QWORD *)this + 35),
                              *((int *)a2 + 2),
                              0LL,
                              0LL,
                              0);
                          }
                          v16 = 0;
                          v17 = 0;
                          v18 = 0LL;
                          v19 = HMValidateHandleNoSecure(*((_QWORD *)this + 30), 19);
                          if ( v19 )
                          {
                            if ( *(_QWORD *)(v19 + 480) )
                            {
                              v20 = *(_QWORD *)(v19 + 464);
                              if ( v20 )
                              {
                                v16 = *(_WORD *)(v20 + 110);
                                v18 = (unsigned __int16 *)(v19 + 208);
                                v17 = *(_WORD *)(v20 + 112);
                              }
                            }
                          }
                          if ( (unsigned int)dword_1C0243250 > 5
                            && tlgKeywordOn((__int64)&dword_1C0243250, 0x400000000000LL) )
                          {
                            v34 = *((_DWORD *)a2 + 2);
                            v30 = 0x1000000LL;
                            v31 = v18;
                            v32 = v17;
                            v33 = v16;
                            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
                              v21,
                              byte_1C02186B9,
                              v22,
                              v23,
                              (__int64)&v34,
                              (__int64)&v33,
                              (__int64)&v32,
                              &v31,
                              (__int64)&v30);
                          }
                        }
                      }
                      else
                      {
                        ApiSetTraceLoggingPTPWarpBack(
                          *((unsigned int *)a2 + 2),
                          *(_QWORD *)((char *)a2 + 12),
                          *(_QWORD *)((char *)a2 + 20),
                          *((unsigned int *)a2 + 7));
                      }
                    }
                    else
                    {
                      v24 = *((_DWORD *)a2 + 2);
                      if ( v24 )
                      {
                        if ( v24 == 1 )
                          qword_1C0251B58 = *(_QWORD *)((char *)a2 + 12);
                      }
                      else
                      {
                        qword_1C0251B50 = *(_QWORD *)((char *)a2 + 12);
                      }
                    }
                  }
                  else
                  {
                    v25 = *((_DWORD *)a2 + 2);
                    v26 = *(_QWORD *)((char *)a2 + 12);
                    if ( v25 )
                    {
                      if ( v25 == 1 )
                        qword_1C0251B48 += v26;
                    }
                    else
                    {
                      qword_1C0251B30 += v26;
                      if ( v26 > qword_1C0251B38 )
                        qword_1C0251B38 = v26;
                      if ( !qword_1C0251B40 || v26 < qword_1C0251B40 )
                        qword_1C0251B40 = v26;
                    }
                  }
                }
                else
                {
                  PTPTelemetry::Usage::SetLastAction(*((unsigned int *)a2 + 2));
                }
              }
              else if ( qword_1C024ACE8 < qword_1C024EDD8 )
              {
                qword_1C024ACE8 = *((_QWORD *)a2 + 1);
              }
            }
            else
            {
              PTPTelemetry::Usage::HandlePTPTelemetry();
            }
          }
          else
          {
            PTPTelemetry::Usage::OnEndSession(*((_QWORD *)a2 + 1));
          }
        }
        else
        {
          PTPTelemetry::Usage::OnNewSession(*((_QWORD *)a2 + 1));
        }
      }
    }
    else
    {
      v27 = *((_DWORD *)a2 + 1);
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = (unsigned int)(v28 - 1);
          if ( (_DWORD)v29 )
          {
            if ( (_DWORD)v29 == 1 )
              EtwTracePTPElasticDragModeStop(v29);
          }
          else
          {
            EtwTracePTPElasticDragModeStart(v29);
          }
        }
        else
        {
          EtwTraceTouchPadCurtainState(*((unsigned int *)a2 + 2), v7, a3);
        }
      }
      else
      {
        EtwTraceTouchPadAAP(
          *((_DWORD *)a2 + 2),
          *((_DWORD *)a2 + 3),
          *((_DWORD *)a2 + 4),
          *((_DWORD *)a2 + 5),
          *((_DWORD *)a2 + 6));
      }
    }
  }
  else
  {
    _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, *((_DWORD *)a2 + 1), 1);
  }
}
