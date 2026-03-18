/*
 * XREFs of sub_1403B326C @ 0x1403B326C
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x140791E84 (SLQueryLicenseValueInternal.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x140948C70 (ExpConsumeAddonPolicySetCacheProvider.c)
 *     SLGetSubscriptionPfn @ 0x140949608 (SLGetSubscriptionPfn.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     sub_140792384 @ 0x140792384 (sub_140792384.c)
 */

__int64 __fastcall sub_1403B326C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed __int64 *v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // [rsp+30h] [rbp-38h]
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
        v16 = sub_140792384(a1, a2, a3, a4, a5, a6);
        goto LABEL_10;
      }
      goto LABEL_9;
    }
LABEL_7:
    v16 = -1073741772;
    goto LABEL_10;
  }
LABEL_9:
  v16 = -1073741762;
LABEL_10:
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  return v16;
}
