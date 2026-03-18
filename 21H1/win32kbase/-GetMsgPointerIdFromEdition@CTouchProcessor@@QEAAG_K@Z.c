/*
 * XREFs of ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1C0196750
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerIdFromEdition(CTouchProcessor *this, _WORD *a2)
{
  unsigned __int16 v3; // bx
  _BYTE v5[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v5,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( a2 )
    v3 = a2[8];
  else
    v3 = 0;
  if ( !v7 )
    CInpLockGuard::UnLock((PERESOURCE *)v6, (struct CRefUnRefPointerMsgId *)v5);
  return v3;
}
