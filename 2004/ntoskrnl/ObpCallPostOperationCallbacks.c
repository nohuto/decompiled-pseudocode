/*
 * XREFs of ObpCallPostOperationCallbacks @ 0x1408DA700
 * Callers:
 *     ObpCallPreOperationCallbacks @ 0x140687D40 (ObpCallPreOperationCallbacks.c)
 *     ObpPostInterceptHandleCreate @ 0x1408DA7A8 (ObpPostInterceptHandleCreate.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1408DA83C (ObpPostInterceptHandleDuplicate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 56));
    ExFreePoolWithTag(v4, 0);
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6243624Fu);
  KeLeaveCriticalRegion();
  return 0LL;
}
