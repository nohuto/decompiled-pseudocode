/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C01046E4
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01045A0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0026AB4 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002A6B8 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002A844 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002AAA4 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002ABBC (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0039F50 (-ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB8EC (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FDD80 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDF40 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE410 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FFB70 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00FFE10 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C0100838 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0103468 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0103C1C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C0104D1C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C0104D5C (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0104DC0 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C010517C (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C0109B8C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BB80 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010BD60 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0116218 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C01200FC (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0120300 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  char v1; // bl
  _NDIS_MINIPORT_BLOCK *m_miniport; // rsi
  _NDIS_MINIPORT_BLOCK *v4; // r14
  unsigned __int64 v5; // rsi
  __int64 m_numElements; // r15
  NDIS_BIND_PROTOCOL_LINK *value; // rcx
  _NDIS_MINIPORT_BLOCK *v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  NDIS_BIND_FILTER_LINK *v11; // rcx
  __int64 v12; // r12
  unsigned __int64 i; // r14
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r15
  Ndis::BindState *p_BindState; // rcx
  _NDIS_MINIPORT_BLOCK *v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // rsi
  NDIS_BIND_FILTER_LINK *v19; // rcx
  unsigned __int64 v20; // r14
  NDIS_BIND_LINK_BASE *v21; // rcx
  __int64 v22; // r15
  unsigned __int64 j; // r14
  NDIS_BIND_LINK_BASE *v24; // rcx
  __int64 v25; // r8
  _NDIS_MINIPORT_BLOCK *v27; // rcx
  _NDIS_MINIPORT_BLOCK *v28; // rcx
  unsigned __int64 v29; // rsi
  NDIS_BIND_FILTER_LINK *v30; // rcx
  _NDIS_MINIPORT_BLOCK *v31; // r14
  unsigned __int64 v32; // rsi
  __int64 v33; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v34; // r15
  NDIS_BIND_PROTOCOL_LINK *v35; // rax
  NDIS_BIND_PROTOCOL_LINK *v36; // rax
  __int64 v37; // rsi
  Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> >,1> *p_Filters; // r14
  unsigned __int64 v39; // rdi
  NDIS_BIND_LINK_BASE **v40; // rcx
  struct _NDIS_MINIPORT_BLOCK *v41; // rdx
  NDIS_BIND_LINK_BASE *m_currentOperation; // r15
  _NDIS_MINIPORT_BLOCK *v43; // r13
  struct _NDIS_MINIPORT_BLOCK *v44; // rdx
  KLockHolder v45; // [rsp+48h] [rbp-C0h] BYREF
  struct NDIS_RESTART_INFORMATION v46; // [rsp+60h] [rbp-A8h] BYREF

  v1 = 0;
  v46.FilterInstanceBuffer._p = 0LL;
  *((_QWORD *)&v46.FilterInstanceBuffer + 2) = 0LL;
  memset(&v46.Padding[8], 0, 104);
  v45.m_State = Unlocked;
  v45.m_Region.m_Entered = 0;
  v45.m_Lock = &this->m_lock;
  memset(&v46.RssCaps.NumberOfInterruptMessages, 0, 20);
  memset(&v46.ProtocolParameters.FilterModuleNameBuffer, 0, 60);
  KLockHolder::AcquireExclusive(&v45);
  this->m_isDirty = 0;
  KLockHolder::ReleaseExclusive(&v45);
  m_miniport = this->m_miniport;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode(this->m_miniport);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&m_miniport->BindEngine.m_lock, 0LL);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine, v41);
  }
  KLockHolder::AcquireExclusive(&v45);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
    goto LABEL_56;
  v4 = this->m_miniport;
  v5 = 0LL;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v5 != m_numElements )
  {
    if ( v5 >= v4->Bindings.Protocols.m_numElements )
      goto LABEL_106;
    value = v4->Bindings.Protocols._p[v5].__ptr_.__value_;
    if ( value->BindState.PretendBindingActive || value->BindState.m_bindContext.m_numElements )
    {
      if ( value->BindState.m_pauseReasons )
      {
        if ( value->BindState.m_actualPauseState == DatapathRunning )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)value;
          KLockHolder::ReleaseExclusive(&v45);
          ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v45);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_56;
        }
      }
    }
    ++v5;
  }
  v8 = this->m_miniport;
  v9 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v10 = v9 - 1;
    do
    {
      if ( v10 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_106;
      v11 = this->m_miniport->Bindings.Filters._p[v10].__ptr_.__value_;
      if ( v11->BindState.PretendBindingActive || v11->BindState.m_bindContext.m_numElements )
      {
        if ( v11->BindState.m_pauseReasons )
        {
          if ( v11->BindState.m_actualPauseState == DatapathRunning )
          {
            this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v11;
            KLockHolder::ReleaseExclusive(&v45);
            ndisPauseFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
            KLockHolder::AcquireExclusive(&v45);
            this->m_currentOperation = 0LL;
            Ndis::BindEngine::ApplyRules(this);
            if ( this->m_isDirty )
              goto LABEL_56;
          }
        }
      }
      --v10;
      --v9;
    }
    while ( v9 );
    v8 = this->m_miniport;
  }
  if ( v8->Bindings.Miniport.m_pauseReasons && v8->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v45);
    ndisMPauseMiniport(this->m_miniport);
    KLockHolder::AcquireExclusive(&v45);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_56;
    v8 = this->m_miniport;
  }
  v12 = v8->Bindings.Protocols.m_numElements;
  for ( i = 0LL; i != v12; ++i )
  {
    if ( i >= v8->Bindings.Protocols.m_numElements )
      goto LABEL_106;
    p = v8->Bindings.Protocols._p;
    p_BindState = &p[i].__ptr_.__value_->BindState;
    if ( p_BindState->m_unbindReasons && (p_BindState->PretendBindingActive || p_BindState->m_bindContext.m_numElements) )
    {
      if ( Ndis::BindState::SetSource(p_BindState, RemoveBindSource, UnsolicitedOpen)
        && (unsigned __int8)byte_1C00E444B >= 4u
        && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p[i].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_,
          0x1Cu,
          0xAu,
          (struct _GUID *)&WPP_7dc92789ba843694ac8581f7eed663c4_Traceguids,
          &p[i].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          p[i].__ptr_.__value_->BindState.Miniport);
      }
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)p[i];
      KLockHolder::ReleaseExclusive(&v45);
      m_currentOperation = this->m_currentOperation;
      v43 = this->m_miniport;
      if ( *((_BYTE *)m_currentOperation[1].BindState.Miniport->Reserved4.Buffer + 56) < 6u )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(&v43->BindEngine.m_lock, 0LL);
        m_currentOperation->BindState.m_actualPauseState = DatapathPaused;
        Ndis::BindEngine::EndPolicyUpdates(&v43->BindEngine, v44);
      }
      m_currentOperation->BindState.PretendBindingActive = 0;
      ndisUnbindEachProtocolOpenOnMiniport(v43, (struct NDIS_BIND_PROTOCOL_LINK *)m_currentOperation);
      KLockHolder::AcquireExclusive(&v45);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_56;
    }
  }
  v16 = this->m_miniport;
  v17 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v18 = v17 - 1;
    do
    {
      if ( v18 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_106;
      v19 = this->m_miniport->Bindings.Filters._p[v18].__ptr_.__value_;
      if ( v19->BindState.m_unbindReasons
        && (v19->BindState.PretendBindingActive || v19->BindState.m_bindContext.m_numElements) )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v19;
        KLockHolder::ReleaseExclusive(&v45);
        ndisDetachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
        KLockHolder::AcquireExclusive(&v45);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_56;
      }
      --v18;
      --v17;
    }
    while ( v17 );
    v16 = this->m_miniport;
  }
  v20 = 0LL;
  if ( v16->Bindings.Filters.m_numElements )
  {
    while ( v20 < v16->Bindings.Filters.m_numElements )
    {
      v21 = &v16->Bindings.Filters._p[v20].__ptr_.__value_->NDIS_BIND_LINK_BASE;
      if ( !v21->BindState.m_unbindReasons
        && !v21->BindState.PretendBindingActive
        && !v21->BindState.m_bindContext.m_numElements )
      {
        this->m_currentOperation = v21;
        KLockHolder::ReleaseExclusive(&v45);
        ndisAttachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation, v25);
        KLockHolder::AcquireExclusive(&v45);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_56;
      }
      v16 = this->m_miniport;
      if ( ++v20 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_44;
    }
LABEL_106:
    __fastfail(5u);
  }
LABEL_44:
  v22 = v16->Bindings.Protocols.m_numElements;
  for ( j = 0LL; j != v22; ++j )
  {
    if ( j >= v16->Bindings.Protocols.m_numElements )
      goto LABEL_106;
    v24 = &v16->Bindings.Protocols._p[j].__ptr_.__value_->NDIS_BIND_LINK_BASE;
    if ( !v24->BindState.m_unbindReasons
      && !v24->BindState.PretendBindingActive
      && !v24->BindState.m_bindContext.m_numElements )
    {
      this->m_currentOperation = v24;
      KLockHolder::ReleaseExclusive(&v45);
      ndisBindProtocol(this->m_miniport, &this->m_currentOperation->BindState);
      KLockHolder::AcquireExclusive(&v45);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_56;
    }
  }
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  v27 = this->m_miniport;
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons || v27->Bindings.Miniport.m_actualPauseState )
    goto LABEL_60;
  KLockHolder::ReleaseExclusive(&v45);
  ndisMRestartMiniport(this->m_miniport, (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  KLockHolder::AcquireExclusive(&v45);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
  {
LABEL_56:
    v1 = 1;
    goto LABEL_57;
  }
  v27 = this->m_miniport;
LABEL_60:
  ndisPostProcessRestartParametersAfterMiniport(v27, (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  v28 = this->m_miniport;
  v29 = 0LL;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    while ( v29 < v28->Bindings.Filters.m_numElements )
    {
      v30 = v28->Bindings.Filters._p[v29].__ptr_.__value_;
      if ( (v30->BindState.PretendBindingActive || v30->BindState.m_bindContext.m_numElements)
        && !v30->BindState.m_pauseReasons
        && v30->BindState.m_actualPauseState == DatapathPaused )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v30;
        KLockHolder::ReleaseExclusive(&v45);
        ndisRestartFilter(
          this->m_miniport,
          (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation,
          (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
        KLockHolder::AcquireExclusive(&v45);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_56;
      }
      v28 = this->m_miniport;
      if ( ++v29 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_65;
    }
    goto LABEL_106;
  }
LABEL_65:
  ndisPostProcessRestartParametersAfterFilters(v28, (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  v31 = this->m_miniport;
  v32 = 0LL;
  v33 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v32 != v33 )
  {
    if ( v32 >= v31->Bindings.Protocols.m_numElements )
      goto LABEL_106;
    v34 = v31->Bindings.Protocols._p;
    v35 = v34[v32].__ptr_.__value_;
    if ( (v35->BindState.PretendBindingActive || v35->BindState.m_bindContext.m_numElements)
      && !v35->BindState.m_pauseReasons
      && v35->BindState.m_actualPauseState == DatapathPaused )
    {
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v35;
      KLockHolder::ReleaseExclusive(&v45);
      ndisRestartProtocol(
        this->m_miniport,
        (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation,
        (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
      KLockHolder::AcquireExclusive(&v45);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_56;
    }
    v36 = v34[v32++].__ptr_.__value_;
    v36->BindState.m_AdditionalContext = 0LL;
  }
  ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&this->m_miniport->MiniportOwner);
  v37 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    p_Filters = &this->m_miniport->Bindings.Filters;
    v39 = v37 - 1;
    while ( v39 < p_Filters->m_numElements )
    {
      _mm_lfence();
      v40 = (NDIS_BIND_LINK_BASE **)&p_Filters->_p[v39];
      if ( !(*v40)->BindState.m_bindContext.m_numElements && !(*v40)->BindState.m_bindSources )
      {
        if ( v39 >= p_Filters->m_numElements )
          goto LABEL_106;
        wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(v40);
        Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
          (__int64)p_Filters,
          v39 + 1,
          v39,
          p_Filters->m_numElements - v39 - 1);
        --p_Filters->m_numElements;
      }
      --v39;
      if ( !--v37 )
        goto LABEL_85;
    }
    goto LABEL_106;
  }
LABEL_85:
  KLockHolder::ReleaseExclusive(&v45);
LABEL_57:
  KLockHolder::~KLockHolder(&v45);
  NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION((NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  return v1;
}
