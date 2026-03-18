/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00B0774
 * Callers:
 *     VidMmEscape @ 0x1C0022A00 (VidMmEscape.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001F64 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0023460 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024038 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C007080C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0081478 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C00B31B4 (-PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z.c)
 *     ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00BA414 (-Flush@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C00BB624 (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00BE6EC (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        unsigned __int64 *a4)
{
  D3DKMT_VIDMMESCAPETYPE Type; // eax
  unsigned int v7; // ebx
  PRKEVENT *v8; // rcx
  ULONG v9; // ecx
  D3DKMT_HANDLE v10; // edx
  UINT v11; // r8d
  __int64 v13; // rax
  __int64 v14; // rdx
  D3DKMT_VIDMMESCAPETYPE v15; // ecx
  __int32 v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  VIDMM_PROCESS *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  HANDLE hProcess; // r9
  UINT64 NtHandle; // r10
  VIDMM_GLOBAL **v24; // rdx
  VIDMM_GLOBAL *v25; // rcx
  unsigned int i; // r8d
  __int64 v27; // rax
  __int64 v28; // rcx
  VIDMM_PROCESS *v29; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 *v31; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v32; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v33; // [rsp+30h] [rbp-38h]
  _BYTE v34[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v35; // [rsp+48h] [rbp-20h]
  int v36; // [rsp+50h] [rbp-18h]

  Type = a3->Type;
  v7 = -1073741811;
  if ( a3->Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v13 + 24) = 18676LL;
    WdLogEvent5_WdAssertion(v13);
    v7 = -1073741823;
LABEL_22:
    if ( v7 == -1073741811 )
      goto LABEL_23;
    return v7;
  }
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_SETFAULT )
    goto LABEL_23;
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_RUN_UNMAP_TO_DUMMY_PAGE_TEST )
    return 0;
  if ( Type == D3DKMT_VIDMMESCAPETYPE_APERTURE_CORRUPTION_CHECK )
  {
    v7 = VIDMM_GLOBAL::ApertureCorruptionCheck((VIDMM_GLOBAL *)this, 0LL);
    goto LABEL_22;
  }
  if ( Type != D3DKMT_VIDMMESCAPETYPE_SUSPEND_CPU_ACCESS_TEST )
  {
    if ( Type == D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS )
    {
      v9 = dword_1C0051418;
      v10 = dword_1C0051414;
      v11 = dword_1C005140C;
      dword_1C0051418 = a3->Wake.bFlush;
      dword_1C0051414 = a3->Evict.AllocationHandle;
      dword_1C005140C = a3->SuspendProcess.bAllowWakeOnSubmission;
      a3->SetFault.Value = v9;
      a3->Evict.AllocationHandle = v10;
      a3->GetVads.GetVadRange.VaRangeIndex = v11;
      v8 = (PRKEVENT *)*this;
    }
    else
    {
      if ( Type != D3DKMT_VIDMMESCAPETYPE_WAKE )
      {
        if ( Type != D3DKMT_VIDMMESCAPETYPE_DEFRAG )
        {
          if ( Type == 17 )
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_VidMMVerifyIntegrity__private_reporting,
              0x148F1C8u,
              0LL,
              0LL,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_VidMMVerifyIntegrity_logged_traits,
              0,
              (int)v33);
LABEL_23:
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34, this + 5130, 0);
          DXGPUSHLOCK::AcquireShared(v35);
          v15 = a3->Type;
          v36 = 1;
          v16 = v15 - 7;
          if ( v16 )
          {
            v17 = (unsigned int)(v16 - 1);
            if ( (_DWORD)v17 )
            {
              if ( (_DWORD)v17 != 3 )
              {
                v18 = WdLogNewEntry5_WdWarning(v17, v14);
                WdLogEvent5_WdWarning(v18);
LABEL_42:
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
                return v7;
              }
              v19 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
              if ( v19 )
                v19 = (VIDMM_PROCESS *)*((_QWORD *)v19 + 1);
              VIDMM_PROCESS::GetNumBytesToTrim(v19, *((_DWORD *)this[3] + 58), &a3->EvictByNtHandle.NtHandle);
            }
            else
            {
              v20 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
              if ( v20 )
                v21 = *(_QWORD *)(v20 + 8);
              else
                v21 = 0LL;
              hProcess = a3->Evict.hProcess;
              NtHandle = a3->EvictByNtHandle.NtHandle;
              v24 = *(VIDMM_GLOBAL ***)(*(_QWORD *)(v21 + 16) + 8LL * *((unsigned int *)this[3] + 58));
              if ( v24 )
              {
                v25 = *v24;
                for ( i = 0; i < *((_DWORD *)*v24 + 1750); v25 = *v24 )
                {
                  v27 = i++;
                  v28 = (__int64)v24[6] + 296 * v27;
                  *(_QWORD *)(v28 + 40) = NtHandle;
                  *(_QWORD *)(v28 + 48) = hProcess;
                }
                VIDMM_GLOBAL::RequestNewBudget(v25, 0);
              }
            }
          }
          else
          {
            v29 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
            if ( v29 )
              v29 = (VIDMM_PROCESS *)*((_QWORD *)v29 + 1);
            VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                        v29,
                                        *((_DWORD *)this[3] + 58),
                                        0xFFFFFFFF);
            if ( !VirtualAddressAllocator )
              goto LABEL_42;
            CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
          }
          v7 = 0;
          goto LABEL_42;
        }
        VIDMM_GLOBAL::PerformDefragmentationEscape(
          (VIDMM_GLOBAL *)this,
          a3->Defrag.Operation,
          (unsigned int)a3,
          a4,
          v31,
          v32,
          v33);
        return 0;
      }
      v8 = (PRKEVENT *)*this;
      if ( a3->SetFault.Value )
      {
        VIDMM_WORKER_THREAD::Flush((VIDMM_WORKER_THREAD *)v8);
        return 0;
      }
    }
    KeSetEvent(v8[22], 0, 0);
    return 0;
  }
  if ( (_DWORD)a4 )
    return 0LL;
  return (unsigned int)-1073741790;
}
