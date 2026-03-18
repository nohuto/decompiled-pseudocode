/*
 * XREFs of ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C02618A0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020DB3C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000AE88 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0037E44 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C0222660 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C023893C (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x1C0248A64 (-VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORM.c)
 *     ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0248DC8 (-VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DX.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C024A7C4 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1C0262334 (-DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1C0262490 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0262670 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::CopyDriverStore(DXGADAPTER *this, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int16 *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r12
  __int64 v8; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int16 *v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  WCHAR *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  WCHAR *v32; // rcx
  __int64 v33; // r8
  char *v34; // rax
  WCHAR v35; // r9
  WCHAR *v36; // rax
  size_t *NtSystemRoot; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int16 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int16 *v43; // rcx
  __int64 v44; // r8
  char *v45; // rax
  unsigned __int16 v46; // r9
  __int64 v47; // rax
  __int64 v48; // r8
  char *v49; // rax
  unsigned __int16 v50; // r9
  unsigned __int16 *v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // [rsp+38h] [rbp-D0h]
  int v62; // [rsp+38h] [rbp-D0h]
  int v63; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  int v65; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+54h] [rbp-B4h]
  struct _D3DKMT_QUERYADAPTERINFO v67; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v68[268]; // [rsp+78h] [rbp-90h] BYREF
  size_t SourceString[66]; // [rsp+4A8h] [rbp+3A0h] BYREF
  unsigned __int16 v70[264]; // [rsp+6B8h] [rbp+5B0h] BYREF
  size_t v71[66]; // [rsp+8C8h] [rbp+7C0h] BYREF
  size_t v72[66]; // [rsp+AD8h] [rbp+9D0h] BYREF

  v3 = -1LL;
  v4 = 0LL;
  Handle = (HANDLE)-1LL;
  v7 = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 197);
  v66 = 0;
  if ( *((_BYTE *)this + 210) )
  {
    v8 = WdLogNewEntry5_WdEvent(v6, v5);
    *(_QWORD *)(v8 + 24) = 1691LL;
    WdLogEvent5_WdEvent(v8);
    return 0LL;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_CopyDriverStore__private_reporting,
    0x109AF96u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
    0,
    v61);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_CopyDriverToSystem32__private_reporting,
    0x12BD589u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1,
    v62);
  memset(&v68[1], 0, 0x42CuLL);
  v68[0] = 3;
  v10 = (DXGADAPTER *)((char *)this + 4240);
  v67.pPrivateDriverData = v68;
  v67.hAdapter = 0;
  *(_QWORD *)&v67.PrivateDriverDataSize = 1072LL;
  v67.Type = KMTQAITYPE_QUERYREGISTRY;
  v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4240), 0LL, &v67, 0x430u);
  v14 = v11;
  if ( v11 < 0 )
    goto LABEL_4;
  v16 = TranslateUmdFileNameToVm((size_t *)&v68[136], 0x104u, &v68[134]);
  v14 = v16;
  if ( v16 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v15 + 32) = 1727LL;
    goto LABEL_5;
  }
  RtlStringCbCopyW((unsigned __int16 *)SourceString, 0x208uLL, (size_t *)L"\\??\\");
  RtlStringCbCatW((unsigned __int16 *)SourceString, v19, (size_t *)&v68[136]);
  if ( (int)DxgkpCreateFile((unsigned __int16 *)SourceString, 1u, 0x80u, 0x20u, 1u, &Handle) >= 0 )
  {
    ZwClose(Handle);
    v3 = -1LL;
    if ( *((_DWORD *)this + 665) == 2 )
      DxgkpDeleteFile((PCWSTR)SourceString);
    v22 = (unsigned __int16 *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    v4 = v22;
    if ( !v22 )
    {
      LODWORD(v14) = -1073741801;
      goto LABEL_64;
    }
    RtlStringCbCopyW(v22, 0x208uLL, SourceString);
    v68[0] = 2;
    v67.pPrivateDriverData = v68;
    v67.hAdapter = 0;
    *(_QWORD *)&v67.PrivateDriverDataSize = 1072LL;
    v67.Type = KMTQAITYPE_QUERYREGISTRY;
    v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(v10, 0LL, &v67, 0x430u);
    v14 = v23;
    if ( v23 < 0 )
    {
LABEL_4:
      v15 = WdLogNewEntry5_WdError(v13, v12);
LABEL_5:
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdError(v15);
      goto LABEL_64;
    }
    v24 = TranslateUmdFileNameToVm((size_t *)&v68[136], 0x104u, &v68[134]);
    v14 = v24;
    if ( v24 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v15 + 32) = 1789LL;
      goto LABEL_5;
    }
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_NonDXKryptonGpuSupport__private_reporting,
      0x15B505Fu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1,
      v63);
    v65 = 0;
    LODWORD(Handle) = 0;
    while ( 1 )
    {
      if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                  v10,
                  (unsigned __int16 *const)v71,
                  (unsigned __int16 *const)v72,
                  (enum DXGKP_HARDLINKTYPE *)&v65,
                  (enum DXGKP_HARDLINKOVERWRITETYPE *)&Handle) < 0 )
      {
        LODWORD(v14) = 0;
        goto LABEL_64;
      }
      RtlStringCbCopyW((unsigned __int16 *)SourceString, 0x208uLL, (size_t *)L"\\??\\");
      RtlStringCbCatW((unsigned __int16 *)SourceString, v27, (size_t *)&v68[136]);
      v29 = (WCHAR *)SourceString;
      v30 = 260LL;
      do
      {
        if ( !*v29 )
          break;
        ++v29;
        --v30;
      }
      while ( v30 );
      if ( v30 )
        v31 = 260 - v30;
      else
        v31 = 0LL;
      if ( v30 )
      {
        v32 = (WCHAR *)SourceString + v31;
        v28 = 260 - v31;
        if ( v31 != 260 )
        {
          v33 = 2147483646LL;
          v34 = (char *)((char *)L"\\" - (char *)v32);
          do
          {
            if ( !v33 )
              break;
            v35 = *(_WORD *)&v34[(_QWORD)v32];
            if ( !v35 )
              break;
            *v32 = v35;
            --v33;
            ++v32;
            --v28;
          }
          while ( v28 );
        }
        v36 = v32 - 1;
        if ( v28 )
          v36 = v32;
        *v36 = 0;
      }
      RtlStringCbCatW((unsigned __int16 *)SourceString, v28, v71);
      RtlStringCbCopyW(v70, 0x208uLL, (size_t *)L"\\??\\");
      NtSystemRoot = (size_t *)RtlGetNtSystemRoot();
      RtlStringCbCatW(v70, v38, NtSystemRoot);
      v40 = v70;
      v41 = 260LL;
      if ( v65 )
      {
        do
        {
          if ( !*v40 )
            break;
          ++v40;
          --v41;
        }
        while ( v41 );
        if ( v41 )
          v47 = 260 - v41;
        else
          v47 = 0LL;
        if ( !v41 )
          goto LABEL_60;
        v43 = &v70[v47];
        v39 = 260 - v47;
        if ( v47 != 260 )
        {
          v48 = 2147483646LL;
          v49 = (char *)((char *)L"\\Syswow64\\" - (char *)v43);
          do
          {
            if ( !v48 )
              break;
            v50 = *(unsigned __int16 *)((char *)v43 + (_QWORD)v49);
            if ( !v50 )
              break;
            *v43 = v50;
            --v48;
            ++v43;
            --v39;
          }
          while ( v39 );
        }
      }
      else
      {
        do
        {
          if ( !*v40 )
            break;
          ++v40;
          --v41;
        }
        while ( v41 );
        if ( v41 )
          v42 = 260 - v41;
        else
          v42 = 0LL;
        if ( !v41 )
          goto LABEL_60;
        v43 = &v70[v42];
        v39 = 260 - v42;
        if ( v42 != 260 )
        {
          v44 = 2147483646LL;
          v45 = (char *)((char *)L"\\System32\\" - (char *)v43);
          do
          {
            if ( !v44 )
              break;
            v46 = *(_WORD *)&v45[(_QWORD)v43];
            if ( !v46 )
              break;
            *v43 = v46;
            --v44;
            ++v43;
            --v39;
          }
          while ( v39 );
        }
      }
      v51 = v43 - 1;
      if ( v39 )
        v51 = v43;
      *v51 = 0;
LABEL_60:
      RtlStringCbCatW(v70, v39, v72);
      v52 = DxgkpPopulateFile(SourceString, v70, (unsigned int)Handle);
      v55 = v52;
      if ( v52 < 0 )
      {
        v56 = WdLogNewEntry5_WdError(v54, v53);
        *(_QWORD *)(v56 + 24) = v55;
        *(_QWORD *)(v56 + 32) = 2042LL;
        WdLogEvent5_WdError(v56);
      }
    }
  }
  v57 = WdLogNewEntry5_WdError(v21, v20);
  *(_QWORD *)(v57 + 24) = 1760LL;
  WdLogEvent5_WdError(v57);
  v3 = (__int64)Handle;
  LODWORD(v14) = -1073741823;
LABEL_64:
  operator delete[](v4);
  if ( v3 != -1 )
    ZwClose((HANDLE)v3);
  if ( v66 )
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(v7, v66);
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDriverStoreFile(v10, (unsigned __int16 *const)SourceString, 0LL, 0LL, 0LL);
  if ( (int)v14 < 0 )
  {
    v60 = WdLogNewEntry5_WdError(v59, v58);
    *(_QWORD *)(v60 + 24) = (int)v14;
    *(_QWORD *)(v60 + 32) = 2098LL;
    WdLogEvent5_WdError(v60);
  }
  return (unsigned int)v14;
}
