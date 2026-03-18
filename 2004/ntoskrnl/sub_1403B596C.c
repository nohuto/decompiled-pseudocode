/*
 * XREFs of sub_1403B596C @ 0x1403B596C
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407946B4 (SLQueryLicenseValueInternal.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x14094A010 (ExpConsumeAddonPolicySetCacheProvider.c)
 *     SLGetSubscriptionPfn @ 0x14094A9A8 (SLGetSubscriptionPfn.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     sub_140794BB4 @ 0x140794BB4 (sub_140794BB4.c)
 */

__int64 __fastcall sub_1403B596C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed __int64 *v10; // rsi
  _DWORD *v11; // rax
  unsigned int v13; // [rsp+30h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (signed __int64 *)(a1 + 37464);
  ExAcquirePushLockSharedEx(a1 + 37464, 0LL);
  if ( *(_BYTE *)(a1 + 37452) == 1 && !*(_DWORD *)(a1 + 37448) )
    goto LABEL_7;
  v11 = *(_DWORD **)a1;
  if ( *(_QWORD *)a1 || (v11 = *(_DWORD **)(a1 + 37456)) != 0LL )
  {
    if ( *v11 != 24 )
    {
      if ( *v11 >= 0x18u )
      {
        v13 = sub_140794BB4(a1, a2, a3, a4, a5, a6);
        goto LABEL_10;
      }
      goto LABEL_9;
    }
LABEL_7:
    v13 = -1073741772;
    goto LABEL_10;
  }
LABEL_9:
  v13 = -1073741762;
LABEL_10:
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v13;
}
