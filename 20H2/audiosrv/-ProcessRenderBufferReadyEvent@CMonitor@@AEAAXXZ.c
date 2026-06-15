/*
 * XREFs of ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102F30
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x18010052C (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057894 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_qdd @ 0x1800CB358 (WPP_SF_qdd.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x1801003EC (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180100490 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?GetHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@2@XZ @ 0x180100720 (-GetHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@.c)
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x180101980 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180103668 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx_EtwEventWriteTransfer @ 0x180104704 (McTemplateU0pxx_EtwEventWriteTransfer.c)
 *     WPP_SF_qdDdigi @ 0x180104910 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x180144008 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x1801440B4 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::ProcessRenderBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // r14
  int v2; // r15d
  unsigned __int8 v3; // r8
  unsigned int v4; // ecx
  int v5; // ecx
  unsigned int v6; // r13d
  double *v7; // rbx
  unsigned __int8 v8; // r8
  double v9; // xmm6_8
  __int64 v10; // rcx
  double v11; // xmm0_8
  __int64 v12; // rax
  double v13; // xmm6_8
  double v14; // xmm7_8
  double v15; // xmm0_8
  __int64 v16; // rcx
  double v17; // xmm1_8
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // edi
  __int64 v21; // rax
  int v22; // edi
  _QWORD *Head; // rax
  ATL::CAtlException *v24; // rbx
  unsigned __int64 v25; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v26; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v28; // [rsp+38h] [rbp-B0h]
  __int64 v29; // [rsp+50h] [rbp-98h] BYREF
  __int64 v30; // [rsp+58h] [rbp-90h] BYREF
  void *v31; // [rsp+60h] [rbp-88h] BYREF
  __int64 v32; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp-78h] BYREF
  ATL::CAtlException *v34; // [rsp+78h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-68h] BYREF
  char v36; // [rsp+88h] [rbp-60h]
  int v38; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v39; // [rsp+100h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+108h] [rbp+20h] BYREF

  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 400);
  v36 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 23) + 48LL))(*((_QWORD *)v1 + 23), &v38);
  if ( v2 < 0 )
    goto LABEL_2;
  if ( *((_QWORD *)v1 + 46) )
    goto LABEL_14;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 25) + 32LL))(
         *((_QWORD *)v1 + 25),
         &v40,
         &v39);
  if ( v2 < 0 )
  {
LABEL_2:
    if ( v36 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    v4 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids);
    }
    AEWMILOG_GLITCH(v4, v1, v3, 0xDu, v40, v39, v27, v28);
    if ( (byte_18019F941 & 1) != 0 )
      McTemplateU0pxx_EtwEventWriteTransfer(v5, (unsigned int)&EVT_GLITCH_CM_RENDER, (_DWORD)v1, v40, v39);
    ShipAssert(90113LL, 0LL);
LABEL_14:
    while ( *((_QWORD *)v1 + 46) )
    {
      v6 = *((_DWORD *)v1 + 62) - v38;
      if ( !v6 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v22 = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>>::GetHead((_QWORD *)v1 + 44)
                          + 12LL);
          Head = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>>::GetHead((_QWORD *)v1 + 44);
          LODWORD(v26) = 0;
          LODWORD(v25) = v22;
          WPP_SF_qdd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x28u,
            (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
            *Head,
            v25,
            v26);
        }
        break;
      }
      v7 = *(double **)ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>>::GetHead((_QWORD *)v1 + 44);
      v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**((_QWORD **)v1 + 25) + 32LL))(
             *((_QWORD *)v1 + 25),
             &v40,
             &v30);
      if ( v2 < 0 )
        break;
      if ( (v40 & 0x8000000000000000uLL) != 0LL )
        v9 = (double)(int)(v40 & 1 | (v40 >> 1)) + (double)(int)(v40 & 1 | (v40 >> 1));
      else
        v9 = (double)(int)v40;
      v10 = *((_QWORD *)v1 + 32);
      if ( v10 < 0 )
      {
        v12 = *((_QWORD *)v1 + 32) & 1LL | ((unsigned __int64)v10 >> 1);
        v11 = (double)(int)v12 + (double)(int)v12;
      }
      else
      {
        v11 = (double)(int)v10;
      }
      v13 = v9 / v11;
      v14 = (double)*(int *)(*((_QWORD *)v1 + 13) + 4LL) * v13;
      if ( *((double *)v1 + 59) == 0.0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)v1 + 12) + 32LL))(
               *((_QWORD *)v1 + 12),
               &v29,
               v33);
        if ( v2 < 0 )
          break;
        if ( v29 < 0 )
          v15 = (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1))
              + (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1));
        else
          v15 = (double)(int)v29;
        v16 = *((_QWORD *)v1 + 17);
        if ( v16 < 0 )
        {
          v18 = *((_QWORD *)v1 + 17) & 1LL | ((unsigned __int64)v16 >> 1);
          v17 = (double)(int)v18 + (double)(int)v18;
        }
        else
        {
          v17 = (double)(int)v16;
        }
        *((double *)v1 + 59) = v15 / v17 - v7[2];
      }
      AEWMILOG_POSITION((int)v14, v1, v8, 6u, v25, *(int *)v7, (unsigned int)(int)v14, v6);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, v19, v7, *((_DWORD *)v7 + 3), *((_DWORD *)v7 + 1));
      }
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(int)GetTickCount() - (double)*((int *)v1 + 116)) & _xmm) > 30000.0 )
      {
        *((_DWORD *)v1 + 116) = GetTickCount();
        CMonitor::MeasureClockDrift(v1, v7[2], v13);
      }
      v20 = *((_DWORD *)v7 + 3) - *((_DWORD *)v7 + 6);
      if ( v20 >= v6 )
        v20 = v6;
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)v1 + 24) + 24LL))(
             *((_QWORD *)v1 + 24),
             v20,
             &v31);
      if ( v2 >= 0 )
      {
        memcpy_0(
          v31,
          (const void *)(*((_QWORD *)v7 + 4) + *((_QWORD *)v1 + 56) * *((unsigned int *)v7 + 6)),
          *((_QWORD *)v1 + 56) * v20);
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v1 + 24) + 32LL))(
               *((_QWORD *)v1 + 24),
               v20,
               *((_DWORD *)v7 + 1) & 2);
        if ( v2 >= 0 )
        {
          *((_DWORD *)v7 + 6) += v20;
          if ( *((_DWORD *)v7 + 6) == *((_DWORD *)v7 + 3) )
          {
            v39 = 0LL;
            v21 = ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 352);
            v2 = 0;
            try
            {
              v39 = 0LL;
              v32 = v21;
              ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
                (__int64 *)v1 + 38,
                (__int64)&v32);
            }
            catch ( ATL::CAtlException *v34 )
            {
              v24 = v34;
              if ( *(_DWORD *)v34 == -1073741571 )
                _o__resetstkoflw();
              LODWORD(v39) = *(_DWORD *)v24;
              v1 = this;
              v2 = v39;
            }
          }
          if ( v2 >= 0 )
          {
            v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 23) + 48LL))(*((_QWORD *)v1 + 23), &v38);
            if ( v2 >= 0 )
              continue;
          }
        }
      }
      break;
    }
    if ( v36 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x29u,
        (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
        v2);
    }
    CMonitor::AbortMonitor(v1);
  }
}
