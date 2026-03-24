/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x1406357D0
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14062E878 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     PiDmGetObjectConstraintList @ 0x140639EEC (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406BF788 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PiDmObjectRelease @ 0x140636DF0 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(_QWORD, __int64, char *),
        __int64 a4)
{
  _QWORD *v4; // rbx
  int v5; // r14d
  __int64 v6; // rdi
  __int64 v10; // rbp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rsi
  unsigned int v13; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rdx
  volatile signed __int32 *v16; // rcx
  unsigned int v17; // ebp
  _QWORD *v18; // rsi
  PVOID *v19; // rsi
  char v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v21 = 0;
  v5 = 0;
  v6 = 0LL;
  v10 = 5LL * a1;
  CurrentThread = KeGetCurrentThread();
  v12 = a2 + PiDmListDefs[5 * a1 + 1];
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2, 0LL);
  v13 = *(_DWORD *)(v12 + 16);
  if ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v13, 0x5A706E50u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = *(_QWORD **)v12;
      if ( *(_QWORD *)v12 != v12 )
      {
        do
        {
          v16 = (volatile signed __int32 *)((char *)v15 - PiDmListDefs[v10 + 3]);
          PoolWithTag[v6] = v16;
          _InterlockedIncrement(v16 + 2);
          v15 = (_QWORD *)*v15;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( v15 != (_QWORD *)v12 );
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  ExReleasePushLockEx(a2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v17 = 0;
  if ( (_DWORD)v6 )
  {
    v18 = v4;
    do
    {
      v5 = a3(*v18, a4, &v21);
      if ( v5 < 0 )
        break;
      if ( v21 )
        break;
      ++v17;
      ++v18;
    }
    while ( v17 < (unsigned int)v6 );
  }
  if ( v4 )
  {
    if ( (_DWORD)v6 )
    {
      v19 = (PVOID *)v4;
      do
      {
        PiDmObjectRelease(*v19++);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(v4, 0x5A706E50u);
  }
  return (unsigned int)v5;
}
