/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x14060FBC0
 * Callers:
 *     ObpPreInterceptHandleCreate @ 0x14060FD90 (ObpPreInterceptHandleCreate.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406D0AC4 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ObpCallPostOperationCallbacks @ 0x1408D9390 (ObpCallPostOperationCallbacks.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r9
  struct _KTHREAD *v16; // rax
  bool v17; // zf
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // r9
  struct _KTHREAD *v24; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-58h] BYREF
  __int128 v29; // [rsp+30h] [rbp-48h]
  __int128 v30; // [rsp+40h] [rbp-38h]

  v3 = a1 + 184;
  v28 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = *v9; i != (struct _EX_RUNDOWN_REF *)v9; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && ExAcquireRundownProtection_0(i + 7) )
    {
      ExReleasePushLockEx(v3, 0LL);
      v16 = KeGetCurrentThread();
      v17 = v16->SpecialApcDisable++ == -1;
      if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery(v13, v12, v14, v15);
      if ( v5 )
      {
        ExReleaseRundownProtection_0(v5);
        v5 = 0LL;
      }
      if ( i[6].Count )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ExReleaseRundownProtection_0(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            v30 = 0xC000009AuLL;
            *((_QWORD *)&v29 + 1) = 0LL;
            *(_QWORD *)&v28 = *(_QWORD *)a2;
            *(_QWORD *)&v29 = *(_QWORD *)(a2 + 16);
            *((_QWORD *)&v28 + 1) = *(_QWORD *)(a2 + 8);
            ObpCallPostOperationCallbacks(&v28, a3);
          }
          return 3221225626LL;
        }
        PoolWithTag[2] = i;
        PoolWithTag[3] = 0LL;
        v27 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v27 != a3 )
          __fastfail(3u);
        *PoolWithTag = a3;
        PoolWithTag[1] = v27;
        *v27 = PoolWithTag;
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
      v19 = KeGetCurrentThread();
      --v19->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v3, 0LL);
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  v24 = KeGetCurrentThread();
  v17 = v24->SpecialApcDisable++ == -1;
  if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
    KiCheckForKernelApcDelivery(v21, v20, v22, v23);
  if ( v5 )
    ExReleaseRundownProtection_0(v5);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
