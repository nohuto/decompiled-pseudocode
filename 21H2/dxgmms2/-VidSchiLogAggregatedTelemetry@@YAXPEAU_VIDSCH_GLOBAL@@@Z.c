/*
 * XREFs of ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0016E38
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009B20 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@553333333333333AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C0033B2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U3@U1@.c)
 *     ?GetVSyncStatsNumMonitorPowerTransitions@DXGADAPTER@@QEAAII@Z @ 0x1C00341F0 (-GetVSyncStatsNumMonitorPowerTransitions@DXGADAPTER@@QEAAII@Z.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1C00342A4 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 */

void __fastcall VidSchiLogAggregatedTelemetry(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // r14d
  _DWORD *i; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // r15d
  _QWORD *v8; // r12
  unsigned int j; // esi
  DXGADAPTER *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // rcx
  __int16 v20[2]; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int VSyncStatsNumMonitorPowerTransitions; // [rsp+DCh] [rbp-7Ch] BYREF
  __int64 v22; // [rsp+E0h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+E8h] [rbp-70h] BYREF
  unsigned int v24; // [rsp+ECh] [rbp-6Ch] BYREF
  _QWORD v25[3]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+108h] [rbp-50h] BYREF
  __int64 v27; // [rsp+110h] [rbp-48h]
  __int64 v28; // [rsp+118h] [rbp-40h]
  char *v29; // [rsp+120h] [rbp-38h] BYREF
  __int64 v30; // [rsp+128h] [rbp-30h] BYREF
  __int64 v31; // [rsp+130h] [rbp-28h] BYREF
  __int64 v32; // [rsp+138h] [rbp-20h] BYREF
  __int64 v33; // [rsp+140h] [rbp-18h] BYREF
  __int64 v34; // [rsp+148h] [rbp-10h] BYREF
  __int64 v35; // [rsp+150h] [rbp-8h] BYREF
  __int64 v36; // [rsp+158h] [rbp+0h] BYREF
  __int64 v37; // [rsp+160h] [rbp+8h] BYREF
  __int64 v38; // [rsp+168h] [rbp+10h] BYREF
  __int64 v39; // [rsp+170h] [rbp+18h] BYREF
  __int64 v40; // [rsp+178h] [rbp+20h] BYREF
  __int64 v41; // [rsp+180h] [rbp+28h] BYREF
  __int64 v42; // [rsp+188h] [rbp+30h] BYREF
  __int64 v43; // [rsp+190h] [rbp+38h] BYREF
  __int64 v44; // [rsp+198h] [rbp+40h] BYREF
  char v45[272]; // [rsp+1A8h] [rbp+50h] BYREF

  v2 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned __int64)KeQueryTimeIncrement() * (v2 - *((_QWORD *)a1 + 301)) >= 0x19254D3800LL )
  {
    *((_QWORD *)a1 + 301) = v2;
    v3 = 0;
    memset(v45, 0, 0x104uLL);
    for ( i = (_DWORD *)*((_QWORD *)a1 + 37); i != (_DWORD *)((char *)a1 + 296); i = *(_DWORD **)i )
    {
      if ( !i[398] )
      {
        v5 = *((_QWORD *)i - 8);
        v6 = *(_QWORD *)(v5 + 2816);
        if ( v6 - *(_QWORD *)(v5 + 2824) > (unsigned __int64)v3 )
        {
          v3 = v6 - *(_DWORD *)(v5 + 2824);
          strcpy_s(v45, 0x104uLL, *(const char **)(v5 + 2648));
          v6 = *(_QWORD *)(v5 + 2816);
        }
        *(_QWORD *)(v5 + 2824) = v6;
      }
    }
    if ( *((_BYTE *)a1 + 2212) )
    {
      v7 = *((_DWORD *)a1 + 10);
      if ( !v7 )
        return;
    }
    else
    {
      v7 = 1;
    }
    v8 = (_QWORD *)((char *)a1 + 3200);
    for ( j = 0; j < v7; ++j )
    {
      v10 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
      v11 = (_QWORD *)*v8;
      memset(v25, 0, sizeof(v25));
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      VSyncStatsNumMonitorPowerTransitions = DXGADAPTER::GetVSyncStatsNumMonitorPowerTransitions(v10, j);
      if ( VSyncStatsNumMonitorPowerTransitions || v11[5513] )
      {
        DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), j, 1LL, v25);
        DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), j, 2LL, &v26);
        v12 = v27;
        v13 = v28;
        if ( *((_BYTE *)a1 + 59) )
        {
          v12 = v11[9809] + v27;
          v13 = v11[9810] + v28;
        }
        v22 = v13;
        if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
        {
          v23 = v3;
          v29 = v45;
          v30 = v11[9821];
          v31 = v11[9819];
          v32 = v11[9818];
          v33 = v11[9817];
          v34 = v11[9815];
          v35 = v11[9814];
          v36 = v11[9816];
          v37 = v22;
          LODWORD(v22) = *((unsigned __int8 *)a1 + 2212);
          v18 = *((_QWORD *)a1 + 2);
          v38 = v12;
          v39 = v17;
          v40 = v16;
          v41 = v15;
          v42 = v14;
          v24 = j;
          v19 = *(_QWORD *)(v18 + 404);
          v20[0] = 2;
          v43 = v19;
          v44 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v19,
            (unsigned int)&unk_1C0051E27,
            v14,
            v15,
            (__int64)&v44,
            (__int64)v20,
            (__int64)&v43,
            (__int64)&v22,
            (__int64)&v24,
            (__int64)&VSyncStatsNumMonitorPowerTransitions,
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v23);
        }
      }
      ++v8;
    }
  }
}
