/*
 * XREFs of ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D1E9C
 * Callers:
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 * Callees:
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00D1598 (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     PopW32ThreadLock @ 0x1C01F8200 (PopW32ThreadLock.c)
 */

void __fastcall CRefUnRefPointerMsgId::ThreadUnlockAndUnReference(CRefUnRefPointerMsgId *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    PopW32ThreadLock((char *)this + 8);
    CTouchProcessor::UnreferenceMsgDataFromGuard(v2, *(_QWORD *)this);
  }
}
