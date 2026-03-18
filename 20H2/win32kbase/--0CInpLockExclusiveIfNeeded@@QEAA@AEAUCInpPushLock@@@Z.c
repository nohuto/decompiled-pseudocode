/*
 * XREFs of ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0092480
 * Callers:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0091868 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C012A88C (-ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 */

CInpLockExclusiveIfNeeded *__fastcall CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
        CInpLockExclusiveIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v3; // al

  *(_QWORD *)this = &qword_1C024E4D0;
  v3 = qword_1C024E4D8 == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v3;
  if ( !v3 )
    RIMLockExclusive((__int64)&qword_1C024E4D0);
  return this;
}
