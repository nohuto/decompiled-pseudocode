/*
 * XREFs of ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C018E730
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerBarrelVisualization(struct _KTHREAD **this, unsigned __int16 a2)
{
  struct CInputPointerNode *NodeById; // rax
  unsigned int v5; // ebx
  int v6; // eax
  _BYTE v8[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v8, (struct CInpLockGuard *)(this + 5), 0LL);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v6 = *((_DWORD *)NodeById + 70);
    if ( (v6 & 0x800) != 0 )
      v5 = (v6 & 0x400) != 0 ? 1 : -1;
    else
      v5 = 0;
  }
  else
  {
    v5 = 1;
  }
  if ( !v10 )
    CInpLockGuard::UnLock((PERESOURCE *)v9, (struct CRefUnRefPointerMsgId *)v8);
  return v5;
}
