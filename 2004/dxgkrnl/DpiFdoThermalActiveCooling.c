/*
 * XREFs of DpiFdoThermalActiveCooling @ 0x1C02D3AF0
 * Callers:
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C02D4304 (DxgkHandleThermalCoolingDrtEscape.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0039B44 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011F120 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011F39C (DpiAcquireCoreSyncAccessSafe.c)
 */

void __fastcall DpiFdoThermalActiveCooling(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = a2;
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, File, 1u, 0x20u);
  v8 = v5;
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 484) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) < 0 )
    {
      **(_BYTE **)(v2 + 4936) = 1;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v12) = v3;
        McTemplateK0pt_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDpiFdoThermalActiveCooling,
          v11,
          a1,
          v12);
      }
      LOBYTE(v10) = v3;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 4936) + 48LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 4936) + 16LL),
        v10);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 4936) + 2LL) = v3;
    if ( *(_BYTE *)(v2 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, 0x20u);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
}
