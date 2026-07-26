/*
 * XREFs of ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B4530
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00098F0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F140 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00189B4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C002F204 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ndisIfFindNextRcvAddress @ 0x1C0127764 (ndisIfFindNextRcvAddress.c)
 *     ndisIfFindRcvAddress @ 0x1C01277F4 (ndisIfFindRcvAddress.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x1C0127874 (ndisNsiGetIfRcvAddressRodInformation.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddress(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  _LIST_ENTRY *InterfaceByNetLuid; // rsi
  int IfRcvAddressRodInformation; // edi
  union _NET_LUID_LH *v4; // rax
  union _NET_LUID_LH v5; // rbx
  union _NET_LUID_LH *v6; // r15
  KIRQL v7; // al
  int v8; // ecx
  KIRQL v9; // r14
  int v10; // ecx
  _LIST_ENTRY *v11; // rax
  struct _NDIS_MINIPORT_BLOCK *v12; // rax
  __int64 Flink; // rdx
  int v14; // ebx
  __int64 NextRcvAddress; // rax
  __int64 v16; // rax
  KIRQL v17; // bl

  InterfaceByNetLuid = 0LL;
  IfRcvAddressRodInformation = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_8f0f9622f1783245f7c6c1685f8f81bf_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 40 || !*((_QWORD *)a1 + 5) )
  {
    IfRcvAddressRodInformation = -1073741808;
    goto LABEL_42;
  }
  v4 = (union _NET_LUID_LH *)*((_QWORD *)a1 + 2);
  v5.Value = v4->Value;
  v6 = v4 + 1;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *((_DWORD *)a1 + 14);
  v9 = v7;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_19;
      }
    }
    else if ( v5.Value == -1LL )
    {
      do
      {
        v11 = ndisIfList.Flink - 77;
        if ( ndisIfList.Flink == &ndisIfList )
          v11 = InterfaceByNetLuid;
        InterfaceByNetLuid = v11;
      }
      while ( !v11 || !v11[80].Flink );
      goto LABEL_17;
    }
  }
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v5);
LABEL_17:
  if ( InterfaceByNetLuid )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[89].Blink, 8u);
    ++LODWORD(InterfaceByNetLuid[81].Blink);
    **((_QWORD **)a1 + 2) = InterfaceByNetLuid[82].Flink;
  }
LABEL_19:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( IfRcvAddressRodInformation < 0 )
    goto LABEL_40;
  if ( !InterfaceByNetLuid )
  {
    IfRcvAddressRodInformation = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_42;
  }
  v12 = ndisIfReferenceMiniport((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, 4u);
  if ( !v12 )
  {
    IfRcvAddressRodInformation = 0;
    goto LABEL_40;
  }
  if ( v12->EthDB )
  {
    v14 = *((_DWORD *)a1 + 14);
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        Flink = (__int64)InterfaceByNetLuid[80].Flink;
        goto LABEL_34;
      }
      if ( v14 != 2 )
      {
        IfRcvAddressRodInformation = -1073741808;
        goto LABEL_39;
      }
      NextRcvAddress = ndisIfFindNextRcvAddress(InterfaceByNetLuid, v6);
    }
    else
    {
      NextRcvAddress = ndisIfFindRcvAddress(InterfaceByNetLuid, v6);
    }
    Flink = NextRcvAddress;
LABEL_34:
    if ( Flink )
    {
      v16 = *((_QWORD *)a1 + 2);
      IfRcvAddressRodInformation = -1073741811;
      *(_OWORD *)(v16 + 8) = *(_OWORD *)(Flink + 8);
      *(_OWORD *)(v16 + 24) = *(_OWORD *)(Flink + 24);
      if ( *((_QWORD *)a1 + 1) == 3LL && *((_DWORD *)a1 + 8) == 1 )
        IfRcvAddressRodInformation = ndisNsiGetIfRcvAddressRodInformation((char)InterfaceByNetLuid, Flink, (char)a1);
    }
    else
    {
      IfRcvAddressRodInformation = v14 != 0 ? -2147483622 : -1073741772;
    }
    goto LABEL_39;
  }
  IfRcvAddressRodInformation = 0;
LABEL_39:
  ndisIfDereferenceMiniport((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, (struct _NDIS_MINIPORT_BLOCK *)Flink, 4u);
LABEL_40:
  if ( InterfaceByNetLuid )
  {
    v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, 8u);
    KeReleaseSpinLock(&ndisIfListLock, v17);
  }
LABEL_42:
  KeLeaveCriticalRegion();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_8f0f9622f1783245f7c6c1685f8f81bf_Traceguids,
      (char)a1,
      IfRcvAddressRodInformation);
  return (unsigned int)IfRcvAddressRodInformation;
}
