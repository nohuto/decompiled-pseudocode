/*
 * XREFs of KeWaitForAlertByThreadId @ 0x1402788A0
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x140683FA0 (NtWaitForAlertByThreadId.c)
 *     RtlpRunOnceWaitForInit @ 0x140919858 (RtlpRunOnceWaitForInit.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x1402661E8 (KiFastExitThreadWait.c)
 *     KiCheckWaitNext @ 0x140278EE0 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x140278FD0 (KiCheckDueTimeExpired.c)
 *     KiBeginThreadWait @ 0x1402E6E80 (KiBeginThreadWait.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rdx
  char v7; // si
  __int64 result; // rax
  __int64 v9; // r8
  int v10; // ecx
  int v11; // r9d
  unsigned int v12; // r8d
  unsigned __int8 CurrentIrql; // r10
  unsigned int v14; // edi
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v17 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v7 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)a2, 0, (unsigned int)&v16, (__int64)&v17);
    while ( 1 )
    {
      LOBYTE(v6) = a1;
      result = KiBeginThreadWait(CurrentThread, v6, 37LL, 0LL);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v17, v16) )
      {
        v14 = 258;
        goto LABEL_14;
      }
      v12 = v17;
      CurrentThread->WaitBlock[0].Object = a3;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait(v10, (int)CurrentThread + 320, v12, v11, 0LL);
      CurrentThread->WaitReason = 0;
      if ( (_DWORD)result != 256 )
        return result;
      v7 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v6 = SchedulerAssist[5] | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4u;
        SchedulerAssist[5] = v6;
      }
      CurrentThread->WaitIrql = CurrentIrql;
    }
    v14 = 257;
LABEL_14:
    CurrentThread->WaitReason = 0;
    LOBYTE(v9) = v7;
    KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v9);
    return v14;
  }
  return 258LL;
}
