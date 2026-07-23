/*
 * XREFs of SeDefaultObjectMethod @ 0x1405F5EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405F5510 (ObSetSecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x1405F6110 (ObLogSecurityDescriptor.c)
 *     ObQuerySecurityDescriptorInfo @ 0x14066CFC0 (ObQuerySecurityDescriptorInfo.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        _QWORD *a1,
        int a2,
        DWORD *a3,
        void *a4,
        __int64 a5,
        __int64 *a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  int v10; // edx
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // ebp
  __int64 v15; // rdi
  unsigned int v16; // ebx
  volatile signed __int64 *v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v22; // rbp
  volatile signed __int64 *v23; // r14
  signed __int64 v24; // rax
  volatile signed __int64 *i; // rcx

  if ( !a2 )
    return ObSetSecurityDescriptorInfo(a1, a3, a4, (__int64)a6, a7, a8);
  v10 = a2 - 1;
  if ( !v10 )
    return ObQuerySecurityDescriptorInfo(a1, a3, a4, a5);
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = 0;
    if ( v11 != 1 )
      KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
    if ( a4 )
    {
      v13 = ObLogSecurityDescriptor(a4);
      if ( v13 >= 0 )
      {
        ExFreePoolWithTag(a4, 0);
        *(a1 - 1) = 0LL;
      }
      return (unsigned int)v13;
    }
    else
    {
      *(a1 - 1) = 0LL;
    }
    return v12;
  }
  else
  {
    v15 = *a6;
    *a6 = 0LL;
    v16 = (v15 & 0xF) + 1;
    v17 = (volatile signed __int64 *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw((const void *)(v17 + 1));
    v18 = *((_QWORD *)v17 + 1);
    v19 = v18 - v16;
    if ( v19 <= 0 )
    {
LABEL_14:
      if ( v19 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v22 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v17 + 4));
      --CurrentThread->KernelApcDisable;
      v23 = v22 + 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v22, 0LL);
      v24 = _InterlockedExchangeAdd64(v17 + 1, -v16) - v16;
      if ( v24 > 0 )
      {
        if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      else
      {
        if ( v24 )
          __fastfail(0xEu);
        for ( i = (volatile signed __int64 *)*v23; i != v17; i = (volatile signed __int64 *)*i )
          v23 = i;
        *v23 = *v17;
        if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ExFreePoolWithTag((PVOID)v17, 0x6353624Fu);
      }
    }
    else
    {
      while ( 1 )
      {
        v20 = v18;
        v18 = _InterlockedCompareExchange64(v17 + 1, v19, v18);
        if ( v20 == v18 )
          break;
        v19 = v18 - v16;
        if ( v19 <= 0 )
          goto LABEL_14;
      }
    }
    return 0LL;
  }
}
