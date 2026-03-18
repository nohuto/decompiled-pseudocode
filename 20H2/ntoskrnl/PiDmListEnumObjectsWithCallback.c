/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x14063DA00
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DF688 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetObjectConstraintList @ 0x1406ED5D0 (PiDmGetObjectConstraintList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PiDmObjectRelease @ 0x14063F020 (PiDmObjectRelease.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
