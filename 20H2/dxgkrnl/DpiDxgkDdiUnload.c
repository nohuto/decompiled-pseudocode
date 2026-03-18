/*
 * XREFs of DpiDxgkDdiUnload @ 0x1C0058998
 * Callers:
 *     DpiCleanup @ 0x1C02C6520 (DpiCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0038FD8 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiUnload(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &EventEnterDdiUnload, a3);
  (*(void (**)(void))(a1 + 248))();
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0_EtwWriteTransfer(v5, &EventExitDdiUnload, v6);
  result = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  *(_QWORD *)(result + 24) = a1;
  *(_OWORD *)(result + 32) = 0LL;
  *(_OWORD *)(result + 48) = 0LL;
  return result;
}
