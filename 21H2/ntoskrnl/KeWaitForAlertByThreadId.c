/*
 * XREFs of KeWaitForAlertByThreadId @ 0x140257330
 * Callers:
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x14061A340 (NtWaitForAlertByThreadId.c)
 *     RtlpRunOnceWaitForInit @ 0x1409196F8 (RtlpRunOnceWaitForInit.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140242630 (KiBeginThreadWait.c)
 *     KiCheckWaitNext @ 0x140257970 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x140257A60 (KiCheckDueTimeExpired.c)
 *     KiFastExitThreadWait @ 0x140278248 (KiFastExitThreadWait.c)
 *     KiCommitThreadWait @ 0x140345FB0 (KiCommitThreadWait.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // si
  __int64 result; // rax
  __int64 v8; // r8
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // r8d
  unsigned __int8 CurrentIrql; // r10
  unsigned int v13; // edi
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  v16 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v6 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)a2, 0, (unsigned int)&v15, (__int64)&v16);
    while ( 1 )
    {
      result = KiBeginThreadWait((__int64)CurrentThread, a1, 37, 0);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v16, v15) )
      {
        v13 = 258;
        goto LABEL_14;
      }
      v11 = v16;
      CurrentThread->WaitBlock[0].Object = a3;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait(v9, (int)CurrentThread + 320, v11, v10, 0LL);
      CurrentThread->WaitReason = 0;
      if ( (_DWORD)result != 256 )
        return result;
      v6 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = CurrentIrql;
    }
    v13 = 257;
LABEL_14:
    CurrentThread->WaitReason = 0;
    LOBYTE(v8) = v6;
    KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v8);
    return v13;
  }
  return 258LL;
}
