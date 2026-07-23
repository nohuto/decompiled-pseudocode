/*
 * XREFs of SLGetSubscriptionPfn @ 0x14094A9A8
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407946B4 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     sub_1403B596C @ 0x1403B596C (sub_1403B596C.c)
 *     _local_unwind @ 0x1403CE590 (_local_unwind.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SLGetSubscriptionPfn(__int64 a1, PVOID *a2)
{
  unsigned int v4; // r15d
  PVOID v5; // rax
  int v7; // r12d
  ULONG_PTR v8; // rcx
  signed __int64 *v9; // rbx
  _OWORD *PoolWithTag; // rcx
  __int64 v11; // [rsp+0h] [rbp-88h] BYREF
  int v12; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  __int64 *v15; // [rsp+48h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+18h] BYREF
  struct _KTHREAD *v17; // [rsp+A8h] [rbp+20h]

  v15 = &v11;
  v12 = 0;
  P = 0LL;
  v4 = 0;
  LODWORD(NumberOfBytes) = 0;
  if ( *(_BYTE *)(a1 + 37480) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (signed __int64 *)(a1 + 37464);
    ExAcquirePushLockSharedEx(a1 + 37464, 0LL);
    if ( *(_BYTE *)(a1 + 37480) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x82uLL, 0x20534C53u);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v12 = -1073741595;
        local_unwind(v15, &loc_14094AA74);
      }
      *PoolWithTag = *(_OWORD *)(a1 + 37482);
      PoolWithTag[1] = *(_OWORD *)(a1 + 37498);
      PoolWithTag[2] = *(_OWORD *)(a1 + 37514);
      PoolWithTag[3] = *(_OWORD *)(a1 + 37530);
      PoolWithTag[4] = *(_OWORD *)(a1 + 37546);
      PoolWithTag[5] = *(_OWORD *)(a1 + 37562);
      PoolWithTag[6] = *(_OWORD *)(a1 + 37578);
      PoolWithTag[7] = *(_OWORD *)(a1 + 37594);
      *((_WORD *)PoolWithTag + 64) = *(_WORD *)(a1 + 37610);
    }
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9);
    v8 = (ULONG_PTR)v9;
  }
  else
  {
    v12 = sub_1403B596C(a1, (__int64)&qword_140980720, 0LL, 0LL, 0, (__int64)&NumberOfBytes);
    if ( v12 == -1073741789 )
    {
      v4 = NumberOfBytes;
      v5 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
      P = v5;
      if ( !v5 || v4 > 0x82 )
      {
        v12 = -1073741595;
        goto LABEL_7;
      }
      v12 = sub_1403B596C(a1, (__int64)&qword_140980720, 0LL, (__int64)v5, v4, (__int64)&NumberOfBytes);
    }
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 37464, 0LL);
    if ( !*(_BYTE *)(a1 + 37480) )
    {
      v7 = v12;
      if ( v12 >= 0 )
        memmove((void *)(a1 + 37482), P, v4);
      if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741772 )
        *(_BYTE *)(a1 + 37480) = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 37464), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 37464));
    v8 = a1 + 37464;
  }
  KeAbPostRelease(v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a2 = P;
  P = 0LL;
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v12;
}
