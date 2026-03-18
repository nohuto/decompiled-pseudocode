/*
 * XREFs of ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D1E5C
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D16E0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1A80 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?RefPointerMsgIdAndUnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E10 (-RefPointerMsgIdAndUnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0030B70 (PushW32ThreadLock.c)
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00D14C0 (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CRefUnRefPointerMsgId::ReferenceAndThreadLock(CRefUnRefPointerMsgId *this)
{
  __int64 v1; // rdx
  __int64 v3; // r9

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( !*((_BYTE *)this + 32) )
    {
      *((_BYTE *)this + 32) = 1;
      CTouchProcessor::ReferenceMsgDataFromGuard((__int64)this, v1);
      PushW32ThreadLock(
        *(_QWORD *)this,
        (__int64)this + 8,
        (__int64)CRefUnRefPointerMsgId::UnReferenceOnThreadTermination,
        v3);
    }
  }
}
