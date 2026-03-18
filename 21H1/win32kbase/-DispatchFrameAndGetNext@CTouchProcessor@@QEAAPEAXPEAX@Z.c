/*
 * XREFs of ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0192F70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0193188 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0196814 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::DispatchFrameAndGetNext(
        struct _LIST_ENTRY *this,
        struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *NextFrame; // rsi
  const struct RIMCOMPLETEFRAME *v5; // rdx
  _BYTE v7[40]; // [rsp+40h] [rbp-48h] BYREF
  CInpLockGuard *v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+70h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (struct CInpLockGuard *)&this[2].Blink,
    0LL);
  NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)this, a2, this + 8);
  CTouchProcessor::DoContactVisualizationAndGenerateMessages(
    (CTouchProcessor *)this,
    v5,
    a2,
    *((void **)a2 + 8),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 19) + 312LL), 4),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 19) + 312LL), 5),
    0);
  if ( !v9 )
    CInpLockGuard::UnLock((PERESOURCE *)v8, (struct CRefUnRefPointerMsgId *)v7);
  return NextFrame;
}
