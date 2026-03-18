/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C018C880
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     EtwTracePointerNoCoalesce @ 0x1C0128880 (EtwTracePointerNoCoalesce.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C018CA08 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0192A88 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C019B2A0 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        CTouchProcessor *this,
        unsigned int *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct CPointerInputFrame *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  CTouchProcessor *v21; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  const struct CPointerInputFrame *v23; // rdx
  CTouchProcessor *v24; // rcx
  CTouchProcessor *v25; // rcx
  unsigned int v26; // esi
  const struct CPointerQFrame *v27; // rax
  _BYTE v29[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v30; // [rsp+58h] [rbp-30h]
  int v31; // [rsp+60h] [rbp-28h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v29,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( !a2 )
    goto LABEL_19;
  v12 = CTouchProcessor::ReferenceFrame(this, a2[7]);
  if ( !v12 )
    goto LABEL_19;
  v15 = a2[8];
  if ( (unsigned int)v15 >= *((_DWORD *)v12 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13, v14);
    v15 = a2[8];
  }
  v16 = *((_QWORD *)v12 + 17) + 480 * v15;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
  if ( *(_WORD *)(v16 + 172) != *((_WORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19, v20);
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
    v23 = v12;
    v24 = this;
    goto LABEL_18;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(this, v12, a2[8], a6, a3, a4);
  PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(v21, v12, (const struct CPointerInfoNode *)v16);
  v23 = v12;
  v24 = this;
  if ( (*((_DWORD *)PointerInfoNodeQFrame + 35) & 4) != 0 )
  {
LABEL_18:
    CTouchProcessor::UnreferenceFrame(v24, v23);
LABEL_19:
    v26 = 0;
    goto LABEL_20;
  }
  v26 = CTouchProcessor::DelegateCoalesceQFrame(this, v12, *(_DWORD *)(v16 + 8));
  if ( !v26 )
  {
    v27 = CTouchProcessor::GetPointerInfoNodeQFrame(v25, v12, (const struct CPointerInfoNode *)v16);
    EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v16 + 160), *(_WORD *)(v16 + 172), *((_DWORD *)v27 + 37), 1);
  }
  CTouchProcessor::UnreferenceFrame(this, v12);
LABEL_20:
  if ( !v31 )
    CInpLockGuard::UnLock((PERESOURCE *)v30, (struct CRefUnRefPointerMsgId *)v29);
  return v26;
}
