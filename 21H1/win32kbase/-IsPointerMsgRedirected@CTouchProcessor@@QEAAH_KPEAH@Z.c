/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C019AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(struct _KTHREAD **this, int *a2, int *a3)
{
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v7; // rsi
  __int64 v8; // rcx
  CPointerInfoNode *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE v13[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v13, (struct CInpLockGuard *)(this + 5), a2);
  *a3 = 0;
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, a2[7]), (v7 = FrameById) != 0LL) )
  {
    v8 = (unsigned int)a2[8];
    if ( (unsigned int)v8 >= *((_DWORD *)FrameById + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      LODWORD(v8) = a2[8];
    }
    v9 = (CPointerInfoNode *)(*((_QWORD *)v7 + 17) + 480LL * (unsigned int)v8);
    if ( !(unsigned int)CPointerInfoNode::IsValid(v9) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    if ( *((_DWORD *)v9 + 43) != *((unsigned __int16 *)a2 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    if ( (*((_DWORD *)v9 + 1) & 0x80u) != 0 )
      *a3 = 1;
    v11 = -__CFSHR__(*(_DWORD *)v9, 11);
  }
  else
  {
    v11 = 0;
  }
  if ( !v15 )
    CInpLockGuard::UnLock((PERESOURCE *)v14, (struct CRefUnRefPointerMsgId *)v13);
  return v11;
}
