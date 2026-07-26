/*
 * XREFs of ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00FFE10
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C01046E4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF__guid_DqD @ 0x1C00250B4 (WPP_RECORDER_SF__guid_DqD.c)
 *     WPP_RECORDER_SF__guid_Dq @ 0x1C0025180 (WPP_RECORDER_SF__guid_Dq.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002AAA4 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C003AFD4 (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB8EC (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD4C4 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD54C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C010271C (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C011EA18 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123080 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012CDE8 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

void __fastcall ndisRestartFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *this,
        struct NDIS_RESTART_INFORMATION *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _NDIS_FILTER_BLOCK *BindContext; // r14
  unsigned int restarted; // esi
  __int64 v10; // r8
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  int v12; // [rsp+20h] [rbp-108h]
  char v13[160]; // [rsp+50h] [rbp-D8h] BYREF

  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&this->BindState);
  if ( !*(_DWORD *)(v7 + 8) )
    ndisInitializeMiniportRestartAttributes(a1, a3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      v7,
      0x12u,
      v12,
      (__int64)&this->BindDriver._p->_t.Guid);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  restarted = ndisRestartFilterInner(BindContext, a3);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_DqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&this->BindDriver._p->_t.Guid,
      v10,
      0x13u,
      v12,
      (__int64)&this->BindDriver._p->_t.Guid);
  if ( restarted )
  {
    NdisTraceLoggingRareFilterPath(BindContext->FilterDriver, 3LL, restarted);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    this->BindState.m_LastErrorCode = restarted;
    if ( Ndis::BindState::SetBinding(&this->BindState, BindingDisabled, Reason_LastRestartAttemptFailed) )
    {
      memset(v13, 0, sizeof(v13));
      if ( (unsigned __int8)byte_1C00E444B >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v13);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v11,
            0x1Cu,
            0x15u,
            (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
            *(unsigned __int16 **)&v13[8],
            *(_QWORD *)v13);
      }
    }
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    if ( this->BindState.NeedsPauseAction
      && Ndis::BindState::SetPause(&this->BindState, DatapathPaused, PauseReason_RestartNeeded) )
    {
      memset(v13, 0, sizeof(v13));
      if ( (unsigned __int8)byte_1C00E444B >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v13);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v11,
            0x1Cu,
            0x14u,
            (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
            *(unsigned __int16 **)&v13[8],
            *(_QWORD *)v13);
      }
    }
    this->BindState.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v11);
}
