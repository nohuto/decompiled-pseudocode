/*
 * XREFs of ExFetchLicenseData @ 0x14094D280
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v13 = 0;
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
    v13 = -1073741595;
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
      v13 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 46840), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 46840));
  KeAbPostRelease(v6 + 46840);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v13;
}
