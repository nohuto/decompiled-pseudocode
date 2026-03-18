/*
 * XREFs of DxgkInvalidateHwContextCB @ 0x1C0041FB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D490 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkInvalidateHwContextCB(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 DxgAdapter; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( KeGetCurrentIrql() )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v3 + 24) = 1244LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a1, a2);
  if ( !*(_QWORD *)(DxgAdapter + 2704) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[3] = 275LL;
    v7[4] = 7LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  if ( *(int *)(DxgAdapter + 2328) < 9472 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v8 + 24) = 1257LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2704) + 616LL)
                                                                  + 8LL)
                                                      + 256LL))(
             v9,
             *(unsigned int *)(a1 + 16));
  else
    return 0LL;
}
