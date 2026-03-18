/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1407BC580
 * Callers:
 *     ObpPreInterceptHandleCreate @ 0x1406A78D0 (ObpPreInterceptHandleCreate.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406BC8F0 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ObpCallPostOperationCallbacks @ 0x140881F12 (ObpCallPostOperationCallbacks.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  ULONG_PTR v3; // r14
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
  _QWORD *Pool2; // rax
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
      if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
        KiCheckForKernelApcDelivery();
      if ( v5 )
      {
        ExReleaseRundownProtection(v5);
        v5 = 0LL;
      }
      if ( i[6].Count )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1816552015LL);
        v4 = Pool2;
        if ( !Pool2 )
        {
          ExReleaseRundownProtection(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            *(_QWORD *)&v20 = *(_QWORD *)a2;
            v21 = *(unsigned __int64 *)(a2 + 16);
            *((_QWORD *)&v20 + 1) = *(_QWORD *)(a2 + 8);
            v22 = 0xC000009AuLL;
            ObpCallPostOperationCallbacks(&v20, a3);
          }
          return 3221225626LL;
        }
        Pool2[2] = i;
        Pool2[3] = 0LL;
        v19 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v19 != a3 )
          __fastfail(3u);
        *Pool2 = a3;
        Pool2[1] = v19;
        *v19 = Pool2;
        a3[1] = Pool2;
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
  if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
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
