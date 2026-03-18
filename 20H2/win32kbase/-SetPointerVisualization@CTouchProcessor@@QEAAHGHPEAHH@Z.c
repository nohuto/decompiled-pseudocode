/*
 * XREFs of ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C01997B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerVisualization(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        int *a4,
        __int16 a5)
{
  struct CInputPointerNode *NodeById; // rax
  unsigned int v10; // ebx
  int v11; // esi
  _BYTE v13[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v11 = *((_DWORD *)NodeById + 70) ^ (*((_DWORD *)NodeById + 70) ^ (a3 << 7)) & 0x80;
    *((_DWORD *)NodeById + 70) = v11;
    if ( a4 )
      v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*a4 << 8)) & 0x100;
    v10 = 1;
    *((_DWORD *)NodeById + 70) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(a5 << 9)) & 0x200;
  }
  else
  {
    v10 = 0;
  }
  if ( !v15 )
    CInpLockGuard::UnLock((PERESOURCE *)v14, (struct CRefUnRefPointerMsgId *)v13);
  return v10;
}
