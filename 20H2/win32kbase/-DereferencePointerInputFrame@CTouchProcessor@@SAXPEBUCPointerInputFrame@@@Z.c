/*
 * XREFs of ?DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C018A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::DereferencePointerInputFrame(CTouchProcessor **a1)
{
  CTouchProcessor *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+50h] [rbp-18h]

  v1 = *a1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v3,
    (CTouchProcessor *)((char *)*a1 + 40),
    0LL);
  CTouchProcessor::UnreferenceFrame(v1, (const struct CPointerInputFrame *)a1);
  if ( !v5 )
    CInpLockGuard::UnLock((PERESOURCE *)v4, (struct CRefUnRefPointerMsgId *)v3);
}
