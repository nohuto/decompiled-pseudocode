/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C018EA40
 * Callers:
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C018E9B0 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(
        struct _KTHREAD **this,
        unsigned __int16 *a2,
        unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // bx
  struct CInputPointerNode *NodeById; // rax
  unsigned int v12; // ebx
  _BYTE v14[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-18h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v14, (struct CInpLockGuard *)(this + 5), a2);
  if ( a2 )
  {
    v10 = a2[8];
    if ( v10 )
      goto LABEL_5;
  }
  else
  {
    v10 = 0;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
LABEL_5:
  NodeById = CTouchProcessor::FindNodeById(this, v10, 0, 0);
  if ( NodeById )
  {
    v12 = 1;
    *a3 = *((unsigned __int16 *)NodeById + 17);
  }
  else
  {
    v12 = 0;
  }
  if ( !v16 )
    CInpLockGuard::UnLock((PERESOURCE *)v15, (struct CRefUnRefPointerMsgId *)v14);
  return v12;
}
