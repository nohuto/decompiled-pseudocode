/*
 * XREFs of ExFetchLicenseData @ 0x140948780
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+70h] [rbp+18h]

  v13 = 0;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( !a3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v6 + 37464, 0LL);
  if ( *(_BYTE *)(v6 + 37616) )
    goto LABEL_4;
  v9 = *(unsigned int **)(v6 + 37456);
  if ( *(_QWORD *)v6 )
    v9 = *(unsigned int **)v6;
  if ( !v9 )
  {
LABEL_4:
    v13 = -1073741595;
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
      v13 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 37464), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 37464));
  KeAbPostRelease(v6 + 37464);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v13;
}
