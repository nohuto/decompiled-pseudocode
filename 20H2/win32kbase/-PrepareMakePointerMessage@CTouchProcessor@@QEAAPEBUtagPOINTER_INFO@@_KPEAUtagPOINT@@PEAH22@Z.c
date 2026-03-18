/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C01949A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B6A8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        struct _KTHREAD **this,
        int *a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  struct CPointerInputFrame *FrameById; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct CPointerInputFrame *v14; // rdi
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  _DWORD *v17; // rdi
  _BYTE v19[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v19,
    (struct CInpLockGuard *)(this + 5),
    a2);
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, a2[7]), (v14 = FrameById) != 0LL) )
  {
    v15 = (unsigned int)a2[8];
    if ( (unsigned int)v15 >= *((_DWORD *)FrameById + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v11, v12, v13);
      v15 = (unsigned int)a2[8];
    }
    v16 = (_DWORD *)(*((_QWORD *)v14 + 17) + 480LL * (unsigned int)v15);
    v17 = v16 + 42;
    if ( v16[43] != *((unsigned __int16 *)a2 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v11, v12, v13);
    *a3 = *(struct tagPOINT *)(v16 + 37);
    *a4 = v16[36];
    *a5 = -__CFSHR__(*v16, 18);
    *a6 = -__CFSHR__(*v16, 19);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v21 )
    CInpLockGuard::UnLock((PERESOURCE *)v20, (struct CRefUnRefPointerMsgId *)v19);
  return (const struct tagPOINTER_INFO *)v17;
}
