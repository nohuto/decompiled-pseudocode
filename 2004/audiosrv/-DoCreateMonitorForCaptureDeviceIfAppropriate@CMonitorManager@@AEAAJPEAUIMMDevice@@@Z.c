/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FB778
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800FB520 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180058034 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005EA48 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180062B58 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800CDD9C (WPP_SF_SS.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800FAE6C (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FB0F0 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800FC7B8 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1801004B0 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801044BC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180104F84 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  int v5; // r14d
  int v6; // eax
  CAudioSessionManager *v7; // rcx
  unsigned __int16 *v8; // r8
  CAudioSessionManager *v9; // rcx
  CMonitorManager::CaptureMonitor *v10; // rbx
  bool v11; // r12
  CMonitor *v12; // rcx
  CAudioSessionManager *v13; // rcx
  _QWORD *v14; // rax
  ATL::CAtlException *v15; // rbx
  LPVOID pv; // [rsp+30h] [rbp-78h] BYREF
  CMonitorManager::CaptureMonitor *v17; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int16 *v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-58h] BYREF
  ATL::CAtlException *v21; // [rsp+58h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-48h] BYREF
  char v23; // [rsp+68h] [rbp-40h]
  LPCRITICAL_SECTION v24; // [rsp+70h] [rbp-38h] BYREF
  char v25; // [rsp+78h] [rbp-30h]
  bool v26; // [rsp+B0h] [rbp+8h] BYREF
  int v27; // [rsp+C0h] [rbp+18h] BYREF
  int v28; // [rsp+C8h] [rbp+20h]

  v19 = 0LL;
  v18 = 0LL;
  v26 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) != 1 )
  {
    if ( v23 )
      LeaveCriticalSection(lpCriticalSection);
    CoTaskMemFree(0LL);
    return 0LL;
  }
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v19);
  if ( v5 < 0 )
    goto LABEL_69;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(v19, &v27);
  if ( v5 < 0 )
    goto LABEL_69;
  v6 = v27;
  if ( v27 == 1 )
  {
    if ( CMonitor::IsCaptureMonitorEnabled(a2, &v18, &v26) )
      goto LABEL_12;
    v6 = v27;
  }
  if ( !v6 && CMonitorManager::IsRenderMirrorEnabled(this, a2, &v18) )
  {
LABEL_12:
    pv = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v5 < 0 )
    {
LABEL_13:
      CoTaskMemFree(pv);
      goto LABEL_14;
    }
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x44u,
          (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
          v18);
        v7 = WPP_GLOBAL_Control;
      }
      if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v7 + 7) & 0x800000) != 0
        && *((_BYTE *)v7 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v7 + 2), 0x45u, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
      }
    }
    v17 = 0LL;
    v8 = (unsigned __int16 *)&unk_18015D734;
    if ( !v26 )
      v8 = v18;
    v5 = CMonitorManager::CreateMonitor((__int64)this, pv, v8, 0, 0, &v17);
    if ( v5 < 0 )
    {
      v10 = v17;
LABEL_66:
      if ( v10 )
        (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
      goto LABEL_13;
    }
    v24 = (LPCRITICAL_SECTION)((char *)this + 72);
    v25 = 0;
    ATL::CCritSecLock::Lock(&v24);
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v10 = v17;
    }
    else
    {
      v10 = v17;
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x46u,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        v17);
      v9 = WPP_GLOBAL_Control;
    }
    v11 = v5 == 0;
    v26 = v5 == 0;
    if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v9 + 7) & 0x800000) != 0
      && *((_BYTE *)v9 + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)v9 + 2),
        0x47u,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, &v20, pv);
    if ( v20 )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
      {
        if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v14 = v20 + 20;
          if ( v20[23] >= 8uLL )
            v14 = (_QWORD *)*v14;
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x4Au,
            (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
            (const wchar_t *)pv,
            (__int64)v14);
          v13 = WPP_GLOBAL_Control;
        }
        if ( v13 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v13 + 7) & 0x800000) != 0
          && *((_BYTE *)v13 + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)v13 + 2),
            0x4Bu,
            (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
            *((_QWORD *)v10 + 25));
        }
      }
      CMonitorManager::CaptureMonitor::Uninitialize(v10);
      goto LABEL_61;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (_WORD)v20 + 72,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        (const wchar_t *)pv);
    }
    try
    {
      v5 = 0;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (__int64 *)this + 14,
        (__int64)v10);
    }
    catch ( ATL::CAtlException *v21 )
    {
      v15 = v21;
      if ( *(_DWORD *)v21 == -1073741571 )
        _o__resetstkoflw();
      v28 = *(_DWORD *)v15;
      v5 = v28;
      v10 = v17;
      if ( v28 < 0 )
        goto LABEL_61;
      v11 = v26;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x49u,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        v18);
    }
    v12 = (CMonitor *)*((_QWORD *)v10 + 25);
    if ( v11 )
      CMonitor::Start(v12);
    else
      CMonitor::Terminate(v12, 1, 0LL);
LABEL_61:
    if ( v20 )
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
    if ( v25 )
      LeaveCriticalSection(v24);
    goto LABEL_66;
  }
LABEL_14:
  if ( v5 < 0 )
  {
LABEL_69:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x4Cu,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        v5);
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  CoTaskMemFree(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v5;
}
