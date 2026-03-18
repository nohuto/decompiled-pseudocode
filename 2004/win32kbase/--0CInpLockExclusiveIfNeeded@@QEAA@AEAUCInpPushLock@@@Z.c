/*
 * XREFs of ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00287E0
 * Callers:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0027BC8 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C012CBDC (-ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 */

CInpLockExclusiveIfNeeded *__fastcall CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
        CInpLockExclusiveIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v3; // al

  *(_QWORD *)this = &qword_1C02504D0;
  v3 = qword_1C02504D8 == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v3;
  if ( !v3 )
    RIMLockExclusive(&qword_1C02504D0);
  return this;
}
