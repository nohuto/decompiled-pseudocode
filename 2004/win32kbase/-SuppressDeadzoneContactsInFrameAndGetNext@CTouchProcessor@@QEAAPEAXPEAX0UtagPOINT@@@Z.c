/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C019C650
 * Callers:
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C01AAAB8 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C015BB58 (rimAbIsPointInPenDeadzone.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E054 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0190B14 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInputFrame *a3,
        struct tagPOINT a4)
{
  unsigned int i; // ebp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct _LIST_ENTRY **NextFrame; // rbx
  __int128 v18; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v19[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v20; // [rsp+58h] [rbp-30h]
  int v21; // [rsp+60h] [rbp-28h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v19,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  for ( i = 0; i < *((_DWORD *)a3 + 12); ++i )
  {
    v9 = *((_QWORD *)a3 + 17) + 480LL * i;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
    {
      if ( *(_DWORD *)(v9 + 168) != 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
      if ( (*(_DWORD *)(v9 + 180) & 0x10000) != 0
        && (v14 = *(_QWORD *)(v9 + 224),
            v18 = *(_OWORD *)(*((_QWORD *)a3 + 19) + 176LL),
            (unsigned int)rimAbIsPointInPenDeadzone(&v18, v14, *(_QWORD *)&a4))
        || a2
        && (ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(
                                 (struct _KTHREAD **)this,
                                 a2,
                                 *(_WORD *)(v9 + 172),
                                 0LL)) != 0LL
        && (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
      {
        *(_DWORD *)v9 |= 0x1000u;
      }
    }
  }
  NextFrame = CTouchProcessor::GetNextFrame((struct _KTHREAD **)this, a3, (struct _LIST_ENTRY *)this + 8);
  if ( !v21 )
    CInpLockGuard::UnLock((PERESOURCE *)v20, (struct CRefUnRefPointerMsgId *)v19);
  return NextFrame;
}
