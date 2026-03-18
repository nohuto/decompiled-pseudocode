/*
 * XREFs of ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0301F98
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02BBED4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001A56C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0044448 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02D01D0 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1C0302BC4 (-DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1C0302D10 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0302ED8 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 *     ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x1C03781C0 (-VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORM.c)
 *     ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0378764 (-VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DX.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C037AF98 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DXGADAPTER::CopyDriverStore(DXGADAPTER *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rsi
  unsigned __int16 *v5; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  DXG_GUEST_VIRTUALGPU_VMBUS *v9; // r15
  unsigned int v10; // r9d
  int v11; // eax
  __int64 v12; // rdi
  const wchar_t *v13; // r9
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int16 *v18; // rax
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  WCHAR *v26; // rax
  __int64 v27; // r8
  WCHAR *v28; // rcx
  __int64 v29; // rax
  char *v30; // r8
  WCHAR v31; // r9
  WCHAR *v32; // rax
  size_t *NtSystemRoot; // rax
  __int64 v34; // rdx
  unsigned __int16 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int16 *v38; // rcx
  __int64 v39; // rax
  char *v40; // r8
  unsigned __int16 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rax
  char *v44; // r8
  unsigned __int16 v45; // r9
  unsigned __int16 *v46; // rax
  int v47; // eax
  __int64 v48; // rbx
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  int v50; // [rsp+60h] [rbp-A8h] BYREF
  struct _D3DKMT_QUERYADAPTERINFO v51; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v52[138]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v53[520]; // [rsp+2B0h] [rbp+1A8h] BYREF
  size_t SourceString[66]; // [rsp+4B8h] [rbp+3B0h] BYREF
  unsigned __int16 v55[264]; // [rsp+6C8h] [rbp+5C0h] BYREF
  size_t v56[66]; // [rsp+8D8h] [rbp+7D0h] BYREF
  size_t v57[66]; // [rsp+AE8h] [rbp+9E0h] BYREF

  DXGGLOBAL_GetGlobal();
  v4 = -1LL;
  v5 = 0LL;
  Handle = (HANDLE)-1LL;
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry1(4LL, 1695LL);
    return 0LL;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_CopyDriverStore__private_reporting,
    0x109AF96u,
    v2,
    v3,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_CopyDriverToSystem32__private_reporting,
    0x12BD589u,
    v7,
    v8,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  memset(&v52[1], 0, 0x224uLL);
  memset(v53, 0, sizeof(v53));
  v52[0] = 3;
  v9 = (DXGADAPTER *)((char *)this + 4344);
  v51.pPrivateDriverData = v52;
  v51.hAdapter = 0;
  *(_QWORD *)&v51.PrivateDriverDataSize = 1072LL;
  v51.Type = KMTQAITYPE_QUERYREGISTRY;
  v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4344), 0LL, &v51, v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL, v11);
    v13 = L"D3DDDI_QUERYREGISTRY_DRIVERIMAGEPATH failed: 0x%I64x";
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_57;
  }
  v14 = TranslateUmdFileNameToVm((size_t *)&v52[136], 0x104u, &v52[134]);
  v12 = v14;
  if ( v14 < 0 )
  {
    v15 = 1731LL;
LABEL_8:
    WdLogSingleEntry2(2LL, v12, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"TranslateUmdFileNameToVm failed: 0x%I64x",
      v12,
      v15,
      0LL,
      0LL,
      0LL);
    goto LABEL_57;
  }
  RtlStringCbCopyW((unsigned __int16 *)SourceString, 0x208uLL, (size_t *)L"\\??\\");
  RtlStringCbCatW((unsigned __int16 *)SourceString, v16, (size_t *)&v52[136]);
  if ( (int)DxgkpCreateFile((unsigned __int16 *)SourceString, 1u, 0x80u, 0x20u, 1u, &Handle) >= 0 )
  {
    ZwClose(Handle);
    v4 = -1LL;
    if ( *((_DWORD *)this + 689) == 2 )
      DxgkpDeleteFile((PCWSTR)SourceString);
    v18 = (unsigned __int16 *)operator new[](0x208uLL, 0x4B677844u, 256LL, v17);
    v5 = v18;
    if ( !v18 )
    {
      LODWORD(v12) = -1073741801;
      goto LABEL_57;
    }
    RtlStringCbCopyW(v18, 0x208uLL, SourceString);
    v52[0] = 2;
    v51.pPrivateDriverData = v52;
    v51.hAdapter = 0;
    *(_QWORD *)&v51.PrivateDriverDataSize = 1072LL;
    v51.Type = KMTQAITYPE_QUERYREGISTRY;
    v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(v9, 0LL, &v51, v19);
    v12 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL, v20);
      v13 = L"D3DDDI_QUERYREGISTRY_DRIVERSTOREPATH failed: 0x%I64x";
      goto LABEL_5;
    }
    v21 = TranslateUmdFileNameToVm((size_t *)&v52[136], 0x104u, &v52[134]);
    v12 = v21;
    if ( v21 < 0 )
    {
      v15 = 1793LL;
      goto LABEL_8;
    }
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_NonDXKryptonGpuSupport__private_reporting,
      0x15B505Fu,
      v22,
      v23,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    v50 = 0;
    LODWORD(Handle) = 0;
    while ( 1 )
    {
      if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                  v9,
                  (unsigned __int16 *const)v56,
                  (unsigned __int16 *const)v57,
                  (enum DXGKP_HARDLINKTYPE *)&v50,
                  (enum DXGKP_HARDLINKOVERWRITETYPE *)&Handle) < 0 )
      {
        LODWORD(v12) = 0;
        goto LABEL_57;
      }
      RtlStringCbCopyW((unsigned __int16 *)SourceString, 0x208uLL, (size_t *)L"\\??\\");
      RtlStringCbCatW((unsigned __int16 *)SourceString, v24, (size_t *)&v52[136]);
      v25 = 260LL;
      v26 = (WCHAR *)SourceString;
      do
      {
        if ( !*v26 )
          break;
        ++v26;
        --v25;
      }
      while ( v25 );
      v27 = (260 - v25) & -(__int64)(v25 != 0);
      if ( v25 )
      {
        v28 = (WCHAR *)SourceString + v27;
        v25 = 260 - v27;
        if ( v27 != 260 )
        {
          v29 = 2147483646LL;
          v30 = (char *)((char *)L"\\" - (char *)v28);
          do
          {
            if ( !v29 )
              break;
            v31 = *(WCHAR *)((char *)v28 + (_QWORD)v30);
            if ( !v31 )
              break;
            *v28 = v31;
            --v29;
            ++v28;
            --v25;
          }
          while ( v25 );
        }
        v32 = v28 - 1;
        if ( v25 )
          v32 = v28;
        *v32 = 0;
      }
      RtlStringCbCatW((unsigned __int16 *)SourceString, v25, v56);
      RtlStringCbCopyW(v55, 0x208uLL, (size_t *)L"\\??\\");
      NtSystemRoot = (size_t *)RtlGetNtSystemRoot();
      RtlStringCbCatW(v55, v34, NtSystemRoot);
      v35 = v55;
      v36 = 260LL;
      if ( v50 )
      {
        do
        {
          if ( !*v35 )
            break;
          ++v35;
          --v36;
        }
        while ( v36 );
        v42 = (260 - v36) & -(__int64)(v36 != 0);
        if ( !v36 )
          goto LABEL_53;
        v38 = &v55[v42];
        v36 = 260 - v42;
        if ( v42 != 260 )
        {
          v43 = 2147483646LL;
          v44 = (char *)((char *)L"\\Syswow64\\" - (char *)v38);
          do
          {
            if ( !v43 )
              break;
            v45 = *(unsigned __int16 *)((char *)v38 + (_QWORD)v44);
            if ( !v45 )
              break;
            *v38 = v45;
            --v43;
            ++v38;
            --v36;
          }
          while ( v36 );
        }
      }
      else
      {
        do
        {
          if ( !*v35 )
            break;
          ++v35;
          --v36;
        }
        while ( v36 );
        v37 = (260 - v36) & -(__int64)(v36 != 0);
        if ( !v36 )
          goto LABEL_53;
        v38 = &v55[v37];
        v36 = 260 - v37;
        if ( v37 != 260 )
        {
          v39 = 2147483646LL;
          v40 = (char *)((char *)L"\\System32\\" - (char *)v38);
          do
          {
            if ( !v39 )
              break;
            v41 = *(unsigned __int16 *)((char *)v38 + (_QWORD)v40);
            if ( !v41 )
              break;
            *v38 = v41;
            --v39;
            ++v38;
            --v36;
          }
          while ( v36 );
        }
      }
      v46 = v38 - 1;
      if ( v36 )
        v46 = v38;
      *v46 = 0;
LABEL_53:
      RtlStringCbCatW(v55, v36, v57);
      v47 = DxgkpPopulateFile(SourceString, v55, (unsigned int)Handle);
      if ( v47 < 0 )
      {
        v48 = v47;
        WdLogSingleEntry2(2LL, v47, 2046LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to populate file: 0x%I64x",
          v48,
          2046LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  WdLogSingleEntry1(2LL, 1764LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Driver image does not exists in the VM",
    1764LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v4 = (__int64)Handle;
  LODWORD(v12) = -1073741823;
LABEL_57:
  operator delete[](v5);
  if ( v4 != -1 )
    ZwClose((HANDLE)v4);
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDriverStoreFile(v9, (unsigned __int16 *const)SourceString, 0LL, 0LL, 0LL);
  if ( (int)v12 < 0 )
  {
    WdLogSingleEntry2(2LL, (int)v12, 2102LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to copy driver store files: 0x%I64x",
      (int)v12,
      2102LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v12;
}
