/*
 * XREFs of ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C02F1E1C
 * Callers:
 *     MonitorDRTTest @ 0x1C02F334C (MonitorDRTTest.c)
 * Callees:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C01352F0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall MONITOR_MGR::_DRTGetTargetInformation(
        MONITOR_MGR *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v12; // rcx
  unsigned int MonitorInformationForTargets; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  struct _D3DKMT_DRT_MONITOR *v18; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-10h]

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((unsigned int *)a2 + 4);
  v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( (unsigned int)v8 > *(_DWORD *)(v9 + 1452) )
  {
    v10 = WdLogNewEntry5_WdWarning(v9, v8, a3);
    *(_QWORD *)(v10 + 24) = *((unsigned int *)a2 + 4);
LABEL_7:
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  v12 = 12 * v8 + 20;
  if ( *((unsigned int *)a2 + 1) < v12 )
  {
    v10 = WdLogNewEntry5_WdWarning(v12, v8, a3);
    *(_QWORD *)(v10 + 24) = *((unsigned int *)a2 + 4);
    *(_QWORD *)(v10 + 32) = *((unsigned int *)a2 + 1);
    goto LABEL_7;
  }
  v19 = 0;
  v18 = a2;
  MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                   (struct _FAST_MUTEX *)this,
                                   (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&DRTGetTargetCBContext::_pDRTTargetInfoCollectorCB,
                                   &v18,
                                   a4);
  v15 = MonitorInformationForTargets;
  if ( MonitorInformationForTargets == -1073741275 )
  {
    v16 = v19;
    if ( *((_DWORD *)a2 + 4) < v19 )
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v15, v14);
      WdLogEvent5_WdDmmEvent(v17);
      v16 = v19;
    }
    LODWORD(v15) = 0;
    *((_DWORD *)a2 + 4) = v16;
  }
  return (unsigned int)v15;
}
