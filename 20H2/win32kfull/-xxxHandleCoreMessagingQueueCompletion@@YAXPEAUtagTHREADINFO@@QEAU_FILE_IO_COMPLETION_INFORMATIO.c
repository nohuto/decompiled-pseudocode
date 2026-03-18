/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004EC60
 * Callers:
 *     _DrainThreadCoreMessagingCompletions @ 0x1C004EA10 (_DrainThreadCoreMessagingCompletions.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C007ED14 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     xxxDrainQueueCompletions @ 0x1C00E8304 (xxxDrainQueueCompletions.c)
 *     NtUserGetQueueStatusReadonly @ 0x1C00E9080 (NtUserGetQueueStatusReadonly.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C004EE90 (_PostMessageExtended.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, int a3)
{
  __int64 v5; // rbx
  __int64 *v6; // r14
  ULONG64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  ULONG64 v11; // rdi
  _QWORD *v12; // rcx
  ULONG64 result; // rax
  __int64 v14; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v19 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v6 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v7 = MmUserProbeAddress;
  v8 = v6;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  if ( a3 && !v9 )
  {
    v10 = PostMessageExtended(*(_QWORD *)(a1 + 1464), 96, 1, 0, 0LL);
    v7 = (ULONG64)MmSystemRangeStart;
    if ( v10 >= (unsigned __int64)MmSystemRangeStart )
    {
      if ( v10 )
        goto LABEL_7;
      LODWORD(v10) = 0;
    }
    if ( !(_DWORD)v10 )
    {
      v14 = *(_QWORD *)(a1 + 1464);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v19 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v19;
      *((_QWORD *)&v19 + 1) = v14;
      if ( v14 )
        HMLockObject(v14);
      xxxSendMessage(*(_QWORD *)(a1 + 1464), 96LL, 2LL, 0LL);
      ThreadUnlock1(v17, v16, v18);
    }
  }
LABEL_7:
  v11 = *a2;
  if ( !PsGetCurrentProcessWow64Process(v7) )
    v5 = 3LL;
  if ( (v5 & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (_QWORD *)v11;
  if ( v11 >= MmUserProbeAddress )
    v12 = (_QWORD *)MmUserProbeAddress;
  *v12 = v9;
  result = MmUserProbeAddress;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  *v6 = v11;
  return result;
}
