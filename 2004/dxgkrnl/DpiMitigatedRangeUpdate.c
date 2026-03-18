/*
 * XREFs of DpiMitigatedRangeUpdate @ 0x1C02C6710
 * Callers:
 *     DxgkMitigatedRangeUpdateCB @ 0x1C0042230 (DxgkMitigatedRangeUpdateCB.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00501AC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C00502D4 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C0231A14 (DxgkDdiQueryVirtualFunctionLuid.c)
 */

void __fastcall DpiMitigatedRangeUpdate(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  void *v5; // rdx
  PIRP v6; // rsi
  struct _IRP *MasterIrp; // rcx
  __int64 v8; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF
  int VirtualFunctionLuid; // [rsp+40h] [rbp-18h]
  struct _LUID SourceLuid; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[8];
  SourceLuid = 0LL;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1, 0LL, 1);
  if ( VirtualFunctionLuid < 0
    || (VirtualFunctionLuid = DxgkDdiQueryVirtualFunctionLuid(*(_QWORD **)(v2 + 3896), 0LL, a2, (__int64)&SourceLuid),
        VirtualFunctionLuid < 0) )
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  }
  else
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
    ExAcquirePushLockExclusiveEx(v2 + 5488, 0LL);
    v5 = *(void **)(v2 + 5432);
    if ( v5 && (v6 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5328), v5)) != 0LL )
    {
      KeClearEvent((PRKEVENT)(v2 + 5496));
      MasterIrp = v6->AssociatedIrp.MasterIrp;
      *(_OWORD *)&MasterIrp->Type = 0LL;
      *(_OWORD *)&MasterIrp->Flags = 0LL;
      MasterIrp->ThreadListEntry.Flink = 0LL;
      LODWORD(MasterIrp->ThreadListEntry.Blink) = 0;
      RtlCopyLuid((PLUID)MasterIrp, &SourceLuid);
      v6->IoStatus.Status = 0;
      v6->IoStatus.Information = 44LL;
      IofCompleteRequest(v6, 1);
      KeWaitForSingleObject((PVOID)(v2 + 5496), Executive, 0, 0, 0LL);
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v4, v5);
      *(_QWORD *)(v8 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v8);
    }
    ExReleasePushLockExclusiveEx(v2 + 5488, 0LL);
  }
}
