/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001444C
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0015374 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C001593C (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0049D0C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C00766C8 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

char __fastcall FxIoQueue::ProcessPowerEvents(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoQueuePowerState m_PowerState; // ecx
  __int32 v6; // ecx
  __int32 v7; // ecx
  __int32 v8; // ecx
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *v10; // rax
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  int v15; // ecx
  _LIST_ENTRY *p_m_PowerDriverNotified; // rsi
  char v17; // r14
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *p_acknowledgedList; // rdx
  unsigned __int8 v20; // cl
  _LIST_ENTRY *p_m_DriverOwned; // rsi
  _LIST_ENTRY *Flink; // rdx
  unsigned __int8 v23; // al
  _LIST_ENTRY *p_m_PowerNotify; // rcx
  _LIST_ENTRY *v25; // rax
  unsigned __int8 FxVerboseOn; // al
  _LIST_ENTRY *v27; // rax
  _LIST_ENTRY *v28; // rdx
  _LIST_ENTRY *v29; // rdx
  FxRequestBase *v30; // rsi
  FxIoQueue *v31; // rax
  unsigned int v32; // r14d
  unsigned __int8 v33; // r8
  WDFQUEUE__ *v34; // rax
  WDFREQUEST__ *v35; // r8
  __int64 v36; // r8
  unsigned __int8 v37; // r8
  _LIST_ENTRY *v38; // rdx
  _LIST_ENTRY *v39; // rax
  _LIST_ENTRY *v40; // rax
  unsigned __int8 v41; // al
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v43; // r9
  const void *v44; // rax
  const void *_a2; // rdx
  const void *v46; // rax
  unsigned __int16 v47; // r9
  _LIST_ENTRY *v48; // rcx
  _LIST_ENTRY *v49; // rax
  _LIST_ENTRY *v50; // rdx
  _LIST_ENTRY *v51; // rdx
  __m128i m_IoStop; // xmm0
  FxIoQueue *v53; // rax
  unsigned int v54; // r14d
  const void *v55; // rax
  const void *v56; // rdx
  unsigned __int8 v57; // r8
  WDFQUEUE__ *v58; // rax
  WDFREQUEST__ *v59; // r8
  const void *_a1; // rax
  _LIST_ENTRY *v61; // rdx
  _LIST_ENTRY *Blink; // rdx
  const void *v63; // rax
  const void *v64; // rdx
  unsigned __int8 v65; // r8
  WDFQUEUE__ *v66; // rax
  WDFREQUEST__ *v67; // r8
  const void *v68; // rax
  unsigned __int16 v69; // r9
  const void *v70; // rax
  _LIST_ENTRY acknowledgedList; // [rsp+40h] [rbp-40h] BYREF
  FxIoQueueIoStop stopCallback; // [rsp+50h] [rbp-30h] BYREF
  FxIoQueueIoStop v73; // [rsp+60h] [rbp-20h] BYREF
  FxIoQueueIoResume resumeCallback; // [rsp+70h] [rbp-10h] BYREF

  m_Globals = this->m_Globals;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState > FxIoQueuePowerPurgeNotifyingDriver )
  {
    v12 = m_PowerState - 9;
    if ( !v12 )
      goto LABEL_18;
    v13 = v12 - 1;
    if ( !v13 )
    {
      p_m_DriverOwned = &this->m_DriverOwned;
      this->m_PowerState = FxIoQueuePowerRestartingNotifyingDriver;
      Flink = this->m_DriverOwned.Flink;
      FxVerboseOn = m_Globals->FxVerboseOn;
      if ( Flink != &this->m_DriverOwned )
      {
        if ( FxVerboseOn )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
          v43 = 96;
          goto LABEL_102;
        }
        goto LABEL_55;
      }
      if ( !FxVerboseOn )
        return 1;
      v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v47 = 97;
      goto LABEL_103;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x64u, WPP_FxIoQueue_cpp_Traceguids, _a1);
        }
        this->m_PowerState = FxIoQueuePowerOn;
      }
      return 0;
    }
    p_m_PowerNotify = &this->m_PowerNotify;
    v25 = this->m_PowerNotify.Flink;
    if ( v25 == &this->m_PowerNotify )
    {
      this->m_PowerState = FxIoQueuePowerRestartingDriverNotified;
      return 1;
    }
    if ( v25->Blink != p_m_PowerNotify )
      goto LABEL_63;
    v61 = v25->Flink;
    if ( v25->Flink->Blink != v25 )
      goto LABEL_63;
    p_m_PowerNotify->Flink = v61;
    v61->Blink = p_m_PowerNotify;
    Blink = this->m_DriverOwned.Blink;
    if ( Blink->Flink != &this->m_DriverOwned )
      goto LABEL_63;
    v25->Flink = &this->m_DriverOwned;
    v30 = (FxRequestBase *)&v25[-19];
    v25->Blink = Blink;
    Blink->Flink = v25;
    this->m_DriverOwned.Blink = v25;
    resumeCallback = this->m_IoResume;
    if ( !_mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] || v30->m_Canceled )
    {
      if ( !m_Globals->FxVerboseOn )
        return 1;
      v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v47 = 99;
      goto LABEL_103;
    }
    if ( m_Globals->FxVerboseOn )
    {
      FxObject::GetObjectHandleUnchecked(v30);
      v63 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x62u, WPP_FxIoQueue_cpp_Traceguids, v63, v64);
    }
    FxObject::AddRef(v30, (void *)0x646C6F48, 5602, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Unlock(this, *PreviousIrql, v65);
    FxObject::GetObjectHandleUnchecked(v30);
    v66 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    FxIoQueueIoResume::Invoke(&resumeCallback, v66, v67);
    v36 = 5608LL;
LABEL_53:
    v30->Release(v30, (void *)1684827976, v36, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v37);
    return 1;
  }
  if ( m_PowerState == FxIoQueuePowerPurgeNotifyingDriver )
  {
    v48 = &this->m_PowerNotify;
    v49 = this->m_PowerNotify.Flink;
    if ( v49 == &this->m_PowerNotify )
    {
      this->m_PowerState = FxIoQueuePowerPurgeDriverNotified;
      return 1;
    }
    if ( v49->Blink != v48 )
      goto LABEL_63;
    v50 = v49->Flink;
    if ( v49->Flink->Blink != v49 )
      goto LABEL_63;
    v48->Flink = v50;
    v50->Blink = v48;
    v51 = this->m_PowerDriverNotified.Blink;
    if ( v51->Flink != &this->m_PowerDriverNotified )
      goto LABEL_63;
    v49->Flink = &this->m_PowerDriverNotified;
    v30 = (FxRequestBase *)&v49[-19];
    v49->Blink = v51;
    v51->Flink = v49;
    this->m_PowerDriverNotified.Blink = v49;
    m_IoStop = (__m128i)this->m_IoStop;
    BYTE1(v49[3].Flink) = 0;
    v73 = (FxIoQueueIoStop)m_IoStop;
    if ( !_mm_srli_si128(m_IoStop, 8).m128i_u64[0] || v30->m_Canceled )
      return 1;
    v53 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
    if ( v53 == (FxIoQueue *)&this->m_DriverCancelable )
    {
LABEL_83:
      v54 = 2;
    }
    else
    {
      while ( ($5BF30AA281B99519C0227DA4A018F79C *)v53[-1].m_IoPkgListNode.m_ListEntry.Blink != &v30->120 )
      {
        v53 = (FxIoQueue *)v53->FxNonPagedObject::FxObject::__vftable;
        if ( v53 == (FxIoQueue *)&this->m_DriverCancelable )
          goto LABEL_83;
      }
      v54 = 268435458;
    }
    if ( m_Globals->FxVerboseOn )
    {
      FxObject::GetObjectHandleUnchecked(v30);
      v55 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Bu, WPP_FxIoQueue_cpp_Traceguids, v55, v56);
    }
    FxObject::AddRef(v30, (void *)0x646C6F48, 5361, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Unlock(this, *PreviousIrql, v57);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v30, 512);
    FxObject::GetObjectHandleUnchecked(v30);
    v58 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    FxIoQueueIoStop::Invoke(&v73, v58, v59, v54);
    v36 = 5371LL;
    goto LABEL_53;
  }
  v6 = m_PowerState - 3;
  if ( !v6 )
  {
    if ( this->m_Dispatching == 1 )
      KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    p_m_DriverOwned = &this->m_DriverOwned;
    this->m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
    Flink = this->m_DriverOwned.Flink;
    v23 = m_Globals->FxVerboseOn;
    if ( Flink != &this->m_DriverOwned )
    {
      if ( v23 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v43 = 86;
        goto LABEL_102;
      }
LABEL_55:
      this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
      this->m_PowerNotify.Flink = Flink;
      Flink->Blink = &this->m_PowerNotify;
      this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
      p_m_DriverOwned->Blink = p_m_DriverOwned;
      p_m_DriverOwned->Flink = p_m_DriverOwned;
      return 1;
    }
    if ( !v23 )
      return 1;
    v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v47 = 87;
LABEL_103:
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v47, WPP_FxIoQueue_cpp_Traceguids, v46);
    return 1;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = &this->m_PowerNotify;
    v10 = this->m_PowerNotify.Flink;
    if ( v10 == &this->m_PowerNotify )
    {
      this->m_PowerState = FxIoQueuePowerStoppingDriverNotified;
      return 1;
    }
    if ( v10->Blink == v9 )
    {
      v28 = v10->Flink;
      if ( v10->Flink->Blink == v10 )
      {
        v9->Flink = v28;
        v28->Blink = v9;
        v29 = this->m_PowerDriverNotified.Blink;
        if ( v29->Flink == &this->m_PowerDriverNotified )
        {
          v10->Flink = &this->m_PowerDriverNotified;
          v30 = (FxRequestBase *)&v10[-19];
          v10->Blink = v29;
          v29->Flink = v10;
          this->m_PowerDriverNotified.Blink = v10;
          stopCallback = this->m_IoStop;
          if ( !_mm_srli_si128((__m128i)stopCallback, 8).m128i_u64[0] || v30->m_Canceled )
            return 1;
          v31 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
          if ( v31 == (FxIoQueue *)&this->m_DriverCancelable )
          {
LABEL_71:
            v32 = 1;
          }
          else
          {
            while ( ($5BF30AA281B99519C0227DA4A018F79C *)v31[-1].m_IoPkgListNode.m_ListEntry.Blink != &v30->120 )
            {
              v31 = (FxIoQueue *)v31->FxNonPagedObject::FxObject::__vftable;
              if ( v31 == (FxIoQueue *)&this->m_DriverCancelable )
                goto LABEL_71;
            }
            v32 = 268435457;
          }
          if ( m_Globals->FxVerboseOn )
          {
            FxObject::GetObjectHandleUnchecked(v30);
            v44 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Au, WPP_FxIoQueue_cpp_Traceguids, v44, _a2);
          }
          FxObject::AddRef(
            v30,
            (void *)0x646C6F48,
            5279,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxNonPagedObject::Unlock(this, *PreviousIrql, v33);
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags(v30, 512);
          FxObject::GetObjectHandleUnchecked(v30);
          v34 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
          FxIoQueueIoStop::Invoke(&stopCallback, v34, v35, v32);
          v36 = 5289LL;
          goto LABEL_53;
        }
      }
    }
LABEL_63:
    __fastfail(3u);
  }
  v15 = v8 - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      p_m_DriverOwned = &this->m_DriverOwned;
      this->m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
      Flink = this->m_DriverOwned.Flink;
      v41 = m_Globals->FxVerboseOn;
      if ( Flink != &this->m_DriverOwned )
      {
        if ( v41 )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
          v43 = 88;
LABEL_102:
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v43, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
          Flink = p_m_DriverOwned->Flink;
          goto LABEL_55;
        }
        goto LABEL_55;
      }
      if ( !v41 )
        return 1;
      v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v47 = 89;
      goto LABEL_103;
    }
    return 0;
  }
LABEL_18:
  p_m_PowerDriverNotified = &this->m_PowerDriverNotified;
  v17 = 0;
  v18 = this->m_PowerDriverNotified.Flink;
  acknowledgedList.Blink = &acknowledgedList;
  p_acknowledgedList = &acknowledgedList;
  acknowledgedList.Flink = &acknowledgedList;
  if ( v18 != &this->m_PowerDriverNotified )
  {
    while ( 1 )
    {
      v38 = v18->Flink;
      if ( (unsigned __int8)(BYTE1(v18[3].Flink) - 1) <= 1u )
      {
        if ( v38->Blink != v18 )
          goto LABEL_63;
        v39 = v18->Blink;
        if ( v39->Flink != v18 )
          goto LABEL_63;
        v39->Flink = v38;
        v38->Blink = v39;
        v40 = acknowledgedList.Blink;
        if ( acknowledgedList.Blink->Flink != &acknowledgedList )
          goto LABEL_63;
        v18->Blink = acknowledgedList.Blink;
        v18->Flink = &acknowledgedList;
        v40->Flink = v18;
        acknowledgedList.Blink = v18;
      }
      v18 = v38;
      if ( v38 == p_m_PowerDriverNotified )
        goto LABEL_39;
    }
  }
  while ( p_acknowledgedList != &acknowledgedList )
  {
    if ( p_acknowledgedList->Blink != &acknowledgedList )
      goto LABEL_63;
    v27 = p_acknowledgedList->Flink;
    if ( p_acknowledgedList->Flink->Blink != p_acknowledgedList )
      goto LABEL_63;
    acknowledgedList.Flink = p_acknowledgedList->Flink;
    v27->Blink = &acknowledgedList;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)&p_acknowledgedList[-19], PreviousIrql);
    v17 = 1;
LABEL_39:
    p_acknowledgedList = acknowledgedList.Flink;
  }
  if ( p_m_PowerDriverNotified->Flink == p_m_PowerDriverNotified )
  {
    if ( !this->m_TwoPhaseCompletions )
    {
      v20 = m_Globals->FxVerboseOn;
      if ( this->m_Dispatching == 1 )
      {
        if ( v20 )
        {
          v70 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Eu, WPP_FxIoQueue_cpp_Traceguids, v70);
        }
        this->m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( !v20 )
        return v17;
      v68 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v69 = 95;
      goto LABEL_110;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v68 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v69 = 93;
      goto LABEL_110;
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    v68 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v69 = 92;
LABEL_110:
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v69, WPP_FxIoQueue_cpp_Traceguids, v68);
  }
  return v17;
}
