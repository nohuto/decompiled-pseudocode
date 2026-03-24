/*
 * XREFs of ExFetchLicenseData @ 0x14094D0B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     memmove @ 0x140413F40 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v9; // rdx
  unsigned int v10; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v10 = 0;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)a1, a2) + 113);
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
    if ( a1 && v4 && v4 >= *v9 )
    {
      memmove(a1, v9, *v9);
      if ( v4 >= 0x14 )
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
