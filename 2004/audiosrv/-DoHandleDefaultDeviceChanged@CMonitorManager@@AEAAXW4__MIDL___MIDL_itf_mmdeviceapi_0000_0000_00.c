/*
 * XREFs of ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800FBD24
 * Callers:
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800FCA60 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180049080 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180058034 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005EA48 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800602EC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180062B58 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B9C10 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x1800C3C90 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 *     WPP_SF_SS @ 0x1800CDD9C (WPP_SF_SS.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800FAD74 (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FB2F8 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x1800FC4D8 (-EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FCA8C (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x1800FDC68 (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x1800FFA0C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        char *a3)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v3; // r13d
  CMonitorManager::CaptureMonitor *v4; // r14
  CAudioSessionManager *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r12
  void *v8; // rax
  __int64 *Next; // rax
  _QWORD *v10; // rbx
  const wchar_t *v11; // r9
  bool v12; // zf
  unsigned __int64 i; // r15
  CMonitorManager::CaptureMonitor *v14; // rbx
  int v15; // ebx
  unsigned int v16; // ebx
  void *v17; // rcx
  int v18; // eax
  int v19; // eax
  int MonitorForCaptureDeviceIfAppropriate; // eax
  CMonitorManager *v21; // rcx
  const char *v22; // r9
  void **v23; // r14
  CMonitorManager::CaptureMonitor *v24; // rcx
  ATL::CAtlException *v25; // rbx
  _QWORD *v26; // [rsp+30h] [rbp-B8h] BYREF
  struct IMMDevice *v27; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-A0h] BYREF
  struct IMMDevice *v30; // [rsp+50h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-90h] BYREF
  char v32; // [rsp+60h] [rbp-88h]
  unsigned int v33; // [rsp+68h] [rbp-80h] BYREF
  _QWORD *v34; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-70h]
  __int64 v36; // [rsp+80h] [rbp-68h]
  int v37; // [rsp+88h] [rbp-60h]
  LPCRITICAL_SECTION v38; // [rsp+90h] [rbp-58h] BYREF
  char v39; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v40; // [rsp+A0h] [rbp-48h] BYREF
  CMonitorManager::CaptureMonitor *v41; // [rsp+F0h] [rbp+8h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v42; // [rsp+F8h] [rbp+10h]
  char *v43; // [rsp+100h] [rbp+18h]
  __int64 v44; // [rsp+108h] [rbp+20h] BYREF

  v43 = a3;
  v42 = a2;
  v41 = this;
  v3 = a2;
  v4 = this;
  v38 = (LPCRITICAL_SECTION)((char *)this + 16);
  v39 = 0;
  ATL::CCritSecLock::Lock(&v38);
  if ( *((_DWORD *)v4 + 14) != 1 )
    goto LABEL_94;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 72);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v28 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v8 = (void *)*((_QWORD *)v4 + 14);
  pv = v8;
  while ( v8 )
  {
    Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v5, (_QWORD **)&pv);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v26, *Next);
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v10 = v26;
    }
    else
    {
      v10 = v26;
      v11 = (const wchar_t *)(v26 + 16);
      if ( v26[19] >= 8uLL )
        v11 = *(const wchar_t **)v11;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        v11,
        *(_QWORD *)(v26[25] + 72LL));
      v5 = WPP_GLOBAL_Control;
    }
    if ( v3 )
    {
      if ( v3 != eCapture )
        goto LABEL_26;
      v12 = v10[9] == 0LL;
    }
    else
    {
      v12 = v10[13] == 0LL;
    }
    if ( v12 )
    {
      if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v5 + 7) & 0x800000) != 0
        && *((_BYTE *)v5 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v5 + 2), 0x1Fu, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
      }
      try
      {
        ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::Add(
          &v34,
          (__int64)v10);
      }
      catch ( ATL::CAtlException *v40 )
      {
        v25 = v40;
        if ( *(_DWORD *)v40 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v44) = *(_DWORD *)v25;
        if ( (int)v44 < 0 )
        {
          v5 = (CAudioSessionManager *)v26;
          if ( v26 )
            (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
          v4 = v41;
          v3 = v42;
          v7 = v35;
          v6 = v34;
          goto LABEL_28;
        }
        v4 = v41;
        v3 = v42;
        v10 = v26;
      }
      v6 = v34;
      v7 = v35;
    }
LABEL_26:
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
LABEL_28:
    v8 = pv;
  }
  for ( i = 0LL; i < v7; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v41, v6[i]);
    v44 = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
    }
    v14 = v41;
    if ( *((_BYTE *)v41 + 49) )
      CMonitorManager::CaptureMonitor::HandleDefaultDeviceChanges(v41);
    else
      CMonitorManager::RemoveMonitor(v4, v41, 1);
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v4 + 8) + 24LL))(
          *((_QWORD *)v4 + 8),
          2LL,
          1LL,
          &v28);
  if ( v15 < 0 )
    goto LABEL_81;
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 24LL))(v28, &v33);
  if ( v15 < 0 )
    goto LABEL_81;
  v16 = 0;
  while ( 2 )
  {
    if ( v16 < v33 )
    {
      v27 = 0LL;
      v26 = 0LL;
      pv = 0LL;
      LOBYTE(v41) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v28 + 32LL))(v28, v16, &v27) < 0
        || ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD **))v27->lpVtbl->QueryInterface)(
             v27,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v26) < 0
        || (*(int (__fastcall **)(_QWORD *, __int64 *))(*v26 + 24LL))(v26, &v44) < 0 )
      {
        goto LABEL_44;
      }
      v18 = v44;
      if ( !(_DWORD)v44 )
      {
        v19 = CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(v4, v27, *((unsigned __int16 **)v4 + 42));
        if ( v19 < 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x21u,
              (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
              v19);
          }
LABEL_44:
          v17 = 0LL;
LABEL_66:
          CoTaskMemFree(v17);
          if ( v26 )
            (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
          if ( v27 )
            ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
          ++v16;
          continue;
        }
        v18 = v44;
      }
      if ( v18 == 1 )
      {
        if ( !CMonitor::IsCaptureMonitorEnabled(v27, (unsigned __int16 **)&pv, (bool *)&v41) || !(_BYTE)v41 )
        {
          v18 = v44;
          goto LABEL_58;
        }
LABEL_60:
        MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(v4, v27);
        if ( MonitorForCaptureDeviceIfAppropriate < 0
          && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x22u,
            (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
            MonitorForCaptureDeviceIfAppropriate);
        }
      }
      else
      {
LABEL_58:
        if ( !v18 && CMonitorManager::IsRenderMirrorEnabled(v4, v27, (unsigned __int16 **)&pv) )
          goto LABEL_60;
      }
      v17 = pv;
      goto LABEL_66;
    }
    break;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IMMDevice **))(**((_QWORD **)v4 + 8) + 40LL))(
          *((_QWORD *)v4 + 8),
          v43,
          &v30);
  if ( v15 >= 0 && v42 == eRender && !CMonitorManager::IsMonitorMirrorEligible(v21, v30) )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v41,
      v43,
      0xFFFFFFFFFFFFFFFFuLL,
      v22);
    v23 = (void **)((char *)v4 + 336);
    if ( v23 == (void **)&v41 )
    {
      v24 = v41;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v23,
        v41);
      v24 = 0LL;
    }
    if ( v24 )
      CoTaskMemFree(v24);
    if ( !*v23 )
      v15 = -2147024882;
  }
LABEL_81:
  if ( v6 )
  {
    ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
      (__int64)v6,
      v7);
    free(v6);
  }
  if ( v30 )
    ((void (__fastcall *)(struct IMMDevice *))v30->lpVtbl->Release)(v30);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v15 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, v15);
  }
LABEL_94:
  if ( v39 )
    LeaveCriticalSection(v38);
}
