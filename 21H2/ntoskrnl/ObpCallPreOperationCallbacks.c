/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1406D8EC0
 * Callers:
 *     ObpPreInterceptHandleDuplicate @ 0x1405E3B38 (ObpPreInterceptHandleDuplicate.c)
 *     ObpPreInterceptHandleCreate @ 0x1406D9090 (ObpPreInterceptHandleCreate.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ObpCallPostOperationCallbacks @ 0x1408DDE60 (ObpCallPostOperationCallbacks.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  ULONG_PTR v3; // rbp
  _QWORD *v4; // r13
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF **v9; // r12
  struct _KTHREAD *v10; // rax
  struct _EX_RUNDOWN_REF *i; // rbx
  struct _KTHREAD *v12; // rax
  bool v13; // zf
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v15; // rax
  struct _KTHREAD *v16; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+30h] [rbp-48h]
  __int128 v22; // [rsp+40h] [rbp-38h]

  v3 = a1 + 184;
  v20 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = *v9; i != (struct _EX_RUNDOWN_REF *)v9; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && ExAcquireRundownProtection(i + 7) )
    {
      ExReleasePushLockEx(v3, 0LL);
      v12 = KeGetCurrentThread();
      v13 = v12->SpecialApcDisable++ == -1;
      if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
        KiCheckForKernelApcDelivery();
      if ( v5 )
      {
        ExReleaseRundownProtection(v5);
        v5 = 0LL;
      }
      if ( i[6].Count )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ExReleaseRundownProtection(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            v22 = 0xC000009AuLL;
            *((_QWORD *)&v21 + 1) = 0LL;
            *(_QWORD *)&v20 = *(_QWORD *)a2;
            *(_QWORD *)&v21 = *(_QWORD *)(a2 + 16);
            *((_QWORD *)&v20 + 1) = *(_QWORD *)(a2 + 8);
            ObpCallPostOperationCallbacks(&v20, a3);
          }
          return 3221225626LL;
        }
        PoolWithTag[2] = i;
        PoolWithTag[3] = 0LL;
        v19 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v19 != a3 )
          __fastfail(3u);
        *PoolWithTag = a3;
        PoolWithTag[1] = v19;
        *v19 = PoolWithTag;
        a3[1] = PoolWithTag;
      }
      Count = (void (__fastcall *)(_QWORD, __int64))i[5].Count;
      if ( Count )
      {
        Count(*(_QWORD *)(i[3].Count + 8), a2);
        if ( i[6].Count )
          v4[3] = *(_QWORD *)(a2 + 24);
        else
          v5 = i + 7;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
      v15 = KeGetCurrentThread();
      --v15->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v3, 0LL);
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  v16 = KeGetCurrentThread();
  v13 = v16->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  if ( v5 )
    ExReleaseRundownProtection(v5);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
