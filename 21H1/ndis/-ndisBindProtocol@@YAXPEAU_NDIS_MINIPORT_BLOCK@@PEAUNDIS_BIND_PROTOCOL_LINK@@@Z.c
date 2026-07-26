/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C01051AC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0104714 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ZqD @ 0x1C002A408 (WPP_RECORDER_SF_ZqD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C0071E9C (WPP_RECORDER_SF_LZq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0103498 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103DC0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C010C484 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, Ndis::BindState *this)
{
  void *m_AdditionalContext; // rdx
  struct _NDIS_PROTOCOL_BLOCK *v5; // r12
  __int64 v6; // r8
  int v7; // r14d
  unsigned __int16 *v8; // rdx
  int v9; // r8d
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int16 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]

  m_AdditionalContext = this[1].m_AdditionalContext;
  v5 = (struct _NDIS_PROTOCOL_BLOCK *)*((_QWORD *)m_AdditionalContext + 5);
  if ( v5->MajorNdisVersion < 6u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)m_AdditionalContext,
        0x1Cu,
        0x20u,
        (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
        *((unsigned __int16 **)m_AdditionalContext + 3),
        this->Miniport);
    this->PretendBindingActive = 1;
    v7 = 0;
  }
  else
  {
    *((_BYTE *)m_AdditionalContext + 1) = 1;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)m_AdditionalContext,
        0x1Cu,
        0x1Eu,
        (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
        *((unsigned __int16 **)this[1].m_AdditionalContext + 3),
        this->Miniport);
    v7 = ndisBindNdis6Protocol(a1, v5);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ZqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)this[1].m_AdditionalContext,
        v6,
        0x1Fu,
        v12,
        *((unsigned __int16 **)this[1].m_AdditionalContext + 3));
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v7 )
  {
    Rtl::KArray<void *,1>::resize(&this->m_bindContext);
    this->m_LastErrorCode = v7;
    if ( Ndis::BindState::SetBinding(this, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C00E434B >= 4u
      && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_LZq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        *((_QWORD *)this[1].m_AdditionalContext + 3),
        v9,
        0x21u,
        (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
        v7,
        *((unsigned __int16 **)this[1].m_AdditionalContext + 3),
        this->Miniport);
    }
    if ( Ndis::BindState::SetSource(this, RemoveBindSource, UnsolicitedOpen) && (unsigned __int8)byte_1C00E434B >= 4u )
    {
      Miniport = this->Miniport;
      v8 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v11 = 34;
LABEL_29:
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v8,
          0x1Cu,
          v11,
          (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
          v8,
          Miniport);
      }
    }
  }
  else if ( v5->MajorNdisVersion < 6u )
  {
    if ( Ndis::BindState::SetPause(this, DatapathRunning, PauseReason_InitialPause)
      && (unsigned __int8)byte_1C00E434B >= 4u )
    {
      Miniport = this->Miniport;
      v8 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v11 = 36;
        goto LABEL_29;
      }
    }
  }
  else if ( Ndis::BindState::SetPause(this, DatapathRunning, PauseReason_InitialPause)
         && (unsigned __int8)byte_1C00E434B >= 4u )
  {
    Miniport = this->Miniport;
    v8 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = 35;
      goto LABEL_29;
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, (struct _NDIS_MINIPORT_BLOCK *)v8);
}
