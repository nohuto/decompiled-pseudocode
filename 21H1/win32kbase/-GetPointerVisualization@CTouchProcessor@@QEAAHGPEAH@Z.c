/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C0199BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0193938 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  struct CInputPointerNode *NodeById; // rax
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+50h] [rbp-18h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v10, (struct CInpLockGuard *)(this + 5), 0LL);
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_7;
  if ( a3 )
    *a3 = (*((_DWORD *)NodeById + 70) & 0x200u) >> 9;
  v7 = *((_DWORD *)NodeById + 70);
  if ( (v7 & 0x80u) != 0 || (v7 & 0x100) != 0 )
LABEL_7:
    v8 = 1;
  else
    v8 = 0;
  if ( !v12 )
    CInpLockGuard::UnLock((PERESOURCE *)v11, (struct CRefUnRefPointerMsgId *)v10);
  return v8;
}
