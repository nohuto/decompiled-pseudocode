/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C01981A0
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AFEAC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rbx
  int IsValid; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  _BYTE v9[40]; // [rsp+20h] [rbp-38h] BYREF
  CInpLockGuard *v10; // [rsp+48h] [rbp-10h]

  v4 = a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v9,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  IsValid = CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)a2 + 17) + 480 * v4));
  v7 = (v6 + 168) & -(__int64)(IsValid != 0);
  CInpLockGuard::UnLock((PERESOURCE *)v10, (struct CRefUnRefPointerMsgId *)v9);
  return (const struct tagPOINTER_INFO *)v7;
}
