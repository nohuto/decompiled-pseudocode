/*
 * XREFs of DpiDxgkDdiStopDevice @ 0x1C02D4354
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C02C7554 (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0038624 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiStopDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+20h] [rbp-18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v14 = 0;
    McTemplateK0pq_EtwWriteTransfer(a1, &EventEnterDdiStopDevice, a3, a2, v14);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 160))(a2);
  v10 = v5;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v13) = v5;
    McTemplateK0pq_EtwWriteTransfer(v7, &EventExitDdiStopDevice, v8, a2, v13);
  }
  v11 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = a2;
  *(_QWORD *)(v11 + 40) = v10;
  *(_OWORD *)(v11 + 48) = 0LL;
  return (unsigned int)v10;
}
