/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C0192D70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B6A8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(struct _KTHREAD **this, int *a2, int *a3)
{
  struct CPointerInputFrame *FrameById; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct CPointerInputFrame *v10; // rsi
  __int64 v11; // rcx
  CPointerInfoNode *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  _BYTE v19[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-18h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v19, (struct CInpLockGuard *)(this + 5), a2);
  *a3 = 0;
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, a2[7]), (v10 = FrameById) != 0LL) )
  {
    v11 = (unsigned int)a2[8];
    if ( (unsigned int)v11 >= *((_DWORD *)FrameById + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v7, v8, v9);
      LODWORD(v11) = a2[8];
    }
    v12 = (CPointerInfoNode *)(*((_QWORD *)v10 + 17) + 480LL * (unsigned int)v11);
    if ( !(unsigned int)CPointerInfoNode::IsValid(v12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    if ( *((_DWORD *)v12 + 43) != *((unsigned __int16 *)a2 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    if ( (*((_DWORD *)v12 + 1) & 0x80u) != 0 )
      *a3 = 1;
    v17 = -__CFSHR__(*(_DWORD *)v12, 11);
  }
  else
  {
    v17 = 0;
  }
  if ( !v21 )
    CInpLockGuard::UnLock((PERESOURCE *)v20, (struct CRefUnRefPointerMsgId *)v19);
  return v17;
}
