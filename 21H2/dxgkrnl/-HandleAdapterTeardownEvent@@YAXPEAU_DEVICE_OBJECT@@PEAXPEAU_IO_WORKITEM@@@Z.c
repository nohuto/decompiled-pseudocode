/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020D590
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0037B3C (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A358 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall HandleAdapterTeardownEvent(__int64 IoObject, unsigned int *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // [rsp+20h] [rbp-48h]
  unsigned int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+44h] [rbp-24h]
  int v17; // [rsp+4Ch] [rbp-1Ch]
  __int64 v18; // [rsp+50h] [rbp-18h]
  __int64 v19; // [rsp+58h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(IoObject, (__int64)Context) + 342);
  v7 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v5);
  v7[3] = *(_QWORD *)Context;
  v7[4] = Context[2];
  v7[5] = Context[3];
  WdLogEvent5_WdEvent(v7);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v14 = Context[3];
    v13 = Context[2];
    McTemplateK0pqq_EtwWriteTransfer(v8, &HardwareContentProtectionTeardown, v9, *(_QWORD *)Context, v13, v14);
  }
  v16 = 0LL;
  v17 = 0;
  v19 = 0LL;
  v15 = 11;
  v18 = 1LL;
  SMgrGdiCallout(&v15, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(
              &WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION,
              Context + 4,
              8LL,
              0LL,
              0LL,
              0,
              0) < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v12 + 24) = 2289LL;
    WdLogEvent5_WdError(v12);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
