/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18003C3B0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18003C860 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001F6C8 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18003B5A0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003C798 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003DF50 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800D0438 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800D8144 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer @ 0x18015AA14 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  char *v4; // rdi
  unsigned int i; // r14d
  void *v6; // rcx
  unsigned int j; // r14d
  void *v8; // rcx
  unsigned int k; // r14d
  void *v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  char v29; // al
  int v31; // eax
  __int64 v32; // rcx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v33; // rcx
  __int64 v34; // rcx
  int v35; // r9d
  unsigned int v36; // eax
  unsigned __int64 v37; // rtt
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rtt
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // rtt
  unsigned int v42; // [rsp+110h] [rbp-88h]
  bool v43; // [rsp+114h] [rbp-84h] BYREF
  _QWORD *v44; // [rsp+118h] [rbp-80h]
  __int64 v45; // [rsp+120h] [rbp-78h]
  unsigned __int64 v46; // [rsp+128h] [rbp-70h]
  unsigned __int64 v47; // [rsp+130h] [rbp-68h]
  __int64 v48; // [rsp+138h] [rbp-60h]
  unsigned __int64 v49; // [rsp+140h] [rbp-58h]
  unsigned __int64 v50; // [rsp+148h] [rbp-50h] BYREF
  CPartitionVerticalBlankScheduler *v51; // [rsp+158h] [rbp-40h] BYREF

  v51 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_UPDATE_TIMES_Start,
      a3,
      1LL,
      &v50);
  if ( *((_BYTE *)this + 5372)
    && *((_BYTE *)this + 5373)
    && (v31 = CPartitionVerticalBlankScheduler::Reset(this), v42 = v31, v31 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x44Eu, 0LL);
  }
  else
  {
    v4 = (char *)this + 304 * *((unsigned int *)this + 1254);
    memset_0(v4 + 152, 0, 0x90uLL);
    for ( i = 0; i < *((_DWORD *)v4 + 80); ++i )
      operator delete(*(void **)(*((_QWORD *)v4 + 37) + 8LL * i));
    v6 = (void *)*((_QWORD *)v4 + 37);
    *((_DWORD *)v4 + 80) = 0;
    if ( v6 != *((void **)v4 + 38) )
    {
      operator delete(v6);
      *((_QWORD *)v4 + 37) = *((_QWORD *)v4 + 38);
      *((_DWORD *)v4 + 79) = *((_DWORD *)v4 + 78);
    }
    for ( j = 0; j < *((_DWORD *)v4 + 88); ++j )
    {
      v33 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 41) + 8LL * j);
      if ( v33 )
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v33);
    }
    v8 = (void *)*((_QWORD *)v4 + 41);
    *((_DWORD *)v4 + 88) = 0;
    if ( v8 != *((void **)v4 + 42) )
    {
      operator delete(v8);
      *((_QWORD *)v4 + 41) = *((_QWORD *)v4 + 42);
      *((_DWORD *)v4 + 87) = *((_DWORD *)v4 + 86);
    }
    for ( k = 0; k < *((_DWORD *)v4 + 96); ++k )
    {
      v34 = *(_QWORD *)(*((_QWORD *)v4 + 45) + 8LL * k);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
    }
    v10 = (void *)*((_QWORD *)v4 + 45);
    *((_DWORD *)v4 + 96) = 0;
    if ( v10 != *((void **)v4 + 46) )
    {
      operator delete(v10);
      *((_QWORD *)v4 + 45) = *((_QWORD *)v4 + 46);
      *((_DWORD *)v4 + 95) = *((_DWORD *)v4 + 94);
    }
    CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    *(_QWORD *)(*((_QWORD *)this + 629) + 64LL) = *((_QWORD *)this + 1990);
    v11 = *((_QWORD *)this + 629);
    v12 = *(_QWORD *)(v11 + 288);
    if ( !*(_BYTE *)(v11 + 140) || *(_BYTE *)(v11 + 264) )
    {
      CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(this);
    }
    else
    {
      *(_QWORD *)(v11 + 56) = *(_QWORD *)(v11 + 128);
      *(_DWORD *)(*((_QWORD *)this + 629) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 629) + 120LL);
    }
    v13 = *(_QWORD *)(*((_QWORD *)this + 630) + 56LL);
    if ( v13 )
      v14 = ((v12 >> 4) + *(_QWORD *)(*((_QWORD *)this + 629) + 56LL) - v13) / v12;
    else
      v14 = 1LL;
    *((_QWORD *)this + 631) = v14;
    v15 = *((_QWORD *)this + 629);
    v16 = *(_QWORD *)(v15 + 56);
    v17 = *(_QWORD *)(v15 + 64);
    if ( v16 > v17
      || *(_BYTE *)(v15 + 140) && *(_QWORD *)(v15 + 128) < *(_QWORD *)(*((_QWORD *)this + 630) + 64LL)
      || v17 - v16 > 2 * v12 )
    {
      *(_QWORD *)(v15 + 56) = v17;
      v15 = *((_QWORD *)this + 629);
    }
    v18 = -1;
    v19 = *((_QWORD *)this + 631) + *(_QWORD *)(*((_QWORD *)this + 630) + 16LL);
    *(_QWORD *)(v15 + 16) = v19;
    v20 = 0;
    v21 = *((unsigned int *)this + 1257);
    v42 = 0;
    if ( (_DWORD)v21 == -1 )
    {
      v21 = *((unsigned int *)this + 1256);
      if ( (_DWORD)v21 != -1 )
      {
        v35 = ((_BYTE)v21 + 1) & 0xF;
        while ( (_DWORD)v21 != v35 )
        {
          v19 = 304LL * (unsigned int)v21;
          if ( *((_BYTE *)this + v19 + 290) )
            break;
          v36 = v21;
          if ( !*((_BYTE *)this + v19 + 289) )
            v36 = v18;
          v21 = ((_BYTE)v21 - 1) & 0xF;
          v18 = v36;
        }
      }
    }
    else
    {
      v22 = ((_BYTE)v21 + 1) & 0xF;
      if ( v22 != (_DWORD)v21 )
      {
        do
        {
          if ( v18 != -1 )
            break;
          v19 = v22;
          v23 = 304LL * v22;
          if ( *((_BYTE *)this + v23 + 289) && !*((_BYTE *)this + v23 + 290) )
            v18 = v22;
          v22 = ((_BYTE)v22 + 1) & 0xF;
        }
        while ( v22 != (_DWORD)v21 );
        v20 = 0;
      }
    }
    if ( v18 != -1 )
    {
      while ( 1 )
      {
        v24 = CPartitionVerticalBlankScheduler::RetireFrame(
                this,
                (CPartitionVerticalBlankScheduler *)((char *)this + 304 * v18 + 152),
                v18,
                &v43,
                0);
        v42 = v24;
        v20 = v24;
        if ( v24 < 0 )
          break;
        v18 = ((_BYTE)v18 + 1) & 0xF;
        if ( !v43 || v18 == *((_DWORD *)this + 1254) )
          goto LABEL_34;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v24, 0x63Au, 0LL);
      v20 = v42;
    }
LABEL_34:
    if ( v20 >= 0 )
    {
      *(_DWORD *)(*((_QWORD *)this + 629) + 32LL) = *(_DWORD *)(*((_QWORD *)this + 630) + 32LL) + 1;
      goto LABEL_36;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0x469u, 0LL);
  }
  v20 = v42;
LABEL_36:
  v25 = (_QWORD *)*((_QWORD *)this + 629);
  v48 = *((_QWORD *)this + 631);
  v26 = *((_QWORD *)this + 630);
  v44 = v25;
  v27 = *(_QWORD *)(v26 + 56);
  if ( v27 )
    v28 = v25[7] - v27;
  else
    v28 = v25[36];
  v29 = Microsoft_Windows_Dwm_CoreEnableBits;
  v45 = v28;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v37 = v25[9];
    v46 = (unsigned __int64)(10000000 * (v25[8] % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
        + 10000000 * (v25[8] / g_qpcFrequency.QuadPart);
    v38 = v25[7];
    v47 = 10000000 * (v37 / g_qpcFrequency.QuadPart)
        + 10000000 * (v37 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v39 = v25[31];
    v49 = 10000000 * (v38 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
        + 10000000 * (v38 / g_qpcFrequency.QuadPart);
    v40 = 10000000 * (v39 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
        + 10000000 * (v39 / g_qpcFrequency.QuadPart);
    v41 = v25[36];
    v50 = v40;
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer(
      v47 - v46,
      v49
    + 10000000 * (v41 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
    + 10000000 * (v41 / g_qpcFrequency.QuadPart)
    - v46,
      *((_DWORD *)v51 + 1254),
      *v44,
      *((_DWORD *)v44 + 8),
      v40,
      v44[31],
      *((_DWORD *)v44 + 12));
    v29 = Microsoft_Windows_Dwm_CoreEnableBits;
    v20 = v42;
  }
  if ( (v29 & 2) == 0 )
    return (unsigned int)v20;
  McGenEventWrite_EventWriteTransfer(
    &Microsoft_Windows_Dwm_Core_Provider_Context,
    &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop,
    v21,
    1LL,
    &v51);
  return v42;
}
