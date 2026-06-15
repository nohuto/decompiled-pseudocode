/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061E9C
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180061BBC (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180049080 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180058034 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005EA48 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x180062B1C (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180062B58 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x180062C44 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x180062D20 (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072424 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800CC120 (WPP_SF_qq.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800FAE6C (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800FAEA0 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FB0F0 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x1800FF99C (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18010044C (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180100500 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801044BC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180104F84 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CMonitorManager::Initialize(LPVOID *this, int a2, __int64 a3, CMonitorManager::CaptureMonitor *a4)
{
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  const unsigned int *v7; // r9
  HRESULT restarted; // esi
  struct IUnknown **v9; // rbx
  struct IUnknown *v10; // rcx
  unsigned int i; // r15d
  int v12; // eax
  void *v13; // rcx
  _QWORD *v14; // r15
  LPVOID v16; // rcx
  __int64 *v17; // rax
  CMonitorManager::CaptureMonitor *v18; // rbx
  struct IMMDevice *v19; // rbx
  int v20; // eax
  LPVOID v21; // r8
  int v22; // eax
  int v23; // esi
  __int64 v24; // rax
  __int64 *v25; // rbx
  bool v26; // si
  CMonitor *v27; // rcx
  __int64 v28; // rdx
  int ppv; // [rsp+20h] [rbp-D8h]
  struct IMMDevice *v30; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C0h] BYREF
  LPVOID v32; // [rsp+40h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B0h] BYREF
  __int64 *v34; // [rsp+50h] [rbp-A8h] BYREF
  int v35; // [rsp+58h] [rbp-A0h] BYREF
  struct IUnknown *v36; // [rsp+60h] [rbp-98h] BYREF
  __int64 v37; // [rsp+68h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+70h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-80h] BYREF
  char v40; // [rsp+80h] [rbp-78h]
  __int128 v41; // [rsp+88h] [rbp-70h] BYREF
  __int64 v42; // [rsp+98h] [rbp-60h]
  __int128 v43; // [rsp+A0h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp-48h]
  LPVOID *v45; // [rsp+100h] [rbp+8h] BYREF
  int v46; // [rsp+108h] [rbp+10h] BYREF
  __int64 v47; // [rsp+110h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v48; // [rsp+118h] [rbp+20h] BYREF

  v48 = a4;
  v47 = a3;
  v46 = a2;
  v45 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
  }
  v37 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 10;
  v36 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 2);
  v40 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 14) || *((_DWORD *)this + 14) == 3 )
  {
    CMonitorManager::InitializeRegistryWatcher((CMonitorManager *)this);
    restarted = CMonitorManager::InitializeMonitorRestartTimer(this, v5, v6, v7);
    if ( restarted < 0 )
      goto LABEL_43;
    v9 = (struct IUnknown **)(this + 8);
    restarted = CoCreateInstance(
                  &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                  0LL,
                  0x17u,
                  &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                  this + 8);
    if ( restarted < 0 )
      goto LABEL_43;
    v10 = v36;
    if ( v36 != *v9 )
    {
      ATL::AtlComQIPtrAssign(&v36, *v9, &GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742);
      v10 = v36;
    }
    if ( v10 )
      ((void (__fastcall *)(struct IUnknown *, __int64))v10->lpVtbl[3].Release)(v10, 1LL);
    restarted = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))(*v9)->lpVtbl[2].QueryInterface)(*v9, this);
    if ( restarted < 0 )
      goto LABEL_43;
    restarted = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64, __int64 *))(*v9)->lpVtbl[1].QueryInterface)(
                  *v9,
                  2LL,
                  1LL,
                  &v37);
    if ( restarted < 0 )
      goto LABEL_43;
    restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 24LL))(v37, &v38);
    if ( restarted < 0 )
      goto LABEL_43;
    for ( i = 0; ; ++i )
    {
      LODWORD(v48) = i;
      if ( i >= v38 )
      {
        *((_DWORD *)this + 14) = 1;
        v48 = (CMonitorManager::CaptureMonitor *)(this + 9);
        EnterCriticalSection((LPCRITICAL_SECTION)(this + 9));
        restarted = 0;
        v14 = (_QWORD *)v41;
        while ( v14 )
        {
          v28 = v14[2];
          v14 = (_QWORD *)*v14;
          ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
            this + 14,
            v28);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(this + 9));
        goto LABEL_32;
      }
      v30 = 0LL;
      v31 = 0LL;
      pv = 0LL;
      LOBYTE(v46) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v37 + 32LL))(v37, i, &v30) >= 0
        && ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v30->lpVtbl->QueryInterface)(
             v30,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v31) >= 0
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 24LL))(v31, &v35) >= 0 )
      {
        break;
      }
      v13 = 0LL;
LABEL_24:
      CoTaskMemFree(v13);
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      if ( v30 )
        ((void (__fastcall *)(struct IMMDevice *))v30->lpVtbl->Release)(v30);
    }
    v12 = v35;
    if ( v35 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v30, (unsigned __int16 **)&pv, (bool *)&v46) )
      {
LABEL_54:
        v34 = 0LL;
        v32 = 0LL;
        v19 = v30;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v32,
          0LL);
        v20 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v19->lpVtbl->GetId)(v19, &v32);
        if ( v20 >= 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
          }
          v21 = &unk_18015D734;
          if ( !(_BYTE)v46 )
            v21 = pv;
          LOBYTE(ppv) = 0;
          v22 = CMonitorManager::CreateMonitor(this, v32, v21, 0LL, ppv, &v34);
          v23 = v22;
          if ( v22 >= 0 )
          {
            if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
            {
              v25 = v34;
            }
            else
            {
              v25 = v34;
              WPP_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                14LL,
                &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
                v34,
                v34[25]);
            }
            v26 = v23 == 0;
            LOBYTE(v46) = v26;
            ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
              &v41,
              v25);
            v27 = (CMonitor *)v25[25];
            if ( v26 )
              CMonitor::Start(v27);
            else
              CMonitor::Terminate(v27, 1, 0LL);
            if ( v32 )
              CoTaskMemFree(v32);
            v24 = *v25;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                13LL,
                &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
                (unsigned int)v22);
            }
            if ( v32 )
              CoTaskMemFree(v32);
            if ( !v34 )
              goto LABEL_23;
            v24 = *v34;
          }
          (*(void (**)(void))(v24 + 16))();
        }
        else
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              11LL,
              &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
              (unsigned int)v20);
          }
          if ( v32 )
            CoTaskMemFree(v32);
        }
LABEL_23:
        v13 = pv;
        goto LABEL_24;
      }
      v12 = v35;
    }
    if ( v12 || !CMonitorManager::IsRenderMirrorEnabled((CMonitorManager *)this, v30, (unsigned __int16 **)&pv) )
      goto LABEL_23;
    goto LABEL_54;
  }
  restarted = -2147024809;
LABEL_43:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
      (unsigned int)restarted);
  }
  v16 = this[8];
  if ( v16 )
  {
    (*(void (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v16 + 56LL))(v16, this);
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(this + 8));
  }
  while ( v42 )
  {
    v17 = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                       &v41,
                       &v45);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v48, *v17);
    if ( v45 )
      (*((void (__fastcall **)(LPVOID *))*v45 + 2))(v45);
    v18 = v48;
    CMonitor::StopIfRunning(*((CMonitor **)v48 + 25));
    CMonitorManager::CaptureMonitor::UninitializeSynchronously(v18);
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  CMonitorManager::CleanupMonitorRestartTimer((CMonitorManager *)this);
LABEL_32:
  if ( v40 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v36 )
    ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll(&v41);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  return (unsigned int)restarted;
}
