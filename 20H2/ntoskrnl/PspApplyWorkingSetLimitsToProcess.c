/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x14062DC8C
 * Callers:
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14062E4F0 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     MmEnforceWorkingSetLimit @ 0x14023CEFC (MmEnforceWorkingSetLimit.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MmAdjustWorkingSetSize @ 0x1403C86E0 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r15
  int v4; // esi
  unsigned int v5; // r13d
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rcx
  unsigned __int64 v10; // [rsp+20h] [rbp-78h]
  unsigned __int64 v11; // [rsp+28h] [rbp-70h]
  _OWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 1296);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v12);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v10 = *(_QWORD *)(v3 + 792);
  v11 = *(_QWORD *)(v3 + 800);
  v5 = ((*(_DWORD *)(v3 + 848) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C130B0, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v3 + 1320), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (v4 = MmAdjustWorkingSetSize(v10, v11, 0, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1320), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C130B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C130B0);
    KeAbPostRelease((ULONG_PTR)&qword_140C130B0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v6 = *(_QWORD *)(a1 + 1360);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
      {
        v7 = 0LL;
        v8 = *(__int64 **)(a1 + 1408);
        if ( v8 )
          v7 = *v8;
        _interlockedbittestandset((volatile signed __int32 *)(v6 + 80), 0);
        if ( v7 )
          _interlockedbittestandset((volatile signed __int32 *)(v7 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1320), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C130B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C130B0);
    KeAbPostRelease((ULONG_PTR)&qword_140C130B0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  KiUnstackDetachProcess((__int64)v12, 0);
  return (unsigned int)v4;
}
