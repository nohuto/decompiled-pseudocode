/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C02E3660
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C014495C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0144A74 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C02F3C50 (MonitorIsUsingDefaultMonitorProfile.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 IsUsingDefaultMonitorProfile; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  VIDPN_MGR *v17; // r14
  int ConnectedMonitorHandle; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  struct HDXGMONITOR__ *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  struct HDXGMONITOR__ *v35; // [rsp+80h] [rbp+40h] BYREF
  __int64 v36; // [rsp+88h] [rbp+48h] BYREF

  v32 = -1;
  v33 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 6056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6056);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 6056LL);
  if ( a3 )
  {
    if ( !this )
    {
      v12 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v12 + 24) = 0LL;
LABEL_13:
      WdLogEvent5_WdError(v12);
      LODWORD(IsUsingDefaultMonitorProfile) = -1071775742;
      goto LABEL_25;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = *((_QWORD *)this + 337);
    if ( !v16 )
    {
      v12 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v12 + 24) = this;
      goto LABEL_13;
    }
    v17 = *(VIDPN_MGR **)(v16 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v36, (__int64)v17);
    v35 = 0LL;
    ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v17, (unsigned int)v6, &v35);
    IsUsingDefaultMonitorProfile = ConnectedMonitorHandle;
    if ( ConnectedMonitorHandle == -1073741275 )
    {
      v21 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v21 + 24) = v6;
      *(_QWORD *)(v21 + 32) = this;
      WdLogEvent5_WdError(v21);
      LODWORD(IsUsingDefaultMonitorProfile) = -1071774920;
    }
    else
    {
      if ( ConnectedMonitorHandle >= 0 )
      {
        v24 = v35;
        if ( !v35 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v20, v19);
          WdLogEvent5_WdAssertion(v25);
        }
        IsUsingDefaultMonitorProfile = (int)MonitorIsUsingDefaultMonitorProfile(v24, a3);
        VIDPN_MGR::ReleaseMonitorHandle(v17, v24, v26, v27);
        if ( (int)IsUsingDefaultMonitorProfile >= 0 )
        {
          LODWORD(IsUsingDefaultMonitorProfile) = 0;
          goto LABEL_24;
        }
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v28, v22);
        v23[3] = v24;
        v23[4] = IsUsingDefaultMonitorProfile;
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
        v23[3] = v6;
        v23[4] = this;
        v23[5] = IsUsingDefaultMonitorProfile;
      }
      WdLogEvent5_WdError(v23);
    }
LABEL_24:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40), v22);
    goto LABEL_25;
  }
  v9 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v9 + 24) = 0LL;
  WdLogEvent5_WdError(v9);
  LODWORD(IsUsingDefaultMonitorProfile) = -1073741811;
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v10);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)IsUsingDefaultMonitorProfile;
}
