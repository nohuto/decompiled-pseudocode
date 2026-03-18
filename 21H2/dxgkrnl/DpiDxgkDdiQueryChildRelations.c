/*
 * XREFs of DpiDxgkDdiQueryChildRelations @ 0x1C020F0B4
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C020E59C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0hbr0pqx_EtwWriteTransfer @ 0x1C0066640 (McTemplateK0hbr0pqx_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildRelations(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax

  v5 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0hbr0pqx_EtwWriteTransfer(a4, &EventEnterDdiQueryChildRelations, a3, a4, a3, a2, 0, a4 / 0x1C);
  v10 = (*(int (__fastcall **)(__int64, __int64, _QWORD))(a1 + 200))(a2, a3, (unsigned int)v5);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0hbr0pqx_EtwWriteTransfer(v9, &EventExitDdiQueryChildRelations, v5, v5, a3, a2, v10, v5 / 0x1C);
  v11 = WdLogNewEntry5_WdTrace(v9, v8);
  *(_QWORD *)(v11 + 40) = v10;
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = a3;
  *(_OWORD *)(v11 + 48) = 0LL;
  return (unsigned int)v10;
}
