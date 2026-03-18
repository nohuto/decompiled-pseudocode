/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C0240B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C0040198 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C023CAD4 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  __int64 v2; // rax
  struct DXGADAPTER_VMBUS_PACKET *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 *v7; // r8
  int v8; // ebp
  int v9; // r13d
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v15; // rax
  unsigned int v16; // eax
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v17; // rcx
  __int64 (__fastcall *v18)(struct DXGADAPTER_VMBUS_PACKET *); // rax
  char v19; // al
  __int64 v20; // r8
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-30h]

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v4 = (_QWORD *)*((_QWORD *)a1 + 10);
  if ( v2 )
  {
    v5 = v2 + 168;
  }
  else
  {
    a1 = (struct DXGADAPTER_VMBUS_PACKET *)*((_QWORD *)a1 + 7);
    if ( a1 )
      v5 = *((_QWORD *)a1 + 62) + 128LL;
    else
      v5 = *((_QWORD *)v3 + 8);
  }
  v6 = *v4;
  v7 = &DxgkControlGuid_Context;
  v8 = *((_DWORD *)v4 + 3);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  LOBYTE(a1) = 64;
  if ( !*(_BYTE *)(v5 + 57) )
  {
    if ( *(_DWORD *)(v5 + 40) != v8 )
    {
      v12 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v12 + 24) = 297LL;
LABEL_43:
      v13 = v12;
      goto LABEL_44;
    }
    if ( !*((_QWORD *)v3 + 7) && v2 )
      *((_QWORD *)v3 + 7) = *(_QWORD *)(v2 + 96);
    _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
    if ( v8 == 1 )
    {
      if ( *((_DWORD *)v3 + 22) < 0x18u )
      {
        v13 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v13 + 24) = *((unsigned int *)v3 + 22);
        *(_QWORD *)(v13 + 32) = 315LL;
LABEL_44:
        WdLogEvent5_WdError(v13);
        goto LABEL_45;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0pxq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventVmBusProcessPacketGlobalWorkerBegin,
          (__int64)&DxgkControlGuid_Context,
          *((_QWORD *)v3 + 4),
          *v4,
          *((_DWORD *)v4 + 4));
      v9 = *((_DWORD *)v4 + 4);
      if ( (unsigned int)(v9 - 1000) > 0x11 )
      {
        v13 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v13 + 24) = *((int *)v4 + 4);
        *(_QWORD *)(v13 + 32) = 325LL;
        goto LABEL_44;
      }
      v14 = v9 - 1000;
      v15 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost;
    }
    else
    {
      v16 = *((_DWORD *)v3 + 22);
      if ( *((_DWORD *)v4 + 3) )
      {
        if ( v16 < 0x18 )
        {
          v13 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v13 + 24) = *((unsigned int *)v3 + 22);
          *(_QWORD *)(v13 + 32) = 356LL;
          goto LABEL_44;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          McTemplateK0pxq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventVmBusProcessPacketHostToVmWorkerBegin,
            (__int64)&DxgkControlGuid_Context,
            *((_QWORD *)v3 + 4),
            *v4,
            *((_DWORD *)v4 + 4));
        v10 = *((_DWORD *)v4 + 4);
        if ( v10 > 5 )
        {
          v12 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v12 + 24) = *((int *)v4 + 4);
          *(_QWORD *)(v12 + 32) = 366LL;
          goto LABEL_43;
        }
        v14 = *((int *)v4 + 4);
        v15 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm;
      }
      else
      {
        if ( v16 < 0x18 )
        {
          v13 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v13 + 24) = *((unsigned int *)v3 + 22);
          *(_QWORD *)(v13 + 32) = 336LL;
          goto LABEL_44;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          McTemplateK0pxq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventVmBusProcessPacketWorkerBegin,
            (__int64)&DxgkControlGuid_Context,
            *((_QWORD *)v3 + 4),
            *v4,
            *((_DWORD *)v4 + 4));
        v11 = *((_DWORD *)v4 + 4);
        if ( v11 > 0x41 )
        {
          v13 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v13 + 24) = *((int *)v4 + 4);
          *(_QWORD *)(v13 + 32) = 346LL;
          goto LABEL_44;
        }
        v14 = *((int *)v4 + 4);
        v15 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost;
      }
    }
    v17 = &v15[2 * v14];
    if ( *((_DWORD *)v3 + 22) >= *((_DWORD *)v17 + 3) )
    {
      v18 = (__int64 (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *))*v17;
      if ( *((_BYTE *)v17 + 8) )
        v19 = VmBusExecuteCommandInProcessContext(v3, v18);
      else
        v19 = ((__int64 (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *, __int64, __int64 *))v18)(v3, a2, v7);
LABEL_47:
      if ( v19 )
        goto LABEL_49;
      goto LABEL_48;
    }
    v13 = WdLogNewEntry5_WdError(v17, a2);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)v3 + 22);
    *(_QWORD *)(v13 + 32) = 373LL;
    goto LABEL_44;
  }
LABEL_45:
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 304202) )
  {
    v19 = 0;
    *(_BYTE *)(v5 + 57) = 1;
    goto LABEL_47;
  }
LABEL_48:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v3 + 9), 0LL, 0);
LABEL_49:
  if ( bTracingEnabled )
  {
    if ( v8 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v22) = v9;
        v21 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
LABEL_58:
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v21, v20, *((_QWORD *)v3 + 4), v6, v22);
      }
    }
    else if ( v8 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v22) = v10;
        v21 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        goto LABEL_58;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      LODWORD(v22) = v11;
      v21 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
      goto LABEL_58;
    }
  }
  ExFreePoolWithTag(v3, 0x4B677844u);
}
