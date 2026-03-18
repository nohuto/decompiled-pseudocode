/*
 * XREFs of DpiMiracastDdiMiracastDestroyContext @ 0x1C02C93F4
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0052EF8 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0053910 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C00548F0 (McTemplateK0pp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiMiracastDdiMiracastDestroyContext(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    McTemplateK0pp_EtwWriteTransfer(a1, &EventEnterDxgkDdiMiracastDestroyContext, a3, *(_QWORD *)(a1 + 48), a2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 3208))(*(_QWORD *)(a1 + 48), a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    return McTemplateK0pp_EtwWriteTransfer(v6, &EventLeaveDxgkDdiMiracastDestroyContext, v7, *(_QWORD *)(a1 + 48), a2);
  return result;
}
