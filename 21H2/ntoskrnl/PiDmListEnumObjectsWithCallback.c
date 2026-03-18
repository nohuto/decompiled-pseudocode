/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x14077A8E0
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406E5780 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x14077747C (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(_QWORD, __int64, char *),
        __int64 a4)
{
  __int64 v4; // rdi
  int v5; // ebp
  _QWORD *Pool2; // r14
  int v7; // r12d
  bool v8; // si
  __int64 v10; // r13
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rbx
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  volatile signed __int32 *v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r15
  _QWORD *v18; // rsi
  __int64 (__fastcall *v19)(_QWORD, __int64, char *); // r12
  PVOID *v20; // rbx
  struct _KTHREAD *v22; // rax
  _QWORD *v23; // rax
  char v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall *v25)(_QWORD, __int64, char *); // [rsp+70h] [rbp+18h]
  __int64 v26; // [rsp+78h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v4 = 0LL;
  v24 = 0;
  v5 = 0;
  Pool2 = 0LL;
  v7 = 0;
  v8 = 0;
  v10 = 5LL * a1;
  CurrentThread = KeGetCurrentThread();
  v12 = a2 + PiDmListDefs[5 * a1 + 1];
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2, 0LL);
  v13 = *(_DWORD *)(v12 + 16);
  if ( v13 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v13, 1517317712LL);
    if ( Pool2 )
    {
      v14 = *(_QWORD **)v12;
      if ( *(_QWORD *)v12 != v12 )
      {
        while ( (unsigned int)v4 < *(_DWORD *)(v12 + 16) )
        {
          v15 = (volatile signed __int32 *)((char *)v14 - PiDmListDefs[v10 + 3]);
          Pool2[v4] = v15;
          _InterlockedAdd(v15 + 2, 1u);
          v14 = (_QWORD *)*v14;
          v4 = (unsigned int)(v4 + 1);
          if ( v14 == (_QWORD *)v12 )
            goto LABEL_6;
        }
        v8 = 1;
      }
LABEL_6:
      if ( (unsigned int)v4 < *(_DWORD *)(v12 + 16) )
        v8 = 1;
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v8 = *(_QWORD *)v12 != v12;
  }
  ExReleasePushLockEx(a2, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    v23 = *(_QWORD **)v12;
    while ( v23 != (_QWORD *)v12 )
    {
      v23 = (_QWORD *)*v23;
      ++v7;
    }
    *(_DWORD *)(v12 + 16) = v7;
    ExReleasePushLockEx(a2, 0LL);
    KeLeaveCriticalRegion();
  }
  v16 = 0;
  if ( (_DWORD)v4 )
  {
    v17 = v26;
    v18 = Pool2;
    v19 = v25;
    do
    {
      v5 = v19(*v18, v17, &v24);
      if ( v5 < 0 )
        break;
      if ( v24 )
        break;
      ++v16;
      ++v18;
    }
    while ( v16 < (unsigned int)v4 );
  }
  if ( Pool2 )
  {
    if ( (_DWORD)v4 )
    {
      v20 = (PVOID *)Pool2;
      do
      {
        PiDmObjectRelease(*v20++);
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(Pool2, 0x5A706E50u);
  }
  return (unsigned int)v5;
}
