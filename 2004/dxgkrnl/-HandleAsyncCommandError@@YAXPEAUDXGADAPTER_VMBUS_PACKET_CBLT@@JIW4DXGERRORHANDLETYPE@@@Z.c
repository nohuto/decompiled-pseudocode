/*
 * XREFs of ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D6EC4
 * Callers:
 *     ?VmBusSignalFenceCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9AC0 (-VmBusSignalFenceCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRefCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9D70 (-VmBusSignalFenceNtSharedByRefCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9F60 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitCommandCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DA560 (-VmBusSubmitCommandCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitCommandToHwQueueCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DA730 (-VmBusSubmitCommandToHwQueueCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAB80 (-VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00043E4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016A90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0016BB8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003957C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkMarkDeviceAsError @ 0x1C02596A0 (DxgkMarkDeviceAsError.c)
 */

void __fastcall HandleAsyncCommandError(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned int v9; // ebx
  struct DXGPROCESS *v10; // r8
  struct _KTHREAD **v11; // r8
  __int64 v12; // rdx
  struct _KTHREAD **v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-20h]
  _BYTE v18[16]; // [rsp+30h] [rbp-10h] BYREF
  struct DXGDEVICE *v19; // [rsp+60h] [rbp+20h] BYREF

  v5 = (int)a2;
  if ( *(_BYTE *)(a1[17] + 299LL) )
  {
    v7 = a1[15];
    v8 = *(unsigned int *)(v7 + 16);
    if ( (*(_DWORD *)(v7 + 12) & 0x100) != 0 )
    {
      v9 = 0;
      switch ( a4 )
      {
        case 1:
          v10 = (struct DXGPROCESS *)a1[11];
          v19 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18, a3, v10, &v19, 0);
          if ( !v19 )
          {
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18);
            return;
          }
          v9 = *(_DWORD *)(*((_QWORD *)v19 + 2) + 436LL);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18);
          break;
        case 2:
          v11 = (struct _KTHREAD **)a1[11];
          v19 = 0LL;
          DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18, a3, v11, &v19, 0);
          if ( !v19 )
          {
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18, v12);
            return;
          }
          v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 436LL);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18, v12);
          break;
        case 0:
          v13 = (struct _KTHREAD **)a1[11];
          v19 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v18, a3, v13, &v19);
          if ( !v19 )
          {
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v18);
            return;
          }
          v9 = a3;
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v18);
          break;
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v14[3] = v5;
      v14[4] = a1[11];
      v14[5] = v9;
      v14[6] = v8;
      WdLogEvent5_WdError(v14);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v17) = v9;
        McTemplateK0pqq_EtwWriteTransfer(v15, &EventVmBusAsyncCommandFailure, v16, a1[11], v17, v5);
      }
      if ( v9 )
      {
        v19 = (struct DXGDEVICE *)(v9 | 0x1900000000LL);
        DxgkMarkDeviceAsError(&v19);
      }
    }
  }
}
