/*
 * XREFs of ExFetchLicenseData @ 0x14094F8E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140411040 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v9; // rdx
  unsigned int v10; // [rsp+70h] [rbp+18h]

  v10 = 0;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( !a3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v6 + 46840, 0LL);
  if ( *(_BYTE *)(v6 + 46992) )
    goto LABEL_4;
  v9 = *(unsigned int **)(v6 + 46832);
  if ( *(_QWORD *)v6 )
    v9 = *(unsigned int **)v6;
  if ( !v9 )
  {
LABEL_4:
    v10 = -1073741595;
  }
  else
  {
    *a3 = *v9;
    if ( a1 && a2 && a2 >= *v9 )
    {
      memmove(a1, v9, *v9);
      if ( a2 >= 0x14 )
        *((_DWORD *)a1 + 3) &= ~1u;
    }
    else
    {
      v10 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 46840), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 46840));
  KeAbPostRelease(v6 + 46840);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
