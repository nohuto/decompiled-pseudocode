/*
 * XREFs of NdisMRegisterInterruptEx @ 0x1C0131E20
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     GetMsgDpc @ 0x1C0009024 (GetMsgDpc.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00675E8 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     NdisMDeregisterInterruptEx @ 0x1C0137840 (NdisMDeregisterInterruptEx.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterruptEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportInterruptContext,
        PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS MiniportInterruptCharacteristics,
        PNDIS_HANDLE NdisInterruptHandle)
{
  __int64 v4; // rdi
  NDIS_STATUS v9; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // r13
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  PVOID v15; // rax
  KIRQL v16; // dl
  ULONG v17; // ebx
  unsigned __int64 v18; // r13
  bool v19; // zf
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // r13
  unsigned int i; // ebx
  struct _KDPC *MsgDpc; // rax
  struct _KDPC *v27; // rax
  struct _KDPC *v28; // rax
  struct _KDPC *v29; // rax
  struct _KDPC *v30; // rax
  unsigned int v31; // r12d
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // r12
  NTSTATUS v36; // eax
  __int64 v37; // rbx
  unsigned int v38; // r13d
  _OWORD *PoolWithTag; // rax
  _OWORD *v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int128 v43; // xmm1
  __int64 *j; // rcx
  __int64 v46; // rax
  KIRQL v47; // dl
  __int64 v48; // rcx
  __int64 v49; // [rsp+30h] [rbp-69h]
  _PROCESSOR_NUMBER v50; // [rsp+50h] [rbp-49h] BYREF
  __int64 v51; // [rsp+58h] [rbp-41h]
  unsigned __int64 v52; // [rsp+60h] [rbp-39h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+70h] [rbp-29h] BYREF
  KIRQL NewIrql; // [rsp+100h] [rbp+67h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+110h] [rbp+77h] BYREF
  PNDIS_HANDLE v56; // [rsp+118h] [rbp+7Fh]

  v56 = NdisInterruptHandle;
  v4 = 0LL;
  NewIrql = 0;
  v9 = 0;
  memset(&Parameters, 0, sizeof(Parameters));
  v10 = *((unsigned int *)MiniportAdapterHandle + 853);
  v11 = (unsigned __int64)ndisMaxNumberOfProcessors << 6;
  v12 = (v10 * (ndisMaxNumberOfProcessors + 1)) << 6;
  v51 = v12;
  if ( !(_DWORD)v10 )
    LODWORD(v10) = 1;
  v13 = 80 * ndisMaxNumberOfProcessors * (unsigned __int64)(unsigned int)v10;
  v52 = v13;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_9a5444f4cbe933672d71b12f0399237b_Traceguids,
      MiniportAdapterHandle);
    v12 = v51;
    v13 = v52;
  }
  *NdisInterruptHandle = 0LL;
  MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
  MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 2) != 0
    || (v14 = v13 + v12,
        v15 = ExAllocatePoolWithTag(NonPagedPoolNx, v13 + v12 + v11 + 232, 0x6D61444Eu),
        (v4 = (__int64)v15) == 0) )
  {
    v9 = -1073741670;
  }
  else
  {
    memset(v15, 0, v14 + v11 + 232);
    *(_QWORD *)(v4 + 8) = MiniportInterruptContext;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
    v16 = NewIrql;
    v17 = 0;
    *(_QWORD *)(v4 + 160) = *((_QWORD *)MiniportAdapterHandle + 98);
    *((_QWORD *)MiniportAdapterHandle + 98) = v4;
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v16);
    _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 476, 1u);
    *(_DWORD *)v4 = 15204614;
    *(_DWORD *)(v4 + 104) = 0;
    *(_BYTE *)(v4 + 4) = 0;
    *(_QWORD *)(v4 + 96) = MiniportAdapterHandle;
    *(_QWORD *)(v4 + 16) = MiniportInterruptCharacteristics->InterruptHandler;
    *(_QWORD *)(v4 + 24) = MiniportInterruptCharacteristics->InterruptDpcHandler;
    *(_WORD *)(v4 + 152) = 257;
    if ( MiniportInterruptCharacteristics->MessageInterruptHandler )
    {
      *(_BYTE *)(v4 + 192) = 1;
      *(_QWORD *)(v4 + 176) = MiniportInterruptCharacteristics->MessageInterruptHandler;
      *(_QWORD *)(v4 + 184) = MiniportInterruptCharacteristics->MessageInterruptDpcHandler;
    }
    KeInitializeEvent((PRKEVENT)(v4 + 128), SynchronizationEvent, 0);
    KeInitializeDpc((PRKDPC)(v4 + 32), (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v4);
    KeSetImportanceDpc((PRKDPC)(v4 + 32), MediumImportance);
    v18 = v11 + 232;
    v19 = ndisMaxNumberOfProcessors == 0;
    *(_QWORD *)(v4 + 112) = v4 + 232;
    if ( !v19 )
    {
      do
      {
        v20 = *(_QWORD *)(v4 + 112);
        ProcNumber = 0;
        v21 = (unsigned __int64)v17 << 6;
        KeInitializeDpc((PRKDPC)(v21 + v20), (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v4);
        KeSetImportanceDpc((PRKDPC)(v21 + *(_QWORD *)(v4 + 112)), MediumHighImportance);
        if ( KeGetProcessorNumberFromIndex(v17, &ProcNumber) >= 0 )
          KeSetTargetProcessorDpcEx((PKDPC)(v21 + *(_QWORD *)(v4 + 112)), &ProcNumber);
        ++v17;
      }
      while ( v17 < ndisMaxNumberOfProcessors );
    }
    v22 = v4 + v18;
    v23 = 0;
    v24 = v51 + v18;
    for ( *(_QWORD *)(v4 + 224) = v22; v23 < *((_DWORD *)MiniportAdapterHandle + 853); ++v23 )
    {
      for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
      {
        v50 = 0;
        MsgDpc = (struct _KDPC *)GetMsgDpc(v4, v23, i);
        KeInitializeDpc(MsgDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v4);
        v27 = (struct _KDPC *)GetMsgDpc(v4, v23, i);
        KeSetImportanceDpc(v27, MediumHighImportance);
        if ( KeGetProcessorNumberFromIndex(i, &v50) >= 0 )
        {
          v28 = (struct _KDPC *)GetMsgDpc(v4, v23, i);
          KeSetTargetProcessorDpcEx(v28, &v50);
        }
      }
      v29 = (struct _KDPC *)GetMsgDpc(v4, v23, i);
      KeInitializeDpc(v29, (PKDEFERRED_ROUTINE)ndisInterruptDpc, (PVOID)v4);
      v30 = (struct _KDPC *)GetMsgDpc(v4, v23, i);
      KeSetImportanceDpc(v30, MediumHighImportance);
    }
    *(_QWORD *)(v4 + 216) = v4 + v24;
    v31 = 0;
    v32 = v52 / 0x50;
    if ( v52 / 0x50 )
    {
      v33 = 0LL;
      do
      {
        v34 = (_QWORD *)(80 * v33 + *(_QWORD *)(v4 + 216));
        v34[2] = ndisQueuedMiniportDpcWorkItem;
        v34[3] = v34;
        *v34 = 0LL;
        KeInitializeSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v4 + 216) + 80 * v33 + 72));
        v33 = ++v31;
      }
      while ( v31 < v32 );
    }
    *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
    v35 = v4 + 120;
    v19 = *(_BYTE *)(v4 + 192) == 0;
    Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 479);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v4 + 120);
    Parameters.FullySpecified.ServiceContext = (PVOID)v4;
    if ( v19 )
    {
      Parameters.Version = 2;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      Parameters.FullySpecified.SpinLock = 0LL;
    }
    else
    {
      Parameters.Version = 3;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportMessageIsr;
      Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      if ( MiniportInterruptCharacteristics->MsiSyncWithAllMessages )
      {
        KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 200));
        Parameters.FullySpecified.SpinLock = (PKSPIN_LOCK)(v4 + 200);
      }
    }
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    v36 = IoConnectInterruptEx(&Parameters);
    if ( v36 < 0 )
    {
      v9 = -1073741823;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xBu,
          (struct _GUID *)&WPP_9a5444f4cbe933672d71b12f0399237b_Traceguids,
          (char)MiniportAdapterHandle,
          v36);
      *(_QWORD *)v35 = 0LL;
    }
    else
    {
      if ( Parameters.Version != 3 )
      {
LABEL_34:
        if ( Parameters.Version == 2 )
        {
          MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
          MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
          *(_DWORD *)(v4 + 168) = 0;
        }
        *v56 = (PVOID)v4;
        goto LABEL_37;
      }
      v37 = *(_QWORD *)v35;
      v38 = *(_DWORD *)(*(_QWORD *)v35 + 4LL);
      *(_BYTE *)(v4 + 193) = 1;
      *(_DWORD *)(v4 + 168) = 1;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 48 * (v38 - 1) + 56, 0x6D61444Eu);
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        PoolWithTag[2] = 0LL;
        *((_QWORD *)PoolWithTag + 6) = 0LL;
        *PoolWithTag = *(_OWORD *)v37;
        PoolWithTag[1] = *(_OWORD *)(v37 + 16);
        PoolWithTag[2] = *(_OWORD *)(v37 + 32);
        *((_QWORD *)PoolWithTag + 6) = *(_QWORD *)(v37 + 48);
        if ( v38 )
        {
          v40 = (_OWORD *)((char *)PoolWithTag + 8);
          v41 = v37 - (_QWORD)PoolWithTag;
          v42 = v38;
          do
          {
            *v40 = *(_OWORD *)((char *)v40 + v41);
            v43 = *(_OWORD *)((char *)v40 + v41 + 16);
            v40 += 3;
            *(v40 - 2) = v43;
            *(v40 - 1) = *(_OWORD *)((char *)v40 + v41 - 16);
            --v42;
          }
          while ( v42 );
        }
        MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_MESSAGE_BASED;
        MiniportInterruptCharacteristics->MessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)PoolWithTag;
        *(_QWORD *)(v4 + 208) = PoolWithTag;
        *(_DWORD *)(v4 + 168) = 1;
        if ( v38 > 1 )
        {
          *((_BYTE *)MiniportAdapterHandle + 1992) = 1;
          if ( *((_WORD *)MiniportAdapterHandle + 1347) )
          {
            *((_DWORD *)MiniportAdapterHandle + 674) |= 0x8000000u;
            *((_DWORD *)MiniportAdapterHandle + 777) |= 0x8000000u;
          }
        }
        goto LABEL_34;
      }
      v9 = -1073741670;
      NdisMDeregisterInterruptEx((NDIS_HANDLE)v4);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  for ( j = (__int64 *)((char *)MiniportAdapterHandle + 784); ; j = (__int64 *)(v46 + 160) )
  {
    v46 = *j;
    if ( !*j )
      break;
    if ( v46 == v4 )
    {
      *j = *(_QWORD *)(v4 + 160);
      break;
    }
  }
  v47 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v47);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( (byte_1C00E6181 & 1) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      v48,
      &RegisterInterruptFailed,
      (const GUID *)((char *)MiniportAdapterHandle + 4008),
      (__int64)MiniportAdapterHandle + 4008,
      *((_DWORD *)MiniportAdapterHandle + 1014),
      *((_QWORD *)MiniportAdapterHandle + 503),
      v9,
      3,
      0);
LABEL_37:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v49) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_9a5444f4cbe933672d71b12f0399237b_Traceguids,
      (char)MiniportAdapterHandle,
      v49);
  }
  return v9;
}
