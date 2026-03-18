/*
 * XREFs of EtwpDisableKernelTrace @ 0x140786B60
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140786D80 (EtwpEnableKernelTrace.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140787014 (EtwpUpdateGlobalGroupMasks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeCancelTimer2 @ 0x14035B660 (KeCancelTimer2.c)
 *     IoPerfReset @ 0x140502344 (IoPerfReset.c)
 *     KeStopProfile @ 0x1405161E0 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x14057FB20 (DbgSetDebugPrintCallback.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786CEC (EtwpUpdateFileInfoDriverState.c)
 *     AlpcUnregisterLogRoutine @ 0x1408BF13C (AlpcUnregisterLogRoutine.c)
 *     WmiSetNetworkNotify @ 0x14092EC98 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, int *a2, int a3, int a4)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int i; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  if ( a2 )
  {
    v8 = *a2;
    if ( (*a2 & 0x20000) != 0 )
    {
      *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) = 0LL;
      CmpTraceTxrRoutine = 0LL;
    }
    if ( (v8 & 0x100000) != 0 )
    {
      AlpcUnregisterLogRoutine();
      v8 = *a2;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      qword_140C00EF8 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x4000000) != 0 )
    {
      qword_140C00EF0 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x200) != 0 )
    {
      qword_140C00EE8 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_140C00ED8 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x400) != 0 )
      qword_140C54658 = 0LL;
    v9 = a2[4];
    if ( (v9 & 1) != 0 )
    {
      qword_140C54660 = 0LL;
      v9 = a2[4];
    }
    if ( (v9 & 2) != 0 )
      qword_140C54668 = 0LL;
    v10 = *a2;
    if ( (*a2 & 0x200000) != 0 )
    {
      EtwpSplitIoNotifyRoutines = 0LL;
      v10 = *a2;
    }
    if ( (v10 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    v11 = a2[4];
    if ( (v11 & 0x400000) != 0 )
    {
      qword_140C00EB8 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x80000) != 0 )
    {
      qword_140C00EC0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x100000) != 0 )
    {
      qword_140C00EC8 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x200000) != 0 )
    {
      qword_140C00ED0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x1000000) != 0 )
    {
      qword_140C11EB0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x2000000) != 0 )
      qword_140C11EB8 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_140C11EC0 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    v12 = a2[1];
    if ( (v12 & 2) != 0 )
    {
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
      v12 = a2[1];
    }
    if ( (v12 & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_140C19DB8 + 248 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
      ObpTraceFlags &= ~4u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
    }
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer2((__int64)&EtwpMemInfoTimer);
  }
  return EtwpUpdateFileInfoDriverState(a1, (_DWORD)a2, 0, a3, a4);
}
