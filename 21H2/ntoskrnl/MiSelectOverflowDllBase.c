/*
 * XREFs of MiSelectOverflowDllBase @ 0x1408D7E5C
 * Callers:
 *     MiSelectImageBase @ 0x1406C2B74 (MiSelectImageBase.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiImageCanUseHighOverflowArea @ 0x1408D7E30 (MiImageCanUseHighOverflowArea.c)
 */

__int64 __fastcall MiSelectOverflowDllBase(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r15
  int v4; // r8d
  BOOL CanUseHighOverflowArea; // r10d
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v9; // rcx
  __int64 v10; // rsi
  __int64 *v11; // r14
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // r12

  v3 = ((*(_DWORD *)(a1 + 8) << 12) + 0xFFFF) & 0xFFFF0000;
  CanUseHighOverflowArea = MiImageCanUseHighOverflowArea(a1, a2);
  v6 = CanUseHighOverflowArea ? 0x10000000LL : 0x4000000LL;
  if ( v3 <= v6 )
  {
    v9 = &qword_140C4CBA8;
    if ( v4 == 3 )
      v9 = (__int64 *)&unk_140C4CBD8;
    v10 = *v9;
    v11 = v9 + 1;
    if ( CanUseHighOverflowArea )
    {
      v10 = v9[2];
      v11 = v9 + 3;
    }
    CurrentThread = KeGetCurrentThread();
    v13 = v6 + v10;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB88, 0LL);
    v14 = v10;
    if ( v3 <= v13 - *v11 )
      v14 = *v11;
    *v11 = v14 + v3;
    if ( v14 + v3 == v13 )
      *v11 = v10;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4CB88);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CB88);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v14;
  }
  else
  {
    v7 = (unsigned __int8)ExGenRandom(1) << 16;
    if ( a2 < 0x1010000 || a2 > v3 + a2 || v3 + a2 > 0x7FFFFFFF0000LL )
      return v7 + 0x10000LL;
    else
      return a2 - v7;
  }
}
