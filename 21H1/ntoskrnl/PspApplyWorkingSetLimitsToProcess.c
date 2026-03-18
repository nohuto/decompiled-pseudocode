/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x140671D90
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140671ACC (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1402D8388 (MmEnforceWorkingSetLimit.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x1403AF530 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r15
  int v7; // esi
  int v8; // r13d
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // [rsp+20h] [rbp-78h]
  unsigned __int64 v24; // [rsp+28h] [rbp-70h]
  _OWORD v25[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 1296);
  v7 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v25, a4);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 56), 1u);
  v23 = *(_QWORD *)(v6 + 792);
  v24 = *(_QWORD *)(v6 + 800);
  v8 = ((*(_DWORD *)(v6 + 848) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C13070, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v6 + 1320), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v6 + 56));
  if ( v8 == 2 || (v7 = MmAdjustWorkingSetSize(v23, v24, 0, 1), v7 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v8, v9, v10);
    _InterlockedAnd((volatile signed __int32 *)(v6 + 1320), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C13070, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C13070);
    KeAbPostRelease((ULONG_PTR)&qword_140C13070);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
    v16 = *(_QWORD *)(a1 + 1360);
    if ( v16 )
    {
      if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
      {
        v7 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
      {
        v17 = 0LL;
        v18 = *(__int64 **)(a1 + 1408);
        if ( v18 )
          v17 = *v18;
        _interlockedbittestandset((volatile signed __int32 *)(v16 + 80), 0);
        if ( v17 )
          _interlockedbittestandset((volatile signed __int32 *)(v17 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
      }
      else
      {
        v7 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 1320), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C13070, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C13070);
    KeAbPostRelease((ULONG_PTR)&qword_140C13070);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v20, v21, v22);
  }
  KiUnstackDetachProcess((__int64)v25, 0LL, v14, v15);
  return (unsigned int)v7;
}
