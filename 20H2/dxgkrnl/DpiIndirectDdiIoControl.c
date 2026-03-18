/*
 * XREFs of DpiIndirectDdiIoControl @ 0x1C02D4548
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C7BB0 (DpiFdoDispatchIoctl.c)
 *     DxgkHandleIndirectEscape @ 0x1C02D4700 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiIndirectDdiIoControl(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 1056))(*(_QWORD *)(a1 + 1008));
  v4 = v1;
  if ( v1 < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
  }
  return (unsigned int)v4;
}
