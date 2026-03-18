/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C019CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct CPointerInputFrame *v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  _DWORD *v14; // rdi
  _BYTE v16[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v16,
    (struct CInpLockGuard *)(this + 5),
    a2);
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, a2[7]), (v11 = FrameById) != 0LL) )
  {
    v12 = (unsigned int)a2[8];
    if ( (unsigned int)v12 >= *((_DWORD *)FrameById + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      v12 = (unsigned int)a2[8];
    }
    v13 = (_DWORD *)(*((_QWORD *)v11 + 17) + 480LL * (unsigned int)v12);
    v14 = v13 + 42;
    if ( v13[43] != *((unsigned __int16 *)a2 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    *a3 = *(struct tagPOINT *)(v13 + 37);
    *a4 = v13[36];
    *a5 = -__CFSHR__(*v13, 18);
    *a6 = -__CFSHR__(*v13, 19);
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v18 )
    CInpLockGuard::UnLock((PERESOURCE *)v17, (struct CRefUnRefPointerMsgId *)v16);
  return (const struct tagPOINTER_INFO *)v14;
}
