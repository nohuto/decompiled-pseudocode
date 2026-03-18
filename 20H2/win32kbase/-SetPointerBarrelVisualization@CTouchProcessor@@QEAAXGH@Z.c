/*
 * XREFs of ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C0197DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerBarrelVisualization(struct _KTHREAD **this, unsigned __int16 a2, char a3)
{
  struct CInputPointerNode *NodeById; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 1, 0);
  if ( NodeById )
    *((_DWORD *)NodeById + 70) = *((_DWORD *)NodeById + 70) & 0xFFFFFBFF | ((a3 & 1 | 2) << 10);
  if ( !v9 )
    CInpLockGuard::UnLock((PERESOURCE *)v8, (struct CRefUnRefPointerMsgId *)v7);
}
