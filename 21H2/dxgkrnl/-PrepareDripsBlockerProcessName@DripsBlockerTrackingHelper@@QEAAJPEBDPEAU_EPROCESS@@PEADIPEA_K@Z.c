/*
 * XREFs of ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C02C38B0
 * Callers:
 *     ?DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z @ 0x1C022D010 (-DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C02BFE0C (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02C09B4 (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02C37A8 (-NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02C39CC (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x1C004E9A4 (-RtlStringCbCatA@@YAJPEAD_KPEBD@Z.c)
 *     ?RtlStringCbCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z @ 0x1C004EA1C (-RtlStringCbCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z.c)
 *     RtlStringLengthWorkerA @ 0x1C004EB88 (RtlStringLengthWorkerA.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(
        DripsBlockerTrackingHelper *this,
        const char *a2,
        struct _EPROCESS *a3,
        char *a4,
        size_t cchMax,
        unsigned __int64 *a6)
{
  const char *ProcessImageFileName; // rax
  size_t v9; // rsi
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r8
  unsigned __int64 *v13; // r10
  size_t v14; // rcx
  NTSTATUS v15; // eax
  size_t v16; // rax
  __int64 v17; // rax
  size_t pcchLength; // [rsp+50h] [rbp+8h] BYREF
  char *v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = 0LL;
  pcchLength = 0LL;
  if ( a3 )
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(a3);
  else
    ProcessImageFileName = "ExternalActivation";
  v9 = (unsigned int)cchMax;
  v11 = RtlStringCbCopyExA(a4, (unsigned int)cchMax, ProcessImageFileName, &v20, &pcchLength);
  if ( v11 >= 0 )
  {
    if ( a2 )
    {
      v11 = RtlStringCbCatA(a4, (unsigned int)v9, "-");
      if ( v11 < 0 )
        return (unsigned int)v11;
      v11 = RtlStringCbCatA(a4, (unsigned int)v9, a2);
    }
    if ( v11 >= 0 )
    {
      v13 = a6;
      if ( a6 )
      {
        v14 = 0LL;
        pcchLength = 0LL;
        if ( a4 && v9 <= 0x7FFFFFFF )
        {
          v15 = RtlStringLengthWorkerA(a4, v9, &pcchLength);
          v14 = pcchLength;
          v11 = v15;
        }
        else
        {
          v11 = -1073741811;
        }
        v16 = 0LL;
        if ( v11 >= 0 )
          v16 = v14;
        *v13 = v16;
        if ( v11 < 0 )
        {
          v17 = WdLogNewEntry5_WdWarning(v14, v10, v12);
          *(_QWORD *)(v17 + 24) = v11;
          WdLogEvent5_WdWarning(v17);
        }
      }
    }
  }
  return (unsigned int)v11;
}
