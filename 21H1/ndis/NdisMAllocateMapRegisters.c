/*
 * XREFs of NdisMAllocateMapRegisters @ 0x1C01362D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005F0A4 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005FA88 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     NdisWriteErrorLogEntry @ 0x1C006BFB0 (NdisWriteErrorLogEntry.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateMapRegisters(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        NDIS_DMA_SIZE DmaSize,
        ULONG BaseMapRegistersNeeded,
        ULONG MaximumPhysicalMapping)
{
  __int64 v6; // r14
  char *v8; // rsi
  unsigned __int16 *v9; // rbx
  NDIS_STATUS v10; // edi
  char v11; // r12
  unsigned __int16 *PoolWithTag; // rax
  PVOID v13; // rax
  int v14; // eax
  ULONG v15; // r12d
  unsigned __int64 v16; // r15
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v18; // r14
  char v19; // r13
  _DMA_OPERATIONS *DmaOperations; // rcx
  char v21; // al
  unsigned __int16 v22; // r15
  KIRQL v23; // r13
  __int64 v24; // rcx
  void (__fastcall *v25)(_DMA_ADAPTER *, void *, unsigned int); // rdi
  __int64 v26; // r14
  void *v27; // rcx
  KIRQL v28; // r15
  char v30[8]; // [rsp+28h] [rbp-89h]
  __int64 v31; // [rsp+30h] [rbp-81h]
  char v32; // [rsp+41h] [rbp-70h]
  ULONG NumberOfMapRegisters; // [rsp+44h] [rbp-6Dh] BYREF
  int v34; // [rsp+48h] [rbp-69h]
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+50h] [rbp-61h]
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+58h] [rbp-59h]
  char *v37; // [rsp+60h] [rbp-51h]
  struct _KEVENT Event; // [rsp+68h] [rbp-49h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+80h] [rbp-31h] BYREF

  v37 = (char *)MiniportAdapterHandle;
  v6 = BaseMapRegistersNeeded;
  v8 = (char *)MiniportAdapterHandle;
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x29u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      (char)v8,
      v6);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)v8 + 922) & 1) != 0 )
    goto LABEL_4;
  if ( (*((_DWORD *)v8 + 30) & 8) == 0 )
  {
LABEL_61:
    v11 = 0;
    goto LABEL_53;
  }
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA0uLL);
    *(_DWORD *)v9 = 10486031;
    *((_QWORD *)v9 + 1) = v8;
    *((_QWORD *)v9 + 2) = *((_QWORD *)v8 + 3);
    v9[77] = v6;
    *((_DWORD *)v9 + 13) = MaximumPhysicalMapping;
    *((_QWORD *)v9 + 17) = 0LL;
    if ( (_DWORD)v6 )
    {
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v6, 0x726D444Eu);
      *((_QWORD *)v9 + 17) = v13;
      if ( !v13 )
      {
        NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, 0xFFFFFFFFLL);
        v10 = -1073741670;
        v11 = 1;
        goto LABEL_53;
      }
    }
    *((_QWORD *)v9 + 18) = &Event;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)v8 + 931);
    v14 = *((_DWORD *)v8 + 119);
    *(_WORD *)&DeviceDescription[4] = 257;
    *(_DWORD *)&DeviceDescription[16] = DmaChannel;
    *(_DWORD *)&DeviceDescription[20] = v14;
    if ( v14 == 1 )
    {
      *(_DWORD *)&DeviceDescription[28] = 0;
      *(_DWORD *)&DeviceDescription[24] = DmaChannel > 4;
    }
    else if ( v14 == 5 )
    {
      if ( DmaSize == 1 )
      {
        DeviceDescription[8] = 1;
      }
      else if ( DmaSize == 2 )
      {
        *((_DWORD *)v8 + 30) |= 0x10u;
        DeviceDescription[11] = 1;
      }
    }
    *(_DWORD *)&DeviceDescription[32] = MaximumPhysicalMapping;
    v15 = ((MaximumPhysicalMapping - 2) >> 12) + 2;
    v16 = v9[77] * (unsigned __int64)v15;
    if ( v16 > 0xFFFFFFFF )
    {
      NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, 4294967294LL);
    }
    else
    {
      DmaAdapter = IoGetDmaAdapter(
                     *((PDEVICE_OBJECT *)v8 + 479),
                     (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                     &NumberOfMapRegisters);
      v18 = DmaAdapter;
      if ( DmaAdapter && NumberOfMapRegisters >= v15 )
      {
        v19 = 0;
        *((_QWORD *)v9 + 3) = DmaAdapter;
        *((_QWORD *)v9 + 16) = 0LL;
        *((_QWORD *)v8 + 63) = v9;
        _InterlockedIncrement((volatile signed __int32 *)v9 + 18);
        DmaOperations = DmaAdapter->DmaOperations;
        v32 = 0;
        AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
        FreeMapRegisters = DmaOperations->FreeMapRegisters;
        if ( *(_DWORD *)&DeviceDescription[20] != 1 )
        {
          if ( HalPrivateDispatchTable[12](DmaAdapter, v15, v9[77], *((_QWORD *)v9 + 17)) < 0 )
          {
            if ( (unsigned int)v16 <= 0x40 )
            {
              v19 = 1;
            }
            else
            {
              ExFreePoolWithTag(*((PVOID *)v9 + 17), 0);
              *((_QWORD *)v9 + 17) = 0LL;
              ndisDereferenceDmaAdapter(v9);
              v32 = 1;
              NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, (unsigned int)v16);
            }
          }
          if ( *(_DWORD *)&DeviceDescription[20] != 1 && !v19 )
            goto LABEL_27;
        }
        v22 = 0;
        if ( v9[77] )
        {
          while ( 1 )
          {
            v9[76] = v22;
            v23 = KfRaiseIrql(2u);
            v34 = AllocateAdapterChannel(
                    v18,
                    *((_DEVICE_OBJECT **)v8 + 478),
                    v15,
                    (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
                    v9);
            v24 = (unsigned int)v34;
            if ( v34 < 0 )
              break;
            if ( v23 != 2 )
              KeLowerIrql(v23);
            ndisWaitForKernelObject(&Event);
            KeClearEvent(&Event);
            if ( ++v22 >= v9[77] )
              goto LABEL_27;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v30 = v34;
            WPP_RECORDER_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x2Bu,
              (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
              *(_QWORD *)v30);
            v24 = (unsigned int)v34;
          }
          if ( (byte_1C00E6081 & 1) != 0 )
            McTemplateK0qqq_EtwWriteTransfer(v24, &AllocateAdapterChannelFailed, (const GUID *)(v8 + 4008), v24, 2, 0);
          if ( v22 )
          {
            v25 = FreeMapRegisters;
            v26 = 16LL * v22 - 16;
            do
            {
              v25(*((_DMA_ADAPTER **)v9 + 3), *(void **)(v26 + *((_QWORD *)v9 + 17)), v15);
              v26 -= 16LL;
              --v22;
            }
            while ( v22 );
            v10 = 0;
            v8 = v37;
          }
          if ( v23 != 2 )
            KeLowerIrql(v23);
          NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, 0xFFFFFFFFLL);
          ExFreePoolWithTag(*((PVOID *)v9 + 17), 0);
          *((_QWORD *)v9 + 17) = 0LL;
          ndisDereferenceDmaAdapter(v9);
          v21 = 1;
        }
        else
        {
LABEL_27:
          v21 = v32;
        }
        if ( v21 )
        {
          v10 = -1073741670;
          v11 = 0;
          goto LABEL_53;
        }
        goto LABEL_61;
      }
      NdisWriteErrorLogEntry(v8, 0xC0001389, 1u, 0xFFFFFFFFLL);
      v27 = (void *)*((_QWORD *)v9 + 17);
      if ( v27 )
      {
        ExFreePoolWithTag(v27, 0);
        *((_QWORD *)v9 + 17) = 0LL;
      }
      v10 = -1073741670;
      if ( v18 )
      {
        v28 = KfRaiseIrql(2u);
        v18->DmaOperations->PutDmaAdapter(v18);
        if ( v28 != 2 )
          KeLowerIrql(v28);
      }
    }
    v11 = 1;
    goto LABEL_53;
  }
LABEL_4:
  v10 = -1073741670;
LABEL_53:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v10 && v11 && v9 )
    ExFreePoolWithTag(v9, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v31) = v10;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Cu,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      (char)v8,
      v31);
  }
  return v10;
}
