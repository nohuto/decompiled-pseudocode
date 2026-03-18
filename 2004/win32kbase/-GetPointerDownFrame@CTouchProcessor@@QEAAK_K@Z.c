/*
 * XREFs of ?GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z @ 0x1C0191AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDownFrame(struct _KTHREAD **this, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // ebx
  _BYTE v11[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v11,
    (struct CInpLockGuard *)(this + 5),
    a2);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v8 = a2[5];
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 24);
  else
    v9 = 0;
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12, (struct CRefUnRefPointerMsgId *)v11);
  return v9;
}
