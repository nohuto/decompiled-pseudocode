/*
 * XREFs of NdisMRegisterDmaChannel @ 0x1C0136E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005FA88 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDmaChannel(
        PNDIS_HANDLE MiniportDmaHandle,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        BOOLEAN Dma32BitAddresses,
        PNDIS_DMA_DESCRIPTION DmaDescription,
        ULONG MaximumLength)
{
  NDIS_STATUS v9; // ebx
  int v10; // r15d
  PVOID PoolWithTag; // rax
  void *v12; // rsi
  char v13; // al
  bool v14; // zf
  int v15; // ecx
  ULONG DmaPort; // eax
  _DEVICE_OBJECT *v17; // rcx
  ULONG v18; // r12d
  struct _DMA_ADAPTER *DmaAdapter; // r15
  char *v20; // rax
  _QWORD *v21; // r14
  struct _KEVENT *v22; // r13
  int v23; // r12d
  __int64 v24; // rcx
  _QWORD *v25; // rax
  KIRQL v26; // r14
  char v28[8]; // [rsp+28h] [rbp-71h]
  char v29[4]; // [rsp+30h] [rbp-69h]
  KIRQL NewIrql; // [rsp+40h] [rbp-59h]
  ULONG NumberOfMapRegisters; // [rsp+44h] [rbp-55h] BYREF
  PNDIS_HANDLE v32; // [rsp+48h] [rbp-51h]
  _BYTE DeviceDescription[64]; // [rsp+50h] [rbp-49h] BYREF

  v32 = MiniportDmaHandle;
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v9 = 0;
  NumberOfMapRegisters = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x24u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      MiniportAdapterHandle);
  v10 = *((_DWORD *)MiniportAdapterHandle + 930);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA0uLL);
    *(_DWORD *)v12 = 10486031;
    *((_QWORD *)v12 + 1) = MiniportAdapterHandle;
    *((_QWORD *)v12 + 2) = *((_QWORD *)MiniportAdapterHandle + 3);
    v13 = DeviceDescription[4];
    v14 = (*((_DWORD *)MiniportAdapterHandle + 30) & 8) == 0;
    v15 = *((_DWORD *)MiniportAdapterHandle + 30) & 8;
    *(_DWORD *)&DeviceDescription[16] = DmaChannel;
    if ( !v14 )
      v13 = 1;
    DeviceDescription[8] = Dma32BitAddresses;
    DeviceDescription[4] = v13;
    DeviceDescription[6] = DmaDescription->DemandMode;
    DeviceDescription[5] = v15 != 0;
    DeviceDescription[7] = DmaDescription->AutoInitialize;
    *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)MiniportAdapterHandle + 931);
    *(_DWORD *)&DeviceDescription[24] = DmaDescription->DmaWidth;
    *(_DWORD *)&DeviceDescription[28] = DmaDescription->DmaSpeed;
    DmaPort = DmaDescription->DmaPort;
    *(_DWORD *)&DeviceDescription[32] = MaximumLength;
    v17 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 479);
    *(_DWORD *)&DeviceDescription[36] = DmaPort;
    v18 = ((MaximumLength - 2) >> 12) + 2;
    *(_DWORD *)&DeviceDescription[20] = v10;
    DmaAdapter = IoGetDmaAdapter(v17, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
    if ( DmaAdapter )
    {
      if ( NumberOfMapRegisters >= v18 )
      {
        v20 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6264444Eu);
        v21 = v20;
        if ( v20 )
        {
          v22 = (struct _KEVENT *)(v20 + 8);
          KeInitializeEvent((PRKEVENT)(v20 + 8), NotificationEvent, 0);
          v21[5] = MiniportAdapterHandle;
          v21[4] = DmaAdapter;
          ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
          NewIrql = KfRaiseIrql(2u);
          v23 = DmaAdapter->DmaOperations->AllocateAdapterChannel(
                  DmaAdapter,
                  *((_DEVICE_OBJECT **)MiniportAdapterHandle + 478),
                  v18,
                  (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisDmaExecutionRoutine,
                  v21);
          if ( NewIrql != 2 )
            KeLowerIrql(NewIrql);
          ndisDereferencePackage((PVOID *)&ndisPkgs);
          if ( v23 >= 0 )
          {
            ndisWaitForKernelObject(v22);
            KeClearEvent(v22);
            v25 = v32;
            *((_BYTE *)v21 + 48) = 0;
            *v25 = v21;
            *((_QWORD *)v12 + 3) = DmaAdapter;
            _InterlockedAdd((volatile signed __int32 *)v12 + 18, 1u);
            *((_QWORD *)MiniportAdapterHandle + 63) = v12;
            goto LABEL_22;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v28 = v23;
            WPP_RECORDER_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x25u,
              (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
              *(_QWORD *)v28);
          }
          ExFreePoolWithTag(v21, 0);
          if ( (byte_1C00E6081 & 1) != 0 )
            McTemplateK0qqq_EtwWriteTransfer(
              v24,
              &AllocateAdapterChannelFailed,
              (const GUID *)((char *)MiniportAdapterHandle + 4008),
              v23,
              1,
              0);
        }
      }
    }
    if ( DmaAdapter )
    {
      v26 = KfRaiseIrql(2u);
      DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
      if ( v26 != 2 )
        KeLowerIrql(v26);
    }
    *((_QWORD *)MiniportAdapterHandle + 63) = 0LL;
    ExFreePoolWithTag(v12, 0);
  }
  v9 = -1073741670;
LABEL_22:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v29 = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      (char)MiniportAdapterHandle,
      *(_DWORD *)v29);
  }
  return v9;
}
