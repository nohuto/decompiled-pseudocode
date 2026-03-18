/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C0196C60
 * Callers:
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0196BD0 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0193938 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(
        struct _KTHREAD **this,
        unsigned __int16 *a2,
        unsigned int *a3)
{
  __int64 v6; // rcx
  unsigned __int16 v7; // bx
  struct CInputPointerNode *NodeById; // rax
  unsigned int v9; // ebx
  _BYTE v11[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v11, (struct CInpLockGuard *)(this + 5), a2);
  if ( a2 )
  {
    v7 = a2[8];
    if ( v7 )
      goto LABEL_5;
  }
  else
  {
    v7 = 0;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
LABEL_5:
  NodeById = CTouchProcessor::FindNodeById(this, v7, 0, 0);
  if ( NodeById )
  {
    v9 = 1;
    *a3 = *((unsigned __int16 *)NodeById + 17);
  }
  else
  {
    v9 = 0;
  }
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12, (struct CRefUnRefPointerMsgId *)v11);
  return v9;
}
