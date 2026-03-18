/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00D672C
 * Callers:
 *     VidMmEscape @ 0x1C002D2E0 (VidMmEscape.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001BA6C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C002D99C (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009D21C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C00D8B04 (-PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z.c)
 *     ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00DE76C (-Flush@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C00DFBFC (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00E29D4 (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        unsigned __int64 *a4)
{
  D3DKMT_VIDMMESCAPETYPE Type; // edx
  unsigned int v7; // ebx
  __int64 v9; // rcx
  ULONG v10; // ecx
  D3DKMT_HANDLE v11; // edx
  UINT v12; // r8d
  PRKEVENT *v13; // rcx
  __int32 v14; // edx
  __int32 v15; // edx
  __int32 v16; // edx
  UINT64 v17; // rdx
  D3DKMT_VIDMMESCAPETYPE v18; // edx
  __int32 v19; // edx
  __int32 v20; // edx
  VIDMM_PROCESS *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  HANDLE hProcess; // r9
  UINT64 NtHandle; // r10
  VIDMM_GLOBAL **v26; // rdx
  VIDMM_GLOBAL *v27; // rcx
  unsigned int i; // r8d
  __int64 v29; // rax
  __int64 v30; // rcx
  VIDMM_PROCESS *v31; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 *v33; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v35; // [rsp+30h] [rbp-48h]
  char v36[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v37; // [rsp+58h] [rbp-20h]
  int v38; // [rsp+60h] [rbp-18h]

  Type = a3->Type;
  v7 = -1073741811;
  if ( a3->Type > D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS )
  {
    v14 = Type - 14;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 2;
        if ( !v16 )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_VidMMVerifyIntegrity__private_reporting,
            0x148F1C8u,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_VidMMVerifyIntegrity_logged_traits,
            0,
            (int)v35);
          goto LABEL_24;
        }
        if ( v16 != 1 )
          goto LABEL_24;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_DelayedForceEviction__private_reporting,
          0x1BDA86Au,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_Wddm30CpuVisible_logged_traits,
          1,
          (int)v35);
        v17 = qword_1C006E5C0 / 10000000;
        qword_1C006E5C0 = 10000000 * a3->EvictByNtHandle.NtHandle;
        a3->EvictByNtHandle.NtHandle = v17;
      }
      else
      {
        VIDMM_GLOBAL::PerformDefragmentationEscape(
          (VIDMM_GLOBAL *)this,
          a3->Defrag.Operation,
          (unsigned int)a3,
          a4,
          v33,
          v34,
          v35);
      }
      return 0;
    }
    v13 = (PRKEVENT *)*this;
    if ( a3->SetFault.Value )
    {
      VIDMM_WORKER_THREAD::Flush((VIDMM_WORKER_THREAD *)v13);
      return 0;
    }
LABEL_15:
    KeSetEvent(v13[22], 0, 0);
    return 0;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS )
  {
    v10 = dword_1C006E488;
    v11 = dword_1C006E484;
    v12 = dword_1C006E47C;
    dword_1C006E488 = a3->Wake.bFlush;
    dword_1C006E484 = a3->Evict.AllocationHandle;
    dword_1C006E47C = a3->SuspendProcess.bAllowWakeOnSubmission;
    a3->SetFault.Value = v10;
    a3->Evict.AllocationHandle = v11;
    a3->GetVads.GetVadRange.VaRangeIndex = v12;
    v13 = (PRKEVENT *)*this;
    goto LABEL_15;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    WdLogSingleEntry1(1LL, 19196LL);
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return (unsigned int)-1073741823;
  }
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_SETFAULT )
    goto LABEL_24;
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_RUN_UNMAP_TO_DUMMY_PAGE_TEST )
    return 0;
  if ( Type == D3DKMT_VIDMMESCAPETYPE_APERTURE_CORRUPTION_CHECK )
  {
    v7 = VIDMM_GLOBAL::ApertureCorruptionCheck((VIDMM_GLOBAL *)this, 0);
    if ( v7 != -1073741811 )
      return v7;
LABEL_24:
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36, this + 5130, 0);
    DXGPUSHLOCK::AcquireShared(v37);
    v18 = a3->Type;
    v38 = 1;
    v19 = v18 - 7;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 3 )
        {
          WdLogSingleEntry0(3LL);
LABEL_43:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
          return v7;
        }
        v21 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
        if ( v21 )
          v21 = (VIDMM_PROCESS *)*((_QWORD *)v21 + 1);
        VIDMM_PROCESS::GetNumBytesToTrim(v21, *((_DWORD *)this[3] + 60), &a3->EvictByNtHandle.NtHandle);
      }
      else
      {
        v22 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
        if ( v22 )
          v23 = *(_QWORD *)(v22 + 8);
        else
          v23 = 0LL;
        hProcess = a3->Evict.hProcess;
        NtHandle = a3->EvictByNtHandle.NtHandle;
        v26 = *(VIDMM_GLOBAL ***)(*(_QWORD *)(v23 + 16) + 8LL * *((unsigned int *)this[3] + 60));
        if ( v26 )
        {
          v27 = *v26;
          for ( i = 0; i < *((_DWORD *)*v26 + 1754); v27 = *v26 )
          {
            v29 = i++;
            v30 = (__int64)v26[6] + 296 * v29;
            *(_QWORD *)(v30 + 40) = NtHandle;
            *(_QWORD *)(v30 + 48) = hProcess;
          }
          VIDMM_GLOBAL::RequestNewBudget(v27, 0);
        }
      }
    }
    else
    {
      v31 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
      if ( v31 )
        v31 = (VIDMM_PROCESS *)*((_QWORD *)v31 + 1);
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v31, *((_DWORD *)this[3] + 60), 0xFFFFFFFF);
      if ( !VirtualAddressAllocator )
        goto LABEL_43;
      CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
    }
    v7 = 0;
    goto LABEL_43;
  }
  if ( Type != D3DKMT_VIDMMESCAPETYPE_SUSPEND_CPU_ACCESS_TEST )
    goto LABEL_24;
  if ( (_DWORD)a4 )
    return 0LL;
  return (unsigned int)-1073741790;
}
