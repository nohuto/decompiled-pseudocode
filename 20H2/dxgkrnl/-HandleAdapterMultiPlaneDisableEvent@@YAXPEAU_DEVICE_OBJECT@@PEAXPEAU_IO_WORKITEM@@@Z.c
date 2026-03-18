/*
 * XREFs of ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020C5B0
 * Callers:
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0036B5C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003942C (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall HandleAdapterMultiPlaneDisableEvent(PVOID IoObject, unsigned int *Context, PIO_WORKITEM IoWorkItem)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // [rsp+20h] [rbp-38h]
  unsigned int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+34h] [rbp-24h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  __int64 v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  v5 = (_QWORD *)WdLogNewEntry5_WdEvent(IoObject, Context);
  v5[3] = *(_QWORD *)Context;
  v5[4] = Context[2];
  v5[5] = Context[3];
  WdLogEvent5_WdEvent(v5);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v9 = Context[3];
    v8 = Context[2];
    McTemplateK0pqq_EtwWriteTransfer(v6, &MultiPlaneOverlayDisable, v7, *(_QWORD *)Context, v8, v9);
  }
  v11 = 0LL;
  v12 = 0;
  v14 = 0LL;
  v10 = 14;
  v13 = 1LL;
  SMgrGdiCallout(&v10, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
