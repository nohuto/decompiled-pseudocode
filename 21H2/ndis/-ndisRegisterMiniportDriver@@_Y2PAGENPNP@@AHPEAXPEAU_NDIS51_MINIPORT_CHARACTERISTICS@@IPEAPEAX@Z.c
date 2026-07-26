/*
 * XREFs of ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0135AE4
 * Callers:
 *     NdisIMRegisterLayeredMiniport @ 0x1C00608B0 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1C0061AF0 (NdisMRegisterMiniport.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C002EA00 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C0036FF0 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105E48 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 */

__int64 __fastcall ndisRegisterMiniportDriver(
        char *a1,
        struct _NDIS51_MINIPORT_CHARACTERISTICS *a2,
        unsigned int a3,
        void **a4)
{
  unsigned int v4; // edi
  unsigned __int8 MinorNdisVersion; // dl
  __int64 v10; // r15
  unsigned __int8 MajorNdisVersion; // al
  size_t v12; // rsi
  unsigned int v13; // ecx
  struct _NDIS_M_DRIVER_BLOCK *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  KIRQL v18; // bl
  PVOID v19; // rcx
  PVOID DriverObjectExtension; // [rsp+30h] [rbp-10h] BYREF
  ULONG VerifierFlags; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  DriverObjectExtension = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      a1);
  if ( !a1 )
  {
    v4 = -1073741823;
    goto LABEL_39;
  }
  MinorNdisVersion = a2->Ndis50Chars.MinorNdisVersion;
  v10 = 112LL;
  if ( MinorNdisVersion )
  {
    if ( MinorNdisVersion == 1 )
    {
      MajorNdisVersion = a2->Ndis50Chars.MajorNdisVersion;
      if ( a2->Ndis50Chars.MajorNdisVersion == 5 )
      {
        v12 = 240LL;
        goto LABEL_15;
      }
    }
    goto LABEL_38;
  }
  MajorNdisVersion = a2->Ndis50Chars.MajorNdisVersion;
  if ( a2->Ndis50Chars.MajorNdisVersion != 3 )
  {
    if ( MajorNdisVersion == 4 )
    {
      v12 = 136LL;
LABEL_15:
      v13 = v12;
      goto LABEL_16;
    }
    if ( MajorNdisVersion == 5 )
    {
      v12 = 184LL;
      goto LABEL_15;
    }
LABEL_38:
    v4 = -1073676284;
    goto LABEL_39;
  }
  v12 = 112LL;
  v13 = 112;
LABEL_16:
  if ( a3 < v13
    || MajorNdisVersion == 5
    && (a2->Ndis50Chars.CoSendPacketsHandler && !a2->Ndis50Chars.CoRequestHandler
     || MinorNdisVersion && !a2->AdapterShutdownHandler) )
  {
    v4 = -1073676283;
  }
  else if ( IoAllocateDriverObjectExtension(*(PDRIVER_OBJECT *)a1, (PVOID)0x4E4D4944, 0x4A8u, &DriverObjectExtension) >= 0 )
  {
    memset(DriverObjectExtension, 0, 0x4A8uLL);
    *((_BYTE *)DriverObjectExtension + 24) = a2->Ndis50Chars.MajorNdisVersion;
    *((_BYTE *)DriverObjectExtension + 25) = a2->Ndis50Chars.MinorNdisVersion;
    memmove((char *)DriverObjectExtension + 112, a2, v12);
    if ( a2->Ndis50Chars.MajorNdisVersion == 5 )
    {
      *((_QWORD *)DriverObjectExtension + 63) = a2->Ndis50Chars.CoCreateVcHandler;
      *((_QWORD *)DriverObjectExtension + 64) = a2->Ndis50Chars.CoDeleteVcHandler;
      *((_QWORD *)DriverObjectExtension + 65) = a2->Ndis50Chars.CoActivateVcHandler;
      *((_QWORD *)DriverObjectExtension + 66) = a2->Ndis50Chars.CoDeactivateVcHandler;
      *((_QWORD *)DriverObjectExtension + 68) = a2->Ndis50Chars.CoRequestHandler;
    }
    if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)a1)
      && ((VerifierFlags = 0, MmIsVerifierEnabled(&VerifierFlags) < 0) || (VerifierFlags & 0x400000) == 0)
      && (*((_WORD *)DriverObjectExtension + 13) |= 2u, (ndisFlags & 0x400) != 0) )
    {
      v14 = 0LL;
      v15 = DriverObjectExtension;
      if ( !ndisDriverTrackAlloc )
        v14 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
      ndisDriverTrackAlloc = v14;
    }
    else
    {
      v15 = DriverObjectExtension;
    }
    v15[2] = 0LL;
    v16 = 28LL;
    do
    {
      *(_QWORD *)(v10 + *(_QWORD *)a1) = ndisDummyIrpHandler;
      v10 += 8LL;
      --v16;
    }
    while ( v16 );
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 8LL) = ndisWdmPnPAddDevice;
    *(_QWORD *)(*(_QWORD *)a1 + 104LL) = ndisMUnload;
    *(_QWORD *)(*(_QWORD *)a1 + 112LL) = ndisCreateIrpHandler;
    *(_QWORD *)(*(_QWORD *)a1 + 224LL) = ndisDeviceControlIrpHandler;
    *(_QWORD *)(*(_QWORD *)a1 + 232LL) = ndisDeviceInternalIrpDispatch;
    *(_QWORD *)(*(_QWORD *)a1 + 128LL) = ndisCloseIrpHandler;
    *(_QWORD *)(*(_QWORD *)a1 + 328LL) = ndisPnPDispatch;
    *(_QWORD *)(*(_QWORD *)a1 + 288LL) = ndisPowerDispatch;
    *(_QWORD *)(*(_QWORD *)a1 + 296LL) = ndisWMIIrpDispatch;
    KeInitializeEvent((PRKEVENT)((char *)DriverObjectExtension + 368), NotificationEvent, 0);
    *((_QWORD *)DriverObjectExtension + 4) = a1;
    *((_QWORD *)DriverObjectExtension + 5) = *(_QWORD *)a1;
    v17 = (char *)DriverObjectExtension + 80;
    *((_QWORD *)DriverObjectExtension + 11) = (char *)DriverObjectExtension + 80;
    *v17 = v17;
    ndisInitializeRef((struct _REFERENCE_EX *)((char *)DriverObjectExtension + 392), 0xCu);
    *(_BYTE *)DriverObjectExtension = 2;
    *((_WORD *)DriverObjectExtension + 1) = 1192;
    *((_BYTE *)DriverObjectExtension + 1) = 1;
    ndisGetServiceNameFromRegPath(
      (struct _UNICODE_STRING *)(a1 + 8),
      (struct _UNICODE_STRING *)((char *)DriverObjectExtension + 488));
    ndisQueryDriverImageName(
      (struct _UNICODE_STRING *)((char *)DriverObjectExtension + 488),
      (struct _UNICODE_STRING *)DriverObjectExtension + 55);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    v18 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v19 = ndisDriverObject;
    *((_QWORD *)DriverObjectExtension + 1) = ndisMiniDriverList;
    ndisMiniDriverList = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
    ObfReferenceObject(v19);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v18);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    *a4 = DriverObjectExtension;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_39:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      DriverObjectExtension);
  return v4;
}
