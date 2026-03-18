/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C0192580
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     EtwTracePointerNoCoalesce @ 0x1C012E870 (EtwTracePointerNoCoalesce.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C0192708 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0198788 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C01A1004 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        CTouchProcessor *this,
        unsigned int *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx
  CTouchProcessor *v15; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  const struct CPointerInputFrame *v17; // rdx
  CTouchProcessor *v18; // rcx
  CTouchProcessor *v19; // rcx
  unsigned int v20; // esi
  const struct CPointerQFrame *v21; // rax
  _BYTE v23[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v24; // [rsp+58h] [rbp-30h]
  int v25; // [rsp+60h] [rbp-28h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v23,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( !a2 )
    goto LABEL_19;
  v11 = CTouchProcessor::ReferenceFrame(this, a2[7]);
  if ( !v11 )
    goto LABEL_19;
  v12 = a2[8];
  if ( (unsigned int)v12 >= *((_DWORD *)v11 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    v12 = a2[8];
  }
  v13 = *((_QWORD *)v11 + 17) + 480 * v12;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  if ( *(_WORD *)(v13 + 172) != *((_WORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  if ( a5 )
  {
    if ( !a4 )
      goto LABEL_11;
  }
  else if ( a4 )
  {
    goto LABEL_11;
  }
  if ( !a3 )
  {
    v17 = v11;
    v18 = this;
    goto LABEL_18;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(this, v11, a2[8], a6, a3, a4);
  PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(v15, v11, (const struct CPointerInfoNode *)v13);
  v17 = v11;
  v18 = this;
  if ( (*((_DWORD *)PointerInfoNodeQFrame + 35) & 4) != 0 )
  {
LABEL_18:
    CTouchProcessor::UnreferenceFrame(v18, v17);
LABEL_19:
    v20 = 0;
    goto LABEL_20;
  }
  v20 = CTouchProcessor::DelegateCoalesceQFrame(this, v11, *(_DWORD *)(v13 + 8));
  if ( !v20 )
  {
    v21 = CTouchProcessor::GetPointerInfoNodeQFrame(v19, v11, (const struct CPointerInfoNode *)v13);
    EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v13 + 160), *(_WORD *)(v13 + 172), *((_DWORD *)v21 + 37), 1);
  }
  CTouchProcessor::UnreferenceFrame(this, v11);
LABEL_20:
  if ( !v25 )
    CInpLockGuard::UnLock((PERESOURCE *)v24, (struct CRefUnRefPointerMsgId *)v23);
  return v20;
}
