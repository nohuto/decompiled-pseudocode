/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0103C1C
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C01046E4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_Zqq @ 0x1C002A044 (WPP_RECORDER_SF_Zqq.c)
 *     WPP_RECORDER_SF_ZqD @ 0x1C002A9A8 (WPP_RECORDER_SF_ZqD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002AAA4 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C003AFD4 (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C00726FC (WPP_RECORDER_SF_LZq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB8EC (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD4C4 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0103468 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010A474 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C010C4F4 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011FCA8 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  unsigned __int64 v3; // rdi
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r14
  __int64 m_numElements; // rax
  struct _NDIS_OPEN_BLOCK *v9; // r14
  KPushLock *p_m_lock; // r14
  Rtl::KString *value; // rdx
  __int64 v12; // r8
  int v13; // r15d
  int v14; // r8d
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes(a1, a3);
  if ( RunningDriver->MajorNdisVersion >= 6u )
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    v16 = m_numElements;
    while ( v3 != m_numElements )
    {
      if ( v3 >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(5u);
      v9 = (struct _NDIS_OPEN_BLOCK *)a2->BindState.m_bindContext._p[v3];
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          0x1Cu,
          0x14u,
          (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
          &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          (char)a2->BindState.Miniport,
          v9);
      ndisRestartProtocolInner(v9, a3);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          0x1Cu,
          0x15u,
          (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
          &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          (char)a2->BindState.Miniport,
          v9);
      m_numElements = v16;
      ++v3;
    }
    p_m_lock = &a1->BindEngine.m_lock;
LABEL_13:
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
    a2->BindState.m_actualPauseState = DatapathRunning;
    goto LABEL_14;
  }
  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x1Cu,
      0x16u,
      (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
      a2->BindState.Miniport);
  v13 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2->BindDriver._p,
      v12,
      0x17u,
      v15,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length);
  p_m_lock = &a1->BindEngine.m_lock;
  if ( !v13 )
    goto LABEL_13;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  Rtl::KArray<void *,1>::resize(&a2->BindState.m_bindContext);
  a2->BindState.m_LastErrorCode = v13;
  if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00E444B >= 4u
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LZq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2->BindDriver._p->_t.Name.__ptr_.__value_,
      v14,
      0x18u,
      (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
      v13,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
      a2->BindState.Miniport);
  }
  if ( Ndis::BindState::SetSource(&a2->BindState, RemoveBindSource, UnsolicitedOpen)
    && (unsigned __int8)byte_1C00E444B >= 4u )
  {
    value = a2->BindDriver._p->_t.Name.__ptr_.__value_;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)value,
        0x1Cu,
        0x19u,
        (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
        &value->Length,
        a2->BindState.Miniport);
  }
LABEL_14:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, (struct _NDIS_MINIPORT_BLOCK *)value);
}
