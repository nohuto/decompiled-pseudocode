/*
 * XREFs of ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000B1D0
 * Callers:
 *     imp_WdfRequestSend @ 0x1C000AF90 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C007462C (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C007A7B0 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 * Callees:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000505C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0013E68 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C005A5D0 (WPP_IFR_SF_qid.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x1C0068AE4 (WPP_IFR_SF_qLqd.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C00699AC (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1C007409C (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00C7F18 (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitLocked(
        FxIoTarget *this,
        unsigned __int64 Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  char v6; // r13
  char v7; // r12
  char v8; // r14
  _WDF_REQUEST_SEND_OPTIONS *v9; // rax
  unsigned __int64 v10; // rbx
  int v12; // edi
  char v13; // r15
  _WDF_IO_TARGET_STATE m_State; // r8d
  unsigned int v15; // edi
  int v16; // ecx
  int v17; // ebp
  unsigned int v18; // edx
  bool v19; // zf
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rcx
  _LIST_ENTRY *Blink; // rdx
  _FX_DRIVER_GLOBALS *v23; // r12
  unsigned __int64 v24; // rbp
  unsigned __int16 *v26; // rdi
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  int v29; // eax
  signed int Timer; // r13d
  unsigned __int64 v31; // rcx
  const void *v32; // rax
  const void *_a3; // rdx
  unsigned __int64 v34; // rcx
  const void *v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  const void *v38; // rcx
  unsigned __int64 v39; // rdx
  const void *v40; // rax
  unsigned __int64 v41; // rcx
  FxTagTracker *v42; // rax
  _IO_STACK_LOCATION *v43; // rcx
  const void *v44; // rdx
  unsigned __int64 v45; // rax
  const void *v46; // rcx
  unsigned int v47; // eax
  const void *v48; // rax
  MxTimer *v49; // rcx
  __int64 Timeout; // rdx
  int v51; // [rsp+90h] [rbp+8h]
  int v52; // [rsp+90h] [rbp+8h]
  _FX_DRIVER_GLOBALS *FxDriverGlobals; // [rsp+98h] [rbp+10h]

  m_Globals = this->m_Globals;
  FxDriverGlobals = m_Globals;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = Options;
  v10 = Request;
  v12 = 0;
  if ( *(_DWORD *)(Request + 208) )
  {
    v26 = (unsigned __int16 *)(Request + 10);
    v27 = Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v28 = Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(Request + 10) )
      v28 = 0LL;
    if ( v28 )
      v10 = v28;
    WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x1Du, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, (const void *)v10);
    if ( !*v26 )
      v27 = 0LL;
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v27);
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    v13 = 1;
    v29 = FxIoTarget::Vf_VerifySubmitLocked(this, m_Globals, (FxRequestBase *)Request);
    if ( v29 < 0 )
    {
      Timer = v29;
      goto LABEL_86;
    }
    m_Globals = FxDriverGlobals;
    v9 = Options;
  }
  else
  {
    v13 = 0;
  }
  if ( (Flags & 1) != 0 && v9->Timeout )
  {
    Timer = FxRequestBase::CreateTimer((FxRequestBase *)v10);
    if ( Timer < 0 )
    {
      v31 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v10 + 10) )
        v31 = 0LL;
      v32 = (const void *)v10;
      if ( v31 )
        v32 = (const void *)v31;
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xEu, 0x1Eu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v32, Timer);
      goto LABEL_86;
    }
    m_Globals = FxDriverGlobals;
    v6 = 1;
  }
  m_State = this->m_State;
  if ( (Flags & 4) != 0 )
  {
    if ( (unsigned int)(m_State - 3) <= 2 && !this->m_Removing )
    {
      Timer = -1073741436;
      _a3 = (const void *)v10;
      v34 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v10 + 10) )
        v34 = 0LL;
      if ( v34 )
        _a3 = (const void *)v34;
      v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v35 = 0LL;
      WPP_IFR_SF_qLqd(
        m_Globals,
        4u,
        0xEu,
        0x1Fu,
        (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
        v35,
        m_State,
        _a3,
        -1073741436);
      goto LABEL_86;
    }
    v15 = 1;
    v36 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v37 = v10;
    if ( !*(_WORD *)(v10 + 10) )
      v36 = 0LL;
    if ( v36 )
      v37 = v36;
    v38 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v38 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 4u, 0xEu, 0x20u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v38, v37, m_State);
    *(_BYTE *)(v10 + 212) |= 0x10u;
    v7 = 1;
    goto LABEL_8;
  }
  if ( m_State == WdfIoTargetStarted )
  {
    v15 = 1;
LABEL_8:
    v16 = 3;
    v17 = 1;
    goto LABEL_9;
  }
  if ( m_State != WdfIoTargetStopped )
  {
    v39 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v40 = (const void *)v10;
    if ( !this->m_ObjectSize )
      v39 = 0LL;
    v41 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v10 + 10) )
      v41 = 0LL;
    if ( v41 )
      v40 = (const void *)v41;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0x21u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v40, v39, m_State);
    Timer = -1073741436;
    goto LABEL_86;
  }
  if ( Flags < 0 )
  {
    Timer = -1073741436;
    goto LABEL_86;
  }
  v15 = 2;
  v17 = 0;
  v16 = 2;
LABEL_9:
  v51 = v16;
  *(_QWORD *)(v10 + 128) = v10 + 120;
  *(_QWORD *)(v10 + 120) = v10 + 120;
  *(_QWORD *)(v10 + 160) = this;
  _InterlockedIncrement(&this->m_IoCount);
  v18 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
  if ( *(char *)(v10 + 24) < 0 )
  {
    v42 = *(FxTagTracker **)(v10 - 48);
    if ( v42 )
    {
      FxTagTracker::UpdateTagHistory(
        v42,
        this,
        1472,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v18);
      v16 = v51;
    }
  }
  v19 = *(_BYTE *)(v10 + 215) == 0;
  v8 = 1;
  *(_DWORD *)(v10 + 208) = 1;
  if ( !v19 )
  {
    v12 = 0;
    Timer = -1073741536;
    if ( _InterlockedAdd((volatile signed __int32 *)(v10 + 208), 0xFFFFFFFF) )
      v12 = v16;
    goto LABEL_86;
  }
  if ( !v17 )
  {
    v52 = FxIoTarget::PendRequestLocked(this, (FxRequestBase *)v10);
    v23 = FxDriverGlobals;
    v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v44 = 0LL;
    v24 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v45 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v10 + 10) )
      v45 = 0LL;
    v46 = (const void *)v10;
    if ( v45 )
      v46 = (const void *)v45;
    WPP_IFR_SF_qqd(FxDriverGlobals, 4u, 0xEu, 0x22u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v46, v44, v52);
    if ( v52 >= 0 )
      goto LABEL_17;
    Timer = v52;
    v47 = 0;
    if ( _InterlockedAdd((volatile signed __int32 *)(v10 + 208), 0xFFFFFFFF) )
      v47 = v15;
    v12 = v47;
LABEL_86:
    v15 = v12 & 0xFFFFFFFE;
    *(_DWORD *)(*(_QWORD *)(v10 + 152) + 48LL) = Timer;
    if ( !v8 )
      return v15;
    goto LABEL_20;
  }
  v20 = (_LIST_ENTRY *)(v10 + 120);
  if ( v7 )
  {
    p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
    Blink = this->m_IgnoredIoListHead.Blink;
    if ( Blink->Flink == &this->m_IgnoredIoListHead )
      goto LABEL_14;
LABEL_75:
    __fastfail(3u);
  }
  p_m_IgnoredIoListHead = &this->m_SentIoListHead;
  Blink = this->m_SentIoListHead.Blink;
  if ( Blink->Flink != &this->m_SentIoListHead )
    goto LABEL_75;
LABEL_14:
  v20->Flink = p_m_IgnoredIoListHead;
  *(_QWORD *)(v10 + 128) = Blink;
  Blink->Flink = v20;
  p_m_IgnoredIoListHead->Blink = v20;
  if ( IoSetCompletionRoutineEx(
         this->m_InStackDevice,
         *(PIRP *)(v10 + 152),
         (PIO_COMPLETION_ROUTINE)FxIoTarget::_RequestCompletionRoutine,
         (PVOID)v10,
         1u,
         1u,
         1u) < 0 )
  {
    v43 = *(_IO_STACK_LOCATION **)(*(_QWORD *)(v10 + 152) + 184LL);
    v43[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxIoTarget::_RequestCompletionRoutine;
    v43[-1].Context = (void *)v10;
    v43[-1].Control = -32;
  }
  v23 = FxDriverGlobals;
  v24 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
LABEL_17:
  if ( v6 )
  {
    if ( v23->FxVerboseOn )
    {
      if ( !*(_WORD *)(v10 + 10) )
        v24 = 0LL;
      v48 = (const void *)v10;
      if ( v24 )
        v48 = (const void *)v24;
      WPP_IFR_SF_q(v23, 5u, 0xEu, 0x23u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v48);
    }
    v49 = *(MxTimer **)(v10 + 176);
    Timeout = Options->Timeout;
    *(_BYTE *)(v10 + 212) |= 4u;
    MxTimer::Start(v49, (_LARGE_INTEGER)Timeout, 0);
  }
  if ( v13 )
    FxRequestBase::SetVerifierFlags((FxRequestBase *)v10, 256);
LABEL_20:
  if ( !v15 )
  {
    (*(void (__fastcall **)(unsigned __int64, FxIoTarget *, __int64, const char *))(*(_QWORD *)v10 + 16LL))(
      v10,
      this,
      1630LL,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    FxIoTarget::DecrementIoCount(this);
  }
  return v15;
}
