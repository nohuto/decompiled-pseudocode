/*
 * XREFs of _RtlDeleteCriticalSection@4 @ 0x4B2AFB90
 * Callers:
 *     _RtlDeleteResource@4 @ 0x4B2A9DF0 (_RtlDeleteResource@4.c)
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 *     _RtlTraceDatabaseDestroy@4 @ 0x4B36A2A0 (_RtlTraceDatabaseDestroy@4.c)
 * Callees:
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlpFreeDebugInfo@4 @ 0x4B2AFCE0 (_RtlpFreeDebugInfo@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _RtlStdReleaseStackTrace@8 @ 0x4B369090 (_RtlStdReleaseStackTrace@8.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  void *LockSemaphore; // eax
  NTSTATUS result; // eax
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // ebx
  _LIST_ENTRY *p_ProcessLocksList; // ecx
  _LIST_ENTRY *Flink; // eax
  _LIST_ENTRY *Blink; // edx
  unsigned int v7; // ecx
  _DWORD *v8; // ecx
  NTSTATUS v9; // [esp+1Ch] [ebp-20h]
  unsigned int v10; // [esp+20h] [ebp-1Ch]

  LockSemaphore = CriticalSection->LockSemaphore;
  if ( !LockSemaphore || LockSemaphore == (void *)-1 )
    result = 0;
  else
    result = NtClose(CriticalSection->LockSemaphore);
  v9 = result;
  DebugInfo = CriticalSection->DebugInfo;
  if ( CriticalSection->DebugInfo && DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1 )
  {
    v10 = CriticalSection->SpinCount & 0x4000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    p_ProcessLocksList = &DebugInfo->ProcessLocksList;
    Flink = DebugInfo->ProcessLocksList.Flink;
    if ( Flink )
    {
      Blink = DebugInfo->ProcessLocksList.Blink;
      if ( Flink->Blink != p_ProcessLocksList || Blink->Flink != p_ProcessLocksList )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    v7 = DebugInfo->CreatorBackTraceIndex + (DebugInfo->CreatorBackTraceIndexHigh << 16);
    if ( RtlpStackTraceDatabase )
    {
      if ( v7 )
      {
        if ( v7 <= RtlpStackTraceDatabase[24].Value )
        {
          v8 = (_DWORD *)(RtlpStackTraceDatabase[25].Value - 4 * v7);
          if ( *v8 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace(RtlpStackTraceDatabase, *v8);
          }
        }
      }
    }
    memset(DebugInfo, 0, sizeof(_RTL_CRITICAL_SECTION_DEBUG));
    if ( !v10 )
      RtlpFreeDebugInfo(DebugInfo);
    result = v9;
  }
  CriticalSection->DebugInfo = 0;
  CriticalSection->LockCount = 0;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0;
  CriticalSection->LockSemaphore = 0;
  CriticalSection->SpinCount = 0;
  return result;
}
