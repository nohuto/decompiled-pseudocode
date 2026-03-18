/*
 * XREFs of DpiDxgkDdiDisplayDetectControl @ 0x1C0173AE8
 * Callers:
 *     DpiFdoInvalidateChildRelations @ 0x1C01738B0 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C02C9D4C (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoStopAdapter @ 0x1C02CAB14 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001FEF8 (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C0020110 (DxgkQueryConnectionChanges.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0039544 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayDetectControl(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char v9; // di
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  char v19; // r8
  int ConnectionChanges; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-38h]
  __int64 v26; // [rsp+28h] [rbp-30h]
  __int64 v27; // [rsp+30h] [rbp-28h]
  __int64 v28; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 3905) & 8) == 0 )
    return DpiFdoHandleDisplayDetectControl(a1, a4);
  v9 = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(
      HIBYTE(*a4) & 0xF,
      &EventEnterDdiDisplayDetectControl,
      *a4 & 0xFFFFFF,
      a3,
      HIBYTE(*a4) & 0xF,
      *a4 & 0xFFFFFF,
      (*a4 >> 28) & 1,
      0);
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1128))(a3, a4);
  v15 = v10;
  if ( bTracingEnabled )
  {
    v11 = *a4 >> 28;
    v13 = *a4 & 0xFFFFFF;
    v12 = HIBYTE(*a4) & 0xF;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v28) = v10;
      LODWORD(v27) = (*a4 & 0x10000000) != 0;
      LODWORD(v26) = *a4 & 0xFFFFFF;
      LODWORD(v25) = HIBYTE(*a4) & 0xF;
      McTemplateK0pqtqq_EtwWriteTransfer(v12, &EventExitDdiDisplayDetectControl, v13, a3, v25, v26, v27, v28);
    }
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v16[3] = a2;
  v16[4] = HIBYTE(*a4) & 0xF;
  v16[5] = *a4 & 0xFFFFFF;
  v18 = ((unsigned __int64)*a4 >> 28) & 1;
  v16[7] = v15;
  v16[6] = v18;
  if ( *((_BYTE *)a4 + 18) )
  {
    v19 = *((_BYTE *)a4 + 16);
    if ( (*a4 & 0xF000000) != 0x2000000 || !v19 )
      v9 = 0;
    LOBYTE(v17) = v9;
    ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), v17, v19, *((_BYTE *)a4 + 17), 0);
    v23 = ConnectionChanges;
    if ( ConnectionChanges < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v24 + 24) = v23;
      WdLogEvent5_WdError(v24);
    }
  }
  return (unsigned int)v15;
}
