/*
 * XREFs of sub_1403B6A2C @ 0x1403B6A2C
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407A0F5C (SLQueryLicenseValueInternal.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x14094FDD0 (ExpConsumeAddonPolicySetCacheProvider.c)
 *     SLGetSubscriptionPfn @ 0x140950768 (SLGetSubscriptionPfn.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     sub_1407A145C @ 0x1407A145C (sub_1407A145C.c)
 */

__int64 __fastcall sub_1403B6A2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed __int64 *v10; // rsi
  _DWORD *v11; // rax
  unsigned int v13; // [rsp+30h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_BYTE *)(a1 + 46828) == 1 && !*(_DWORD *)(a1 + 46824) )
    goto LABEL_7;
  v11 = *(_DWORD **)a1;
  if ( *(_QWORD *)a1 || (v11 = *(_DWORD **)(a1 + 46832)) != 0LL )
  {
    if ( *v11 != 24 )
    {
      if ( *v11 >= 0x18u )
      {
        v13 = sub_1407A145C(a1, a2, a3, a4, a5, a6);
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
