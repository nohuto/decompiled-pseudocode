/*
 * XREFs of ?Start@CMonitor@@QEAAJXZ @ 0x18010382C
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061704 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x1800FA32C (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FAAE8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FBDFC (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FEF00 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180100900 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1801023A0 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180102484 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x18010263C (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057894 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 *     ??0?$CComQIPtr@UIMMDeviceEnumeratorInternal@@$1?_GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800FFFF4 (--0-$CComQIPtr@UIMMDeviceEnumeratorInternal@@$1-_GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742@@3U__.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x18010035C (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180100458 (-AddHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?AllocateBytes@?$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1801004C8 (-AllocateBytes@-$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x180100748 (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180104134 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CMonitor::Start(CMonitor *this)
{
  CMonitor *v1; // r14
  HRESULT v2; // edi
  CAudioSessionManager *v3; // rcx
  int v4; // r9d
  double v6; // xmm3_8
  double v7; // xmm4_8
  double v8; // xmm3_8
  unsigned int v9; // r13d
  double v10; // xmm4_8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // r8d
  double v14; // xmm3_8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  void **v18; // rax
  void **v19; // r15
  void **v20; // rbx
  int v21; // eax
  void **v22; // rax
  void **v23; // r15
  void **v24; // rbx
  HRESULT *v25; // rbx
  __int64 v26; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-88h] BYREF
  char v29; // [rsp+48h] [rbp-80h]
  unsigned __int64 v30; // [rsp+50h] [rbp-78h]
  LPCRITICAL_SECTION v31; // [rsp+58h] [rbp-70h] BYREF
  char v32; // [rsp+60h] [rbp-68h]
  void **v33; // [rsp+68h] [rbp-60h] BYREF
  void **v34; // [rsp+70h] [rbp-58h]
  HRESULT *v35; // [rsp+78h] [rbp-50h] BYREF
  CMonitor *v36; // [rsp+D0h] [rbp+8h] BYREF
  void **v37; // [rsp+D8h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v39; // [rsp+E8h] [rbp+20h]

  v36 = this;
  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v29 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, v1);
    v3 = WPP_GLOBAL_Control;
  }
  v4 = *((_DWORD *)v1 + 14);
  if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v3 + 7) & 0x800000) != 0
      && *((_BYTE *)v3 + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)v3 + 2), 0x3Cu, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, v4);
    }
LABEL_97:
    if ( v29 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v2;
  }
  if ( *((_BYTE *)v1 + 61)
    && CMonitor::GetPowerStatus(v1, (unsigned __int8 *)&v37)
    && ((unsigned __int8)v37 & 0xFD) == 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids);
    }
  }
  else
  {
    ppv = 0LL;
    v26 = 0LL;
    v39 = 0LL;
    LODWORD(v37) = 0;
    v2 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v2 < 0 )
      goto LABEL_39;
    ATL::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742>::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742>(
      &v27,
      (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))ppv);
    if ( v27 )
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v27 + 88LL))(v27, 1LL);
    v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, *((_QWORD *)v1 + 22), &v26);
    if ( v27 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v2 < 0
      || (v2 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v26 + 24LL))(
                 v26,
                 &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
                 1LL),
          v2 < 0)
      || (v2 = (*(__int64 (__fastcall **)(__int64, void ***))(*(_QWORD *)v39 + 120LL))(v39, &v37), v2 < 0)
      || !(_DWORD)v37 )
    {
LABEL_39:
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      *((_DWORD *)v1 + 116) = GetTickCount();
      v6 = (double)((int)*((_QWORD *)v1 + 55) / 10000);
      v7 = v6 * ((double)*(int *)(*((_QWORD *)v1 + 13) + 4LL) / 1000.0);
      v8 = v6 * ((double)*(int *)(*((_QWORD *)v1 + 26) + 4LL) / 1000.0);
      v9 = *((_DWORD *)v1 + 32);
      v10 = v7 / (double)(int)v9;
      v11 = 0LL;
      if ( v10 >= 9.223372036854776e18 )
      {
        v10 = v10 - 9.223372036854776e18;
        if ( v10 < 9.223372036854776e18 )
          v11 = 0x8000000000000000uLL;
      }
      v12 = v11 + (unsigned int)(int)v10;
      v27 = v12;
      v13 = *((_DWORD *)v1 + 62);
      v14 = v8 / (double)v13;
      v15 = 0LL;
      if ( v14 >= 9.223372036854776e18 )
      {
        v14 = v14 - 9.223372036854776e18;
        if ( v14 < 9.223372036854776e18 )
          v15 = 0x8000000000000000uLL;
      }
      v16 = v15 + (unsigned int)(int)v14;
      v30 = v16;
      if ( v9 <= v13 )
        v9 = v13;
      LODWORD(v26) = v9;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x3Au,
          (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
          v16 + v12 + 1);
      }
      v31 = (LPCRITICAL_SECTION)((char *)v1 + 400);
      v32 = 0;
      ATL::CCritSecLock::Lock(&v31);
      LODWORD(v37) = 0;
      v17 = 0LL;
      while ( 1 )
      {
        LODWORD(ppv) = v17;
        if ( v17 >= v16 + v27 + 1 )
          break;
        v18 = (void **)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v19 = v18;
        if ( v18 )
          v18[4] = 0LL;
        else
          v19 = 0LL;
        v20 = v19;
        if ( v19 )
        {
          v21 = (int)v37;
          *(_DWORD *)v19 = (_DWORD)v37;
          LODWORD(v37) = v21 + 1;
          LODWORD(v39) = v21 + 1;
          *((_DWORD *)v19 + 2) = v9;
          *((_DWORD *)v19 + 3) = v9;
          *((_DWORD *)v19 + 1) = 0;
          *((_DWORD *)v19 + 6) = 0;
          ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(v19 + 4, v9 * *((_QWORD *)v1 + 56));
          if ( v19[4] )
          {
            try
            {
              v2 = 0;
              v20 = 0LL;
              v34 = 0LL;
              v33 = v19;
              ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
                (__int64 *)v1 + 38,
                (__int64)&v33);
            }
            catch ( ATL::CAtlException *v35 )
            {
              v25 = v35;
              if ( *v35 == -1073741571 )
                _o__resetstkoflw();
              v1 = v36;
              v2 = *v25;
              LODWORD(v37) = v39;
              v20 = v34;
              v9 = v26;
            }
          }
          else
          {
            v2 = -2147024882;
            CMonitor::SampleDataBlock::`scalar deleting destructor'(v19);
          }
        }
        else
        {
          v2 = -2147024882;
        }
        if ( v20 )
          CMonitor::SampleDataBlock::`scalar deleting destructor'(v20);
        v17 = (unsigned int)((_DWORD)ppv + 1);
        v16 = v30;
      }
      if ( v2 >= 0 )
      {
        v22 = (void **)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v23 = v22;
        if ( v22 )
          v22[4] = 0LL;
        else
          v23 = 0LL;
        v24 = v23;
        if ( v23 )
        {
          *(_DWORD *)v23 = (_DWORD)v37;
          *((_DWORD *)v23 + 2) = v9;
          *((_DWORD *)v23 + 3) = v9;
          *((_DWORD *)v23 + 6) = 0;
          ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(v23 + 4, v9 * *((_QWORD *)v1 + 56));
          *((_DWORD *)v23 + 1) = 2;
          v23[2] = 0LL;
          if ( v23[4] )
          {
            v2 = 0;
            v24 = 0LL;
            ppv = 0LL;
            v37 = v23;
            ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
              (__int64 *)v1 + 44,
              (__int64)&v37);
          }
          else
          {
            v2 = -2147024882;
            CMonitor::SampleDataBlock::`scalar deleting destructor'(v23);
          }
        }
        else
        {
          v2 = -2147024882;
        }
        if ( v24 )
          CMonitor::SampleDataBlock::`scalar deleting destructor'(v24);
      }
      if ( v32 )
        LeaveCriticalSection(v31);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, CMonitor **))(**((_QWORD **)v1 + 23) + 48LL))(
               *((_QWORD *)v1 + 23),
               &v36);
        if ( v2 < 0 )
          goto LABEL_94;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void ***))(**((_QWORD **)v1 + 24) + 24LL))(
               *((_QWORD *)v1 + 24),
               (unsigned int)(*((_DWORD *)v1 + 62) - (_DWORD)v36),
               &v37);
        if ( v2 < 0 )
          goto LABEL_94;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 24) + 32LL))(
               *((_QWORD *)v1 + 24),
               (unsigned int)(*((_DWORD *)v1 + 62) - (_DWORD)v36),
               2LL);
        if ( v2 < 0 )
          goto LABEL_94;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Bu, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids);
        }
        *((_DWORD *)v1 + 14) = 3;
        v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 10) + 80LL))(*((_QWORD *)v1 + 10));
        if ( v2 < 0
          || (v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 23) + 80LL))(*((_QWORD *)v1 + 23)), v2 < 0) )
        {
LABEL_94:
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x3Du,
              (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
              v2);
          }
          CMonitor::Stop(v1);
        }
      }
      goto LABEL_97;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids);
    }
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  if ( v29 )
    LeaveCriticalSection(lpCriticalSection);
  return 1LL;
}
