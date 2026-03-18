/*
 * XREFs of KeWaitForAlertByThreadId @ 0x140339758
 * Callers:
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x1406DF940 (NtWaitForAlertByThreadId.c)
 *     RtlpRunOnceWaitForInit @ 0x140916308 (RtlpRunOnceWaitForInit.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402B8CA0 (KiBeginThreadWait.c)
 *     KiCheckWaitNext @ 0x1402BC710 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x1402BC800 (KiCheckDueTimeExpired.c)
 *     KiFastExitThreadWait @ 0x1402E493C (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rdx
  char v7; // si
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // r8d
  unsigned __int8 CurrentIrql; // r10
  unsigned int v14; // edi
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16[0] = 0LL;
  v17 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v7 = KiCheckWaitNext((__int64)CurrentThread, (__int64)a2, 0, v16, &v17);
    while ( 1 )
    {
      LOBYTE(v6) = a1;
      result = KiBeginThreadWait((__int64)CurrentThread, v6, 37LL, 0LL);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v17, v16[0]) )
      {
        v14 = 258;
        goto LABEL_14;
      }
      v12 = v17;
      CurrentThread->WaitBlock[0].Object = a3;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait(v11, (__int64 *)&CurrentThread->320, v12, v10, 0LL);
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
    KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v9, v10);
    return v14;
  }
  return 258LL;
}
