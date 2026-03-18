/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x1407968D0
 * Callers:
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     EtwpGetTraceGuidInfo @ 0x14065F10C (EtwpGetTraceGuidInfo.c)
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x140792A4C (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140796798 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpGetTraceGroupInfo @ 0x140883164 (EtwpGetTraceGroupInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E448C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409EC340 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     EtwpReferenceGuidEntry @ 0x140796BF4 (EtwpReferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpFindGuidEntryByGuid(__int64 a1, _DWORD *a2, int a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v7; // rsi
  signed __int64 *v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rax

  v4 = 0LL;
  v5 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD **)(v5 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(v5 + 48);
  ExAcquirePushLockSharedEx(v5 + 48, 0LL);
  v9 = *v7;
  if ( *v7 != v7 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)a2 - v9[5];
      if ( *(_QWORD *)a2 == v9[5] )
        v10 = *((_QWORD *)a2 + 1) - v9[6];
      if ( !v10 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)v9) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v7 )
        goto LABEL_9;
    }
    v4 = v9;
  }
LABEL_9:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v4;
}
