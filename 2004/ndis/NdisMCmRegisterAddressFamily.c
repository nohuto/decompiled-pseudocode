/*
 * XREFs of NdisMCmRegisterAddressFamily @ 0x1C013B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D30 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMCmRegisterAddressFamily(
        NDIS_HANDLE MiniportAdapterHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
        UINT SizeOfCmCharacteristics)
{
  NDIS_STATUS v8; // ebx
  __int64 **i; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // r8
  void (__fastcall *CmRequestCompleteHandler)(int, void *, void *, void *, _NDIS_REQUEST *); // rax
  KIRQL v14; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  v8 = -1073676286;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) != 0
    && CmCharacteristics->MajorVersion >= 5u
    && SizeOfCmCharacteristics >= 0x88 )
  {
    for ( i = (__int64 **)*((_QWORD *)MiniportAdapterHandle + 64); i; i = (__int64 **)*i )
    {
      v10 = (unsigned __int64)i[2] - *(_QWORD *)&AddressFamily->AddressFamily;
      if ( !v10 )
        v10 = *((unsigned int *)i + 6) - (unsigned __int64)AddressFamily->MinorVersion;
      if ( !v10 )
      {
        v8 = -1073741823;
        goto LABEL_17;
      }
    }
    if ( ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6F63444Eu);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2] = *(_QWORD *)&AddressFamily->AddressFamily;
        *((_DWORD *)PoolWithTag + 6) = AddressFamily->MinorVersion;
        *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)&CmCharacteristics->MajorVersion;
        *((_OWORD *)PoolWithTag + 3) = *(_OWORD *)&CmCharacteristics->CmDeleteVcHandler;
        *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)&CmCharacteristics->CmCloseAfHandler;
        *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)&CmCharacteristics->CmDeregisterSapHandler;
        *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)&CmCharacteristics->CmCloseCallHandler;
        *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)&CmCharacteristics->CmAddPartyHandler;
        *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)&CmCharacteristics->CmActivateVcCompleteHandler;
        *((_OWORD *)PoolWithTag + 9) = *(_OWORD *)&CmCharacteristics->CmModifyCallQoSHandler;
        CmRequestCompleteHandler = CmCharacteristics->CmRequestCompleteHandler;
        v12[1] = 0LL;
        v12[20] = CmRequestCompleteHandler;
        *v12 = *((_QWORD *)MiniportAdapterHandle + 64);
        *((_DWORD *)v12 + 78) = 5;
        *((_QWORD *)MiniportAdapterHandle + 64) = v12;
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu);
        v8 = 0;
      }
      else
      {
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu);
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741823;
  }
LABEL_17:
  v14 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v14);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  return v8;
}
