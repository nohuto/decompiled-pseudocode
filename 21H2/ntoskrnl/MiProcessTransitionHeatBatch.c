/*
 * XREFs of MiProcessTransitionHeatBatch @ 0x1405B7EB4
 * Callers:
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x140220664 (ExfTryAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 */

char __fastcall MiProcessTransitionHeatBatch(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v6; // rdx
  int SessionId; // eax
  $CEA84C04E3712D858E5667A507841A2A *v8; // rax
  unsigned int *i; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  _QWORD *v14; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  AbEntrySummary = v3->AbEntrySummary;
  if ( v3->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C55040, (__int64)v3)) != 0 )
  {
    _BitScanForward((unsigned int *)&v6, AbEntrySummary);
    v3->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    _enable();
    v4 = (unsigned __int64)(&v3[1].Process + 12 * v6);
    if ( (unsigned __int64)&qword_140C55040 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = (unsigned __int64)&qword_140C55040 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 17LL, 0LL)
    || (LOBYTE(v8) = ExfTryAcquirePushLockSharedEx((signed __int64 *)&qword_140C55040, 0), (_BYTE)v8) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    for ( i = a1 + 4; ; i += 2 )
    {
      if ( i >= &a1[2 * a1[1] + 4] )
      {
        MiNotifyPageHeat(a1);
        goto LABEL_24;
      }
      v10 = *(_QWORD *)i >> 12;
      v11 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v12 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v11 <<= 9;
          v10 >>= 9;
          LODWORD(v12) = v12 - 1;
        }
        while ( (_DWORD)v12 );
      }
      v13 = v11 + v10;
      if ( v10 < v11 + v10 )
        break;
LABEL_21:
      ;
    }
    v14 = (_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL);
    while ( v10 <= qword_140C50840 && ((*v14 >> 54) & 1) != 0 )
    {
      ++v10;
      v14 += 6;
      if ( v10 >= v13 )
        goto LABEL_21;
    }
LABEL_24:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    LOBYTE(v8) = KeAbPostRelease((ULONG_PTR)&qword_140C55040);
  }
  else if ( v4 )
  {
    LOBYTE(v8) = KeAbPostReleaseEx((ULONG_PTR)&qword_140C55040, v4);
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v8 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v8->ApcState.ApcListHead[0].Flink != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery();
  }
  return (char)v8;
}
