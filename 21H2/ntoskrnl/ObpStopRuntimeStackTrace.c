/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x140986A7C
 * Callers:
 *     ObSetRefTraceInformation @ 0x1409858C0 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpDestroyStackAndObjectTables @ 0x140985B2C (ObpDestroyStackAndObjectTables.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 ObpStopRuntimeStackTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  struct _KTHREAD *v2; // rax
  bool v3; // zf
  unsigned int v4; // ecx
  struct _KTHREAD *v5; // rax
  _WORD *v6; // rdi
  _QWORD **v7; // rbp
  PSLIST_ENTRY v8; // rax
  _QWORD *p_Next; // r14
  struct _KTHREAD *v10; // rax

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
    v4 = ObpRegTraceFlags | ObpTraceFlags & 0xFFFFFF8C;
    ObpTraceFlags = v4;
    if ( (v4 & 1) != 0 )
    {
      ObpTracePoolTags = (unsigned __int64)&ObpRegTracePoolTags & -(__int64)((v4 & 0x10) != 0);
      ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRegTraceProcessName & -(__int64)((v4 & 0x20) != 0));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      v5 = KeGetCurrentThread();
      v3 = v5->SpecialApcDisable++ == -1;
      if ( v3 && ($CEA84C04E3712D858E5667A507841A2A *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      ObpTracePoolTags = 0LL;
      ObpTraceProcessName = 0LL;
      ObpStackSequence = 0;
      ObpNumTracedObjects = 0;
      v6 = ObpStackTable;
      v7 = (_QWORD **)ObpObjectTable;
      ObpTraceFlags = v4 & 0xFFFFFF8C;
      v8 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      ObpStackTable = 0LL;
      p_Next = &v8->Next;
      ObpObjectTable = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      v10 = KeGetCurrentThread();
      v3 = v10->SpecialApcDisable++ == -1;
      if ( v3 && ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
        KiCheckForKernelApcDelivery();
      ObpDestroyStackAndObjectTables(v6, v7, p_Next);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x7452624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v2 = KeGetCurrentThread();
    v3 = v2->SpecialApcDisable++ == -1;
    if ( v3 && ($CEA84C04E3712D858E5667A507841A2A *)v2->ApcState.ApcListHead[0].Flink != &v2->152 )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
