/*
 * XREFs of ObpCallPostOperationCallbacks @ 0x140881F12
 * Callers:
 *     ObpCallPreOperationCallbacks @ 0x1407BC580 (ObpCallPreOperationCallbacks.c)
 *     ObpPostInterceptHandleCreate @ 0x140881FB8 (ObpPostInterceptHandleCreate.c)
 *     ObpPostInterceptHandleDuplicate @ 0x14088204C (ObpPostInterceptHandleDuplicate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCallPostOperationCallbacks(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rbx

  while ( (_QWORD *)*a2 != a2 )
  {
    v4 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v4 != a2 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    a2[1] = v5;
    *v5 = a2;
    v6 = v4[2];
    *(_QWORD *)(a1 + 24) = v4[3];
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 48))(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL), a1);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 56));
    ExFreePoolWithTag(v4, 0);
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6243624Fu);
  KeLeaveCriticalRegion();
  return 0LL;
}
