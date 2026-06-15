/*
 * XREFs of ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005F37C
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180039250 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036B20 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180037148 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180049034 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005F618 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x18005FB64 (-InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x1800602E8 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x18006030C (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ??1HmdInfo@@QEAA@XZ @ 0x180070330 (--1HmdInfo@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e0385c1b3dccbc375408929e287d16bb___ @ 0x180073210 (Windows--Internal--ComTaskPool--QueueTask__lambda_e0385c1b3dccbc375408929e287d16bb___.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18013818C (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall AtmosCheck::Initialize(__int64 a1)
{
  int Instance; // edi
  int UniqueContext; // eax
  HANDLE v5; // rax
  signed int LastError; // eax
  AtmosCheck *v7; // rcx
  const char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  AtmosCheck *v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)(a1 + 184) = 1LL;
  SecurityDescriptor = 0LL;
  Instance = 0;
  *(_BYTE *)(a1 + 552) = 0;
  if ( !*(_BYTE *)(a1 + 96) )
    AtmosCheck::InitializeLicenseMapLegacy((AtmosCheck *)a1);
  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform((AtmosCheck *)a1) && !*(_BYTE *)(a1 + 96) )
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)(a1 + 216));
    if ( Instance < 0 )
      goto LABEL_24;
    Instance = AtmosCheck::InitializeCommonSpatialTechInfo((AtmosCheck *)a1);
    if ( Instance < 0 )
      goto LABEL_24;
  }
  if ( !AtmosCheck::IsLicenseEvaluationRequired((AtmosCheck *)a1) )
  {
    *(_BYTE *)(a1 + 96) = 1;
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 96) )
    goto LABEL_23;
  UniqueContext = SHTaskPoolGetUniqueContext();
  *(_BYTE *)(a1 + 100) = 1;
  *(_DWORD *)(a1 + 212) = UniqueContext;
  *(_QWORD *)(a1 + 40) = &g_AtmosCheckCallback;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;GA;;;WD)(A;;GA;;;AC)", 1u, &SecurityDescriptor, 0LL) )
  {
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    EventAttributes.bInheritHandle = 0;
    v5 = CreateEventW(&EventAttributes, 1, 0, L"Global\\Client_Atmos_Check_Event");
    *(_QWORD *)(a1 + 104) = v5;
    if ( v5 )
    {
      *(_BYTE *)(a1 + 99) = 0;
      goto LABEL_20;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v8 = "Error ConvertStringSecurityDescriptorToSecurityDescriptor";
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v8 = "Error creating Global\\Client_Atmos_Check_Event";
  }
  AtmosCheck::Trace(v7, v8, LastError);
LABEL_20:
  if ( !*(_BYTE *)(a1 + 100) )
  {
    Instance = AtmosCheck::PerformLicenseCheck((AtmosCheck *)a1, 0);
    if ( Instance < 0 )
      goto LABEL_24;
  }
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v18, a1);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, v18);
  v9 = *(unsigned int *)(a1 + 212);
  v16 = 1;
  Instance = Windows::Internal::ComTaskPool::QueueTask__lambda_e0385c1b3dccbc375408929e287d16bb___(v11, v10, v9, &v15);
  HmdInfo::~HmdInfo((HmdInfo *)&v15);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
LABEL_23:
  if ( Instance < 0 )
  {
LABEL_24:
    *(_BYTE *)(a1 + 96) = 0;
    AtmosCheck::UninitializeAppServiceMode((PVOID)a1);
    v12 = *(void **)(a1 + 112);
    if ( v12 )
    {
      UnregisterWaitEx(v12, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    v13 = *(void **)(a1 + 104);
    if ( v13 )
    {
      CloseHandle(v13);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  v14 = (AtmosCheck *)SecurityDescriptor;
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  AtmosCheck::Trace(v14, "Init result", Instance);
  return (unsigned int)Instance;
}
