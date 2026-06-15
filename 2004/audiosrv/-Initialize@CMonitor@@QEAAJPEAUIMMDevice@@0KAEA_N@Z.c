/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18010165C
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FD420 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FFB90 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180058034 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800BE428 (WPP_SF_qd.c)
 *     WPP_SF_dd @ 0x1800C301C (WPP_SF_dd.c)
 *     WPP_SF_dg @ 0x1800C306C (WPP_SF_dg.c)
 *     WPP_SF_qq @ 0x1800CC120 (WPP_SF_qq.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x1800FB0B4 (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ??0?$CComQIPtr@UIAudioClient2@@$1?_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180100C04 (--0-$CComQIPtr@UIAudioClient2@@$1-_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@.c)
 *     ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180100C44 (--0-$CComQIPtr@UIAudioSessionControlInternal@@$1-_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U_.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x180101188 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180102A24 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x180104344 (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CMonitor::Initialize(
        CMonitor *this,
        struct IMMDevice *a2,
        struct IMMDevice *a3,
        __int64 a4,
        bool *a5)
{
  CMonitor *v7; // rsi
  int v8; // r13d
  int v9; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v12; // r13
  __int64 v13; // rcx
  struct IMMDevice *v14; // rbx
  int v15; // eax
  LPVOID v16; // rcx
  struct IMMDevice *v17; // rax
  CAudioSessionManager *v18; // rcx
  LPVOID v19; // rcx
  struct IMMDevice *v20; // rax
  struct _SECURITY_ATTRIBUTES *v21; // rdx
  struct _SECURITY_ATTRIBUTES *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _SECURITY_ATTRIBUTES *v25; // rdx
  HANDLE Thread; // rax
  signed int v27; // eax
  ATL::CAtlException *v29; // rbx
  ATL::CAtlException *v30; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-E8h]
  LPVOID v32; // [rsp+40h] [rbp-C8h] BYREF
  void *v33; // [rsp+48h] [rbp-C0h] BYREF
  CMonitor *v34; // [rsp+50h] [rbp-B8h]
  bool *v35; // [rsp+58h] [rbp-B0h]
  struct IMMDevice *v36; // [rsp+60h] [rbp-A8h] BYREF
  struct IMMDevice *v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  int v39; // [rsp+78h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-80h] BYREF
  char v42; // [rsp+90h] [rbp-78h]
  CMonitor *v43; // [rsp+98h] [rbp-70h]
  ATL::CAtlException *v44; // [rsp+A0h] [rbp-68h] BYREF
  ATL::CAtlException *v45; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE pvar[28]; // [rsp+B8h] [rbp-50h] BYREF
  int v47; // [rsp+D4h] [rbp-34h]

  v36 = a3;
  v37 = a2;
  v7 = this;
  v34 = this;
  v43 = this;
  v35 = a5;
  v40 = 0LL;
  v8 = 0x40000;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v42 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, v7);
  }
  if ( *((_DWORD *)v7 + 14) && *((_DWORD *)v7 + 14) != 6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids);
    }
    v9 = -2147467259;
    goto LABEL_135;
  }
  *v35 = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_QWORD *)v7 + 55) = 600000LL;
  ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, v7, 0LL);
  *((_QWORD *)v7 + 62) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, v9);
    }
    goto LABEL_134;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
      v7,
      ThreadpoolWork);
  }
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v40);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 24LL))(v40, &v39);
  if ( v9 < 0 )
    goto LABEL_135;
  if ( !v39 )
    v8 = 393216;
  LODWORD(v32) = v8;
  v12 = (_QWORD *)((char *)v7 + 80);
  ppv = (LPVOID *)((char *)v7 + 80);
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v37->lpVtbl->Activate)(v37, &IID_IAudioClient, 1LL);
  if ( v9 < 0 )
    goto LABEL_135;
  ppv = (LPVOID *)((char *)v7 + 184);
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(a3, &IID_IAudioClient, 1LL);
  if ( v9 < 0 )
    goto LABEL_135;
  ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
    &v33,
    (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v12);
  if ( v33 )
  {
    memset(&pvar[4], 0, 24);
    v47 = 0;
    *(_DWORD *)pvar = 32;
    *(_DWORD *)&pvar[16] = *((_DWORD *)v7 + 16);
    *(_DWORD *)&pvar[20] = *((_DWORD *)v7 + 17);
    v9 = (*(__int64 (__fastcall **)(void *, _BYTE *))(*(_QWORD *)v33 + 128LL))(v33, pvar);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
        *((_DWORD *)v7 + 16));
    }
    if ( v9 < 0 )
      goto LABEL_35;
  }
  ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
    &v38,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 23));
  v13 = v38;
  if ( v38 )
  {
    memset(&pvar[4], 0, 24);
    v47 = 0;
    *(_DWORD *)pvar = 32;
    *(_DWORD *)&pvar[16] = *((_DWORD *)v7 + 16);
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v38 + 128LL))(v38, pvar);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
        *((_DWORD *)v7 + 16));
    }
    if ( v9 < 0 )
    {
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
LABEL_35:
      if ( v33 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
      goto LABEL_134;
    }
    v13 = v38;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v33 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
  *v35 = 0;
  v14 = v37;
  v15 = CMonitor::MuteInputLineControls(v37, a3);
  if ( v15 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, v15);
  }
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64))v14->lpVtbl->GetId)(v14, (__int64)v7 + 72);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64))v36->lpVtbl->GetId)(v36, (__int64)v7 + 176);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 64LL))(*v12, (__int64)v7 + 104);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 23) + 64LL))(
         *((_QWORD *)v7 + 23),
         (__int64)v7 + 208);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v12 + 24LL))(
         *v12,
         0LL,
         (unsigned int)v32,
         *((_QWORD *)v7 + 55) / 2LL,
         0LL,
         *((_QWORD *)v7 + 13),
         0LL);
  if ( v9 == -2004287485 )
    *v35 = 1;
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v12 + 112LL))(
         *v12,
         &GUID_c8adbd64_e71e_48a0_a4de_185c395cd317,
         (__int64)v7 + 88);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v12 + 112LL))(
         *v12,
         &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
         (__int64)v7 + 96);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 32LL))(*v12, (__int64)v7 + 128);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 12) + 24LL))(
         *((_QWORD *)v7 + 12),
         (__int64)v7 + 136);
  if ( v9 < 0 )
    goto LABEL_135;
  v32 = 0LL;
  v9 = CoCreateInstance(
         &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
         0LL,
         0x17u,
         &GUID_0f0058a4_87be_41e6_bcd3_26b19f7e9177,
         &v32);
  if ( v9 < 0 )
    goto LABEL_67;
  v9 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, struct IMMDevice **, __int64 *))(*(_QWORD *)v32 + 56LL))(
         v32,
         *((_QWORD *)v7 + 9),
         0LL,
         &v36,
         &v38);
  if ( v9 < 0 )
    goto LABEL_67;
  *((double *)v7 + 18) = (double)(int)v36 / 10000.0;
  if ( v32 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v32 + 16LL))(v32);
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v12 + 112LL))(
         *v12,
         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
         (__int64)v7 + 112);
  if ( v9 < 0 )
    goto LABEL_135;
  v17 = (struct IMMDevice *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v36 = v17;
  if ( v17 )
  {
    v17->lpVtbl = (struct IMMDeviceVtbl *)&CMonitor::CMonitorNotification::`vftable';
    v17[1].lpVtbl = (struct IMMDeviceVtbl *)v7;
    LODWORD(v17[2].lpVtbl) = 1;
    HIDWORD(v17[2].lpVtbl) = 1;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 21,
    (CMonitor::CMonitorNotification *)v17);
  if ( !*((_QWORD *)v7 + 21) )
    goto LABEL_77;
  v32 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, LPVOID *))v37->lpVtbl->OpenPropertyStore)(v37, 0LL, &v32);
  if ( v9 < 0 )
    goto LABEL_67;
  memset(pvar, 0, 24);
  v9 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v32 + 40LL))(
         v32,
         &PKEY_MonitorPauseOnBattery,
         pvar);
  if ( v9 < 0 )
    goto LABEL_67;
  if ( *(_WORD *)pvar == 11 )
    *((_BYTE *)v7 + 61) = *(_WORD *)&pvar[8] == 0xFFFF;
  PropVariantClear((PROPVARIANT *)pvar);
  memset(pvar, 0, 24);
  v9 = (*(__int64 (__fastcall **)(LPVOID, const PROPERTYKEY *, _BYTE *))(*(_QWORD *)v32 + 40LL))(
         v32,
         &PKEY_AudioEndpoint_GUID,
         pvar);
  if ( v9 < 0
    || *(_WORD *)pvar == 31 && (v9 = CLSIDFromString(*(LPCOLESTR *)&pvar[8], (LPCLSID)((char *)v7 + 152)), v9 < 0) )
  {
LABEL_67:
    v16 = v32;
LABEL_68:
    if ( v16 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_134;
  }
  PropVariantClear((PROPVARIANT *)pvar);
  if ( v32 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v32 + 16LL))(v32);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 23)
                                                                                            + 24LL))(
         *((_QWORD *)v7 + 23),
         0LL,
         3624140800LL,
         *((_QWORD *)v7 + 55) / 2LL,
         0LL,
         *((_QWORD *)v7 + 13),
         (__int64)v7 + 152);
  if ( v9 == -2004287485 )
    *v35 = 1;
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 23) + 112LL))(
         *((_QWORD *)v7 + 23),
         &GUID_f294acfc_3146_4483_a7bf_addca7c260e2,
         (__int64)v7 + 192);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 23) + 112LL))(
         *((_QWORD *)v7 + 23),
         &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
         (__int64)v7 + 200);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 23) + 32LL))(
         *((_QWORD *)v7 + 23),
         (__int64)v7 + 248);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 25) + 24LL))(
         *((_QWORD *)v7 + 25),
         (__int64)v7 + 256);
  if ( v9 < 0 )
    goto LABEL_135;
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 17);
      WPP_SF_dg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
        *((_DWORD *)v7 + 32));
      v18 = WPP_GLOBAL_Control;
    }
    if ( v18 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v18 + 7) & 0x800000) != 0
      && *((_BYTE *)v18 + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 32);
      WPP_SF_dg(
        *((_QWORD *)v18 + 2),
        0x12u,
        (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
        *((_DWORD *)v7 + 62));
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 23) + 112LL))(
         *((_QWORD *)v7 + 23),
         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
         (__int64)v7 + 224);
  if ( v9 < 0 )
    goto LABEL_135;
  ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>(
    &v33,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 28));
  v32 = 0LL;
  memset(pvar, 0, 24);
  v9 = (*(__int64 (__fastcall **)(void *, LPVOID *))(*(_QWORD *)v33 + 168LL))(v33, &v32);
  if ( v9 < 0
    || (strcpy(pvar, "\v"),
        *(_WORD *)&pvar[8] = -1,
        v9 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v32 + 48LL))(
               v32,
               &PKEY_AudioSession_IsCaptureMonitorSession,
               pvar),
        v9 < 0) )
  {
    v19 = v32;
LABEL_105:
    if ( v19 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
    v16 = v33;
    goto LABEL_68;
  }
  memset(pvar, 0, 24);
  *(_WORD *)pvar = 31;
  *(_QWORD *)&pvar[8] = *((_QWORD *)v7 + 9);
  v9 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v32 + 48LL))(
         v32,
         &PKEY_AudioSession_CaptureMonitorEndpointId,
         pvar);
  v19 = v32;
  if ( v9 < 0 )
    goto LABEL_105;
  if ( v32 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v33 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
  v20 = (struct IMMDevice *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v36 = v20;
  if ( v20 )
  {
    v20->lpVtbl = (struct IMMDeviceVtbl *)&CMonitor::CMonitorNotification::`vftable';
    v20[1].lpVtbl = (struct IMMDeviceVtbl *)v7;
    LODWORD(v20[2].lpVtbl) = 0;
    HIDWORD(v20[2].lpVtbl) = 1;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 29,
    (CMonitor::CMonitorNotification *)v20);
  if ( !*((_QWORD *)v7 + 29) )
  {
LABEL_77:
    v9 = -2147024882;
    goto LABEL_135;
  }
  v9 = CMonitor::SetSessionTitleAndIcon(v7, v37);
  if ( v9 >= 0 )
  {
    try
    {
      ATL::CEvent::Create((CMonitor *)((char *)v7 + 120), v21);
    }
    catch ( ATL::CAtlException *v44 )
    {
      v29 = v44;
      if ( *(_DWORD *)v44 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v32) = *(_DWORD *)v29;
      v9 = (int)v32;
      v7 = v34;
      if ( (int)v32 < 0 )
        goto LABEL_135;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 10) + 104LL))(
           *((_QWORD *)v7 + 10),
           *((_QWORD *)v7 + 15));
    if ( v9 >= 0 )
    {
      ATL::CEvent::Create((CMonitor *)((char *)v7 + 240), v22);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 23) + 104LL))(
             *((_QWORD *)v7 + 23),
             *((_QWORD *)v7 + 30));
      if ( v9 >= 0 )
      {
        v23 = *((_QWORD *)v7 + 13);
        v24 = *(unsigned __int16 *)(v23 + 2) * (*(unsigned __int16 *)(v23 + 14) >> 3);
        *((_QWORD *)v7 + 56) = v24;
        v25 = (struct _SECURITY_ATTRIBUTES *)(v24 * (*((_QWORD *)v7 + 55) * *(unsigned int *)(v23 + 4) / 10000LL));
        *((_QWORD *)v7 + 57) = v25;
        try
        {
          ATL::CEvent::Create((CMonitor *)((char *)v7 + 296), v25);
        }
        catch ( ATL::CAtlException *v45 )
        {
          v30 = v45;
          if ( *(_DWORD *)v45 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v32) = *(_DWORD *)v30;
          v9 = (int)v32;
          v7 = v34;
          if ( (int)v32 < 0 )
            goto LABEL_135;
        }
        Thread = CreateThread(
                   0LL,
                   0LL,
                   (LPTHREAD_START_ROUTINE)CMonitor::CaptureMonitorThreadWrapper,
                   v7,
                   0,
                   (LPDWORD)v7 + 72);
        *((_QWORD *)v7 + 35) = Thread;
        if ( Thread )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 14) + 80LL))(
                 *((_QWORD *)v7 + 14),
                 *((_QWORD *)v7 + 21));
          if ( v9 < 0 )
            goto LABEL_135;
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 28) + 80LL))(
                 *((_QWORD *)v7 + 28),
                 *((_QWORD *)v7 + 29));
          if ( v9 < 0 )
            goto LABEL_135;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x13u,
              (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids);
          }
          *((_DWORD *)v7 + 14) = 2;
          *((_BYTE *)v7 + 60) = 0;
        }
        else
        {
          v27 = GetLastError();
          v9 = v27;
          if ( v27 > 0 )
            v9 = (unsigned __int16)v27 | 0x80070000;
        }
LABEL_134:
        if ( v9 >= 0 )
          goto LABEL_140;
      }
    }
  }
LABEL_135:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    LODWORD(ppv) = v9;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x14u,
      (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
      v7,
      ppv);
  }
  *((_BYTE *)v7 + 60) = 1;
  *((_DWORD *)v43 + 14) = *v35 ? 7 : 0;
LABEL_140:
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  return (unsigned int)v9;
}
