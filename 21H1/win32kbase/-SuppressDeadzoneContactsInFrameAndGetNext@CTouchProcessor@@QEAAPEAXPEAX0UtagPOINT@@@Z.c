/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C01A23B0
 * Callers:
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C01B0818 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0161EA8 (rimAbIsPointInPenDeadzone.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193D54 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0196814 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInputFrame *a3,
        struct tagPOINT a4)
{
  unsigned int i; // ebp
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct _LIST_ENTRY **NextFrame; // rbx
  __int128 v15; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v16[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+60h] [rbp-28h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v16,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  for ( i = 0; i < *((_DWORD *)a3 + 12); ++i )
  {
    v9 = *((_QWORD *)a3 + 17) + 480LL * i;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
    {
      if ( *(_DWORD *)(v9 + 168) != 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
      if ( (*(_DWORD *)(v9 + 180) & 0x10000) != 0
        && (v11 = *(_QWORD *)(v9 + 224),
            v15 = *(_OWORD *)(*((_QWORD *)a3 + 19) + 176LL),
            (unsigned int)rimAbIsPointInPenDeadzone(&v15, v11, *(_QWORD *)&a4))
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
  if ( !v18 )
    CInpLockGuard::UnLock((PERESOURCE *)v17, (struct CRefUnRefPointerMsgId *)v16);
  return NextFrame;
}
