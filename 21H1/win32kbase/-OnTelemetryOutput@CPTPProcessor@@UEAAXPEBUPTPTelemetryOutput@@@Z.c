/*
 * XREFs of ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A9640
 * Callers:
 *     <none>
 * Callees:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00546A8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00CC130 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 *     EtwTracePTPElasticDragModeStart @ 0x1C012E4D0 (EtwTracePTPElasticDragModeStart.c)
 *     EtwTracePTPElasticDragModeStop @ 0x1C012E500 (EtwTracePTPElasticDragModeStop.c)
 *     EtwTraceTouchPadAAP @ 0x1C012EC80 (EtwTraceTouchPadAAP.c)
 *     EtwTraceTouchPadCurtainState @ 0x1C012ED50 (EtwTraceTouchPadCurtainState.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01A7DE4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A9074 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A95D8 (-OnNewSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1C01AA148 (-SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z.c)
 *     ApiSetTraceLoggingPTPWarpBack @ 0x1C01D3628 (ApiSetTraceLoggingPTPWarpBack.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CPTPProcessor::OnTelemetryOutput(CPTPProcessor *this, const struct PTPTelemetryOutput *a2, __int64 a3)
{
  int v4; // edx
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  __int16 v15; // si
  __int16 v16; // bp
  unsigned __int16 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edx
  int v24; // edx
  unsigned __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 *v30; // [rsp+58h] [rbp-30h] BYREF
  __int16 v31; // [rsp+98h] [rbp+10h] BYREF
  __int16 v32; // [rsp+A0h] [rbp+18h] BYREF
  int v33; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(_DWORD *)a2;
  if ( v4 )
  {
    v6 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v7 = *((_DWORD *)a2 + 1);
        if ( v7 )
        {
          v8 = v7 - 1;
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
                      v14 = (unsigned int)(v13 - 1);
                      if ( (_DWORD)v14 )
                      {
                        if ( (_DWORD)v14 == 4 )
                        {
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
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
                          v15 = 0;
                          v16 = 0;
                          v17 = 0LL;
                          v18 = HMValidateHandleNoSecure(*((_QWORD *)this + 30), 19);
                          if ( v18 )
                          {
                            if ( *(_QWORD *)(v18 + 480) )
                            {
                              v19 = *(_QWORD *)(v18 + 464);
                              if ( v19 )
                              {
                                v15 = *(_WORD *)(v19 + 110);
                                v17 = (unsigned __int16 *)(v18 + 208);
                                v16 = *(_WORD *)(v19 + 112);
                              }
                            }
                          }
                          if ( (unsigned int)dword_1C024B250 > 5
                            && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL) )
                          {
                            v33 = *((_DWORD *)a2 + 2);
                            v29 = 0x1000000LL;
                            v30 = v17;
                            v31 = v16;
                            v32 = v15;
                            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
                              v20,
                              byte_1C0220098,
                              v21,
                              v22,
                              (__int64)&v33,
                              (__int64)&v32,
                              (__int64)&v31,
                              &v30,
                              (__int64)&v29);
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
                      v23 = *((_DWORD *)a2 + 2);
                      if ( v23 )
                      {
                        if ( v23 == 1 )
                          qword_1C0259B18 = *(_QWORD *)((char *)a2 + 12);
                      }
                      else
                      {
                        qword_1C0259B10 = *(_QWORD *)((char *)a2 + 12);
                      }
                    }
                  }
                  else
                  {
                    v24 = *((_DWORD *)a2 + 2);
                    v25 = *(_QWORD *)((char *)a2 + 12);
                    if ( v24 )
                    {
                      if ( v24 == 1 )
                        qword_1C0259B08 += v25;
                    }
                    else
                    {
                      qword_1C0259AF0 += v25;
                      if ( v25 > qword_1C0259AF8 )
                        qword_1C0259AF8 = v25;
                      if ( !qword_1C0259B00 || v25 < qword_1C0259B00 )
                        qword_1C0259B00 = v25;
                    }
                  }
                }
                else
                {
                  PTPTelemetry::Usage::SetLastAction(*((unsigned int *)a2 + 2));
                }
              }
              else if ( qword_1C0252CF8 < qword_1C0256DB8 )
              {
                qword_1C0252CF8 = *((_QWORD *)a2 + 1);
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
      v26 = *((_DWORD *)a2 + 1);
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          v28 = (unsigned int)(v27 - 1);
          if ( (_DWORD)v28 )
          {
            if ( (_DWORD)v28 == 1 )
              EtwTracePTPElasticDragModeStop(v28);
          }
          else
          {
            EtwTracePTPElasticDragModeStart(v28);
          }
        }
        else
        {
          EtwTraceTouchPadCurtainState(*((unsigned int *)a2 + 2), v6, a3);
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
