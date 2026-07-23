/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x14062A5E0
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14061E5F0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiDmGetObjectConstraintList @ 0x14062ECFC (PiDmGetObjectConstraintList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebp
  _QWORD *v21; // rsi
  PVOID *v22; // rsi
  char v24; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v24 = 0;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
  v20 = 0;
  if ( (_DWORD)v6 )
  {
    v21 = v4;
    do
    {
      v5 = a3(*v21, a4, &v24);
      if ( v5 < 0 )
        break;
      if ( v24 )
        break;
      ++v20;
      ++v21;
    }
    while ( v20 < (unsigned int)v6 );
  }
  if ( v4 )
  {
    if ( (_DWORD)v6 )
    {
      v22 = (PVOID *)v4;
      do
      {
        PiDmObjectRelease(*v22++);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(v4, 0x5A706E50u);
  }
  return (unsigned int)v5;
}
