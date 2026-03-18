/*
 * XREFs of EtwDeleteSiloState @ 0x140933484
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409020A4 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1402F3340 (ExFreeCacheAwareRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwDeleteSiloState(char *P)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int i; // edi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rbp
  signed int j; // ecx
  unsigned int k; // edi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v9; // rcx
  void *v10; // rcx

  if ( !P )
    goto LABEL_19;
  v2 = *((_DWORD *)P + 4);
  v3 = 0;
  if ( v2 )
  {
    while ( *(_QWORD *)(*((_QWORD *)P + 57) + 8LL * v3) == 1LL )
    {
      if ( ++v3 >= v2 )
        goto LABEL_5;
    }
LABEL_19:
    KeBugCheck(0x11Du);
  }
LABEL_5:
  for ( i = 0; i < 0x40; ++i )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (signed __int64 *)&P[56 * i + 464];
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v6 + 6), 0LL);
    for ( j = 0; (unsigned int)j < 3; ++j )
    {
      if ( (signed __int64 *)v6[2 * j] != &v6[2 * j] )
        goto LABEL_19;
    }
    if ( _InterlockedCompareExchange64(v6 + 6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6 + 6);
    KeAbPostRelease((ULONG_PTR)(v6 + 6));
    KeLeaveCriticalRegion();
  }
  for ( k = 0; k < *((_DWORD *)P + 4); ++k )
  {
    v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*((_QWORD *)P + 56) + 8LL * k);
    if ( v9 )
      ExFreeCacheAwareRundownProtection(v9);
  }
  ExFreePoolWithTag(*((PVOID *)P + 517), 0x61777445u);
  ExFreePoolWithTag(*((PVOID *)P + 56), 0x61777445u);
  v10 = (void *)*((_QWORD *)P + 524);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x61777445u);
  ExFreePoolWithTag(P, 0x61777445u);
}
