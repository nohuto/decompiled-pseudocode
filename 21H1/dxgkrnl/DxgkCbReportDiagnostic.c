/*
 * XREFs of DxgkCbReportDiagnostic @ 0x1C004B0F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCbReportDiagnostic(__int64 a1, unsigned int *a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DxgAdapter; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax

  if ( KeGetCurrentIrql() > 2u )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v3[3] = 275LL;
    v3[4] = 20LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    WdLogEvent5_WdCriticalError(v3);
    return 3221225485LL;
  }
  v4 = 0;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v5 + 24) = 1LL;
LABEL_5:
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  DxgAdapter = DpiGetDxgAdapter(a1, (__int64)a2);
  if ( !DxgAdapter )
  {
    v5 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v5 + 24) = 2LL;
    goto LABEL_5;
  }
  v9 = *a2;
  if ( !(_DWORD)v9 )
  {
    v5 = WdLogNewEntry5_WdError(v9, v6);
    *(_QWORD *)(v5 + 24) = 3LL;
    goto LABEL_5;
  }
  if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
  {
    v5 = WdLogNewEntry5_WdError(v9, v6);
    *(_QWORD *)(v5 + 24) = *a2;
    *(_QWORD *)(v5 + 32) = 4LL;
    goto LABEL_5;
  }
  v10 = a2[1];
  if ( !(_DWORD)v10 )
  {
    v5 = WdLogNewEntry5_WdError(v9, v10);
    *(_QWORD *)(v5 + 24) = 6LL;
    goto LABEL_5;
  }
  if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
  {
    v5 = WdLogNewEntry5_WdError(v9, v10);
    *(_QWORD *)(v5 + 24) = a2[1];
    *(_QWORD *)(v5 + 32) = 7LL;
    goto LABEL_5;
  }
  do
  {
    if ( _bittest((const int *)&v9, v4) )
      break;
    ++v4;
  }
  while ( v4 < 2 );
  if ( v4 >= 2 )
  {
    v5 = WdLogNewEntry5_WdError(v9, v10);
    *(_QWORD *)(v5 + 24) = *a2;
    *(_QWORD *)(v5 + 32) = 5LL;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(DxgAdapter + 4LL * v4 + 4344) & *(_DWORD *)(DxgAdapter + 4LL * v4 + 4352) & (unsigned int)v10) == 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v4, v10, DxgAdapter);
    v11[3] = *a2;
    v11[4] = a2[1];
    v11[5] = 8LL;
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  return ((__int64 (__fastcall *)(unsigned int *))(&DiagnosticCategoryHandler)[v4])(a2);
}
