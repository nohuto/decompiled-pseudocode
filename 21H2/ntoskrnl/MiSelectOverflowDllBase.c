/*
 * XREFs of MiSelectOverflowDllBase @ 0x14097FD74
 * Callers:
 *     MiSelectImageBase @ 0x1407092C0 (MiSelectImageBase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     MiImageCanUseHighOverflowArea @ 0x14097FD48 (MiImageCanUseHighOverflowArea.c)
 */

__int64 __fastcall MiSelectOverflowDllBase(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r12
  int v4; // r8d
  BOOL CanUseHighOverflowArea; // r10d
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v9; // rcx
  __int64 v10; // rbp
  __int64 *v11; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // r15
  bool v15; // zf

  v3 = ((*(_DWORD *)(a1 + 8) << 12) + 0xFFFF) & 0xFFFF0000;
  CanUseHighOverflowArea = MiImageCanUseHighOverflowArea(a1, a2);
  v6 = CanUseHighOverflowArea ? 0x10000000LL : 0x4000000LL;
  if ( v3 <= v6 )
  {
    v9 = &qword_140C4F320;
    if ( v4 == 3 )
      v9 = (__int64 *)&unk_140C4F350;
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F300, 0LL);
    v14 = v10;
    if ( v3 <= v13 - *v11 )
      v14 = *v11;
    *v11 = v14 + v3;
    if ( v14 + v3 == v13 )
      *v11 = v10;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F300, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4F300);
    KeAbPostRelease((ULONG_PTR)&qword_140C4F300);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
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
