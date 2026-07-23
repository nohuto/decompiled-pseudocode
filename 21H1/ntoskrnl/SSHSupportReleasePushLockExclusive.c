/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x14031A3C8
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1406E2A60 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x1407B7310 (SleepstudyHelperCreateLibrary.c)
 *     SshpFreeDataEntry @ 0x1408F6568 (SshpFreeDataEntry.c)
 *     SshpSendSessionData @ 0x1408F65F8 (SshpSendSessionData.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1408F7110 (SleepstudyHelperCreateBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1408F72E0 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

_QWORD *__fastcall SSHSupportReleasePushLockExclusive(ULONG_PTR BugCheckParameter2)
{
  char v2; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v5; // bp
  unsigned int v6; // r8d
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  _QWORD *result; // rax
  __int64 v14; // rcx
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v5 = ++CurrentThread->AbAllocationRegionCount;
  v6 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v6);
    if ( v7 )
      break;
    v9 = (__int64)&CurrentThread->LockEntries[v8];
    v6 &= ~(1 << v8);
    if ( (*(_BYTE *)(v9 + 26) & 1) != 0
      && (*(_DWORD *)(v9 + 32) & 1) == 0
      && (*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v9 + 40) == SessionId )
    {
      *(_BYTE *)(v9 + 26) &= ~1u;
      if ( *(_QWORD *)(v9 + 32) )
      {
        if ( v9 )
        {
          *(_BYTE *)(v9 + 32) |= 2u;
          if ( *(__int64 *)(v9 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
          v10 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
          v11 = *(_DWORD *)(v9 + 88) & 0xFFFE0000;
          *(_BYTE *)(v9 + 25) &= ~1u;
          v15 = v10;
          *(_DWORD *)(v9 + 88) = v11;
          *(_QWORD *)(v9 + 32) = 0LL;
          v12 = (signed __int64)(v9 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v5 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v12;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v12);
          goto LABEL_16;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
LABEL_16:
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v15);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v14);
  }
  return result;
}
