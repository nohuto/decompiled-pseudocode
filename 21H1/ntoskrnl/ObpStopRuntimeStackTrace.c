/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x1408DAA74
 * Callers:
 *     ObSetRefTraceInformation @ 0x1408D995C (ObSetRefTraceInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedFlushSList @ 0x1403FDDE0 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpDestroyStackAndObjectTables @ 0x1408D9B6C (ObpDestroyStackAndObjectTables.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 ObpStopRuntimeStackTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _WORD *v9; // rsi
  _QWORD **v10; // rbp
  PSLIST_ENTRY v11; // rax
  _QWORD *p_Next; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  CurrentThread = KeGetCurrentThread();
  Buffer = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 2) != 0 )
  {
    if ( (ObpTraceFlags & 0x10) != 0 )
      memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
    if ( (ObpTraceFlags & 0x20) != 0 )
    {
      Buffer = ObpRuntimeTraceProcessName.Buffer;
      RtlInitUnicodeStringEx(&ObpRuntimeTraceProcessName, 0LL);
    }
    ObpRuntimeTraceFlags = 0;
    v5 = ObpRegTraceFlags | ObpTraceFlags & 0xFFFFFF8C;
    ObpTraceFlags = v5;
    if ( (v5 & 1) != 0 )
    {
      ObpTracePoolTags = (unsigned __int64)&ObpRegTracePoolTags & -(__int64)((v5 & 0x10) != 0);
      ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRegTraceProcessName & -(__int64)((v5 & 0x20) != 0));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
    }
    else
    {
      ObpTracePoolTags = 0LL;
      ObpTraceProcessName = 0LL;
      ObpStackSequence = 0;
      ObpNumTracedObjects = 0;
      v9 = ObpStackTable;
      v10 = (_QWORD **)ObpObjectTable;
      ObpTraceFlags = v5 & 0xFFFFFF8C;
      v11 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      ObpStackTable = 0LL;
      p_Next = &v11->Next;
      ObpObjectTable = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
      ObpDestroyStackAndObjectTables(v9, v10, p_Next);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x7452624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
  }
  return 0LL;
}
