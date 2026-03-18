/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0011924
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000E05C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C000F1E0 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0081DC0 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
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
  __int32 v11; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *v15; // rax
  _LIST_ENTRY *p_m_DriverOwned; // rsi
  _LIST_ENTRY *v17; // rdx
  unsigned __int8 v18; // al
  int v20; // ecx
  _LIST_ENTRY *p_m_PowerDriverNotified; // rsi
  char v22; // r14
  _LIST_ENTRY *v23; // rcx
  FxIoQueueIoResume **p_resumeCallback; // rdx
  unsigned __int8 v25; // cl
  unsigned __int8 FxVerboseOn; // al
  FxIoQueueIoResume *v27; // rax
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
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  unsigned __int8 v41; // al
  const void *v42; // rax
  unsigned __int16 v43; // r9
  const void *v44; // rax
  const void *_a2; // rdx
  const void *v46; // rax
  unsigned __int16 v47; // r9
  _LIST_ENTRY *p_m_PowerNotify; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v50; // rdx
  _LIST_ENTRY *Blink; // rdx
  FxIoQueueIoStop m_IoStop; // xmm0
  FxIoQueue *v53; // rax
  unsigned int v54; // r14d
  const void *ObjectHandleUnchecked; // rax
  const void *v56; // rdx
  unsigned __int8 v57; // r8
  WDFQUEUE__ *v58; // rax
  WDFREQUEST__ *v59; // r8
  const void *_a1; // rax
  _LIST_ENTRY *v61; // rdx
  _LIST_ENTRY *v62; // rdx
  const void *v63; // rax
  const void *v64; // rdx
  unsigned __int8 v65; // r8
  WDFQUEUE__ *v66; // rax
  WDFREQUEST__ *v67; // r8
  const void *v68; // rax
  unsigned __int16 v69; // r9
  const void *v70; // rax
  FxIoQueueIoResume resumeCallback; // [rsp+40h] [rbp-10h] BYREF

  m_Globals = this->m_Globals;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState <= FxIoQueuePowerPurgeNotifyingDriver )
  {
    if ( m_PowerState == FxIoQueuePowerPurgeNotifyingDriver )
    {
      p_m_PowerNotify = &this->m_PowerNotify;
      Flink = this->m_PowerNotify.Flink;
      if ( Flink == &this->m_PowerNotify )
      {
        this->m_PowerState = FxIoQueuePowerPurgeDriverNotified;
        return 1;
      }
      if ( Flink->Blink == p_m_PowerNotify )
      {
        v50 = Flink->Flink;
        if ( Flink->Flink->Blink == Flink )
        {
          p_m_PowerNotify->Flink = v50;
          v50->Blink = p_m_PowerNotify;
          Blink = this->m_PowerDriverNotified.Blink;
          if ( Blink->Flink == &this->m_PowerDriverNotified )
          {
            Flink->Flink = &this->m_PowerDriverNotified;
            v30 = (FxRequestBase *)&Flink[-19];
            Flink->Blink = Blink;
            Blink->Flink = Flink;
            this->m_PowerDriverNotified.Blink = Flink;
            m_IoStop = this->m_IoStop;
            BYTE1(Flink[3].Flink) = 0;
            resumeCallback = (FxIoQueueIoResume)m_IoStop;
            if ( !_mm_srli_si128((__m128i)m_IoStop, 8).m128i_u64[0] || v30->m_Canceled )
              return 1;
            v53 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
            if ( v53 == (FxIoQueue *)&this->m_DriverCancelable )
            {
LABEL_82:
              v54 = 2;
            }
            else
            {
              while ( ($2E9503FEA5AD2275F0EE453185AD8E99 *)v53[-1].m_IoPkgListNode.m_ListEntry.Blink != &v30->120 )
              {
                v53 = (FxIoQueue *)v53->FxNonPagedObject::FxObject::__vftable;
                if ( v53 == (FxIoQueue *)&this->m_DriverCancelable )
                  goto LABEL_82;
              }
              v54 = 268435458;
            }
            if ( m_Globals->FxVerboseOn )
            {
              FxObject::GetObjectHandleUnchecked(v30);
              ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Bu, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, v56);
            }
            FxObject::AddRef(
              v30,
              (void *)0x646C6F48,
              5361,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxNonPagedObject::Unlock(this, *PreviousIrql, v57);
            if ( m_Globals->FxVerifierOn )
              FxRequestBase::SetVerifierFlags(v30, 512);
            FxObject::GetObjectHandleUnchecked(v30);
            v58 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
            FxIoQueueIoStop::Invoke((FxIoQueueIoStop *)&resumeCallback, v58, v59, v54);
            v36 = 5371LL;
            goto LABEL_52;
          }
        }
      }
      goto LABEL_62;
    }
    v11 = m_PowerState - 3;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        p_m_DriverOwned = &this->m_DriverOwned;
        this->m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
        v17 = this->m_DriverOwned.Flink;
        FxVerboseOn = m_Globals->FxVerboseOn;
        if ( v17 == &this->m_DriverOwned )
        {
          if ( !FxVerboseOn )
            return 1;
          v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          v47 = 87;
          goto LABEL_103;
        }
        if ( !FxVerboseOn )
          goto LABEL_54;
        v42 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v43 = 86;
LABEL_101:
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v43, WPP_FxIoQueue_cpp_Traceguids, v42);
        v17 = p_m_DriverOwned->Flink;
        goto LABEL_54;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v14 = &this->m_PowerNotify;
        v15 = this->m_PowerNotify.Flink;
        if ( v15 == &this->m_PowerNotify )
        {
          this->m_PowerState = FxIoQueuePowerStoppingDriverNotified;
          return 1;
        }
        if ( v15->Blink == v14 )
        {
          v28 = v15->Flink;
          if ( v15->Flink->Blink == v15 )
          {
            v14->Flink = v28;
            v28->Blink = v14;
            v29 = this->m_PowerDriverNotified.Blink;
            if ( v29->Flink == &this->m_PowerDriverNotified )
            {
              v15->Flink = &this->m_PowerDriverNotified;
              v30 = (FxRequestBase *)&v15[-19];
              v15->Blink = v29;
              v29->Flink = v15;
              this->m_PowerDriverNotified.Blink = v15;
              resumeCallback = (FxIoQueueIoResume)this->m_IoStop;
              if ( !_mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] || v30->m_Canceled )
                return 1;
              v31 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
              if ( v31 == (FxIoQueue *)&this->m_DriverCancelable )
              {
LABEL_70:
                v32 = 1;
              }
              else
              {
                while ( ($2E9503FEA5AD2275F0EE453185AD8E99 *)v31[-1].m_IoPkgListNode.m_ListEntry.Blink != &v30->120 )
                {
                  v31 = (FxIoQueue *)v31->FxNonPagedObject::FxObject::__vftable;
                  if ( v31 == (FxIoQueue *)&this->m_DriverCancelable )
                    goto LABEL_70;
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
              FxIoQueueIoStop::Invoke((FxIoQueueIoStop *)&resumeCallback, v34, v35, v32);
              v36 = 5289LL;
              goto LABEL_52;
            }
          }
        }
        goto LABEL_62;
      }
      v20 = v13 - 1;
      if ( !v20 )
        goto LABEL_22;
      if ( v20 == 1 )
      {
        p_m_DriverOwned = &this->m_DriverOwned;
        this->m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
        v17 = this->m_DriverOwned.Flink;
        v41 = m_Globals->FxVerboseOn;
        if ( v17 == &this->m_DriverOwned )
        {
          if ( !v41 )
            return 1;
          v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          v47 = 89;
          goto LABEL_103;
        }
        if ( !v41 )
          goto LABEL_54;
        v42 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v43 = 88;
        goto LABEL_101;
      }
    }
    else if ( this->m_Dispatching == 1 )
    {
      KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
    }
    return 0;
  }
  v6 = m_PowerState - 9;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v9 = &this->m_PowerNotify;
        v10 = this->m_PowerNotify.Flink;
        if ( v10 == &this->m_PowerNotify )
        {
          this->m_PowerState = FxIoQueuePowerRestartingDriverNotified;
          return 1;
        }
        if ( v10->Blink == v9 )
        {
          v61 = v10->Flink;
          if ( v10->Flink->Blink == v10 )
          {
            v9->Flink = v61;
            v61->Blink = v9;
            v62 = this->m_DriverOwned.Blink;
            if ( v62->Flink == &this->m_DriverOwned )
            {
              v10->Flink = &this->m_DriverOwned;
              v30 = (FxRequestBase *)&v10[-19];
              v10->Blink = v62;
              v62->Flink = v10;
              this->m_DriverOwned.Blink = v10;
              resumeCallback = this->m_IoResume;
              if ( _mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] && !v30->m_Canceled )
              {
                if ( m_Globals->FxVerboseOn )
                {
                  FxObject::GetObjectHandleUnchecked(v30);
                  v63 = (const void *)FxObject::GetObjectHandleUnchecked(this);
                  WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x62u, WPP_FxIoQueue_cpp_Traceguids, v63, v64);
                }
                FxObject::AddRef(
                  v30,
                  (void *)0x646C6F48,
                  5602,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                FxNonPagedObject::Unlock(this, *PreviousIrql, v65);
                FxObject::GetObjectHandleUnchecked(v30);
                v66 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
                FxIoQueueIoResume::Invoke(&resumeCallback, v66, v67);
                v36 = 5608LL;
LABEL_52:
                v30->Release(
                  v30,
                  (void *)1684827976,
                  v36,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                FxNonPagedObject::Lock(this, PreviousIrql, v37);
                return 1;
              }
              if ( !m_Globals->FxVerboseOn )
                return 1;
              v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
              v47 = 99;
LABEL_103:
              WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v47, WPP_FxIoQueue_cpp_Traceguids, v46);
              return 1;
            }
          }
        }
LABEL_62:
        __fastfail(3u);
      }
      if ( v8 == 1 )
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
    p_m_DriverOwned = &this->m_DriverOwned;
    this->m_PowerState = FxIoQueuePowerRestartingNotifyingDriver;
    v17 = this->m_DriverOwned.Flink;
    v18 = m_Globals->FxVerboseOn;
    if ( v17 == &this->m_DriverOwned )
    {
      if ( !v18 )
        return 1;
      v46 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v47 = 97;
      goto LABEL_103;
    }
    if ( v18 )
    {
      v42 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v43 = 96;
      goto LABEL_101;
    }
LABEL_54:
    this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
    this->m_PowerNotify.Flink = v17;
    v17->Blink = &this->m_PowerNotify;
    this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
    p_m_DriverOwned->Blink = p_m_DriverOwned;
    p_m_DriverOwned->Flink = p_m_DriverOwned;
    return 1;
  }
LABEL_22:
  p_m_PowerDriverNotified = &this->m_PowerDriverNotified;
  v22 = 0;
  v23 = this->m_PowerDriverNotified.Flink;
  resumeCallback.Method = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))&resumeCallback;
  p_resumeCallback = (FxIoQueueIoResume **)&resumeCallback;
  resumeCallback.m_CallbackLock = (FxCallbackLock *)&resumeCallback;
  if ( v23 != &this->m_PowerDriverNotified )
  {
    while ( 1 )
    {
      v38 = v23->Flink;
      if ( (unsigned __int8)(BYTE1(v23[3].Flink) - 1) <= 1u )
      {
        if ( v38->Blink != v23 )
          goto LABEL_62;
        v39 = v23->Blink;
        if ( v39->Flink != v23 )
          goto LABEL_62;
        v39->Flink = v38;
        v38->Blink = v39;
        Method = resumeCallback.Method;
        if ( *(FxIoQueueIoResume **)resumeCallback.Method != &resumeCallback )
          goto LABEL_62;
        v23->Blink = (_LIST_ENTRY *)resumeCallback.Method;
        v23->Flink = (_LIST_ENTRY *)&resumeCallback;
        *(_QWORD *)Method = v23;
        resumeCallback.Method = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))v23;
      }
      v23 = v38;
      if ( v38 == p_m_PowerDriverNotified )
        goto LABEL_38;
    }
  }
  while ( p_resumeCallback != (FxIoQueueIoResume **)&resumeCallback )
  {
    if ( p_resumeCallback[1] != &resumeCallback )
      goto LABEL_62;
    v27 = *p_resumeCallback;
    if ( (FxIoQueueIoResume **)(*p_resumeCallback)->Method != p_resumeCallback )
      goto LABEL_62;
    resumeCallback.m_CallbackLock = (FxCallbackLock *)*p_resumeCallback;
    v27->Method = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))&resumeCallback;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)(p_resumeCallback - 38), PreviousIrql);
    v22 = 1;
LABEL_38:
    p_resumeCallback = (FxIoQueueIoResume **)resumeCallback.m_CallbackLock;
  }
  if ( p_m_PowerDriverNotified->Flink == p_m_PowerDriverNotified )
  {
    if ( !this->m_TwoPhaseCompletions )
    {
      v25 = m_Globals->FxVerboseOn;
      if ( this->m_Dispatching == 1 )
      {
        if ( v25 )
        {
          v70 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Eu, WPP_FxIoQueue_cpp_Traceguids, v70);
        }
        this->m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( !v25 )
        return v22;
      v68 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v69 = 95;
      goto LABEL_110;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v68 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v69 = 93;
LABEL_110:
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v69, WPP_FxIoQueue_cpp_Traceguids, v68);
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    v68 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v69 = 92;
    goto LABEL_110;
  }
  return v22;
}
