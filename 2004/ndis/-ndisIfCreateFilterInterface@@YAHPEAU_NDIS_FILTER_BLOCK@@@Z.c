/*
 * XREFs of ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C002DEF8
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C01056E8 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0105E2C (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x1C0106218 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x1C0106364 (ndisIfSetFilterIfInfoInRegistry.c)
 */

__int64 __fastcall ndisIfCreateFilterInterface(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  int v2; // edi
  __int64 ifType; // r14
  unsigned int v5; // ebx
  KIRQL v6; // al
  struct _NDIS_IF_NETWORK_BLOCK *Network; // rbx
  struct _NDIS_FILTER_BLOCK *v9; // [rsp+30h] [rbp-48h]
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF
  union _NET_LUID_LH v11; // [rsp+88h] [rbp+10h] BYREF

  Miniport = a1->Miniport;
  v2 = 0;
  v10 = 0;
  v11.Value = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_26c79ab3a5fb310107e5718cdb1d7c6d_Traceguids,
      a1);
  ifType = Miniport->IfBlock->ifType;
  v5 = ndisIfAllocateAndVerifyNetLuidIndex(Miniport->IfBlock->ifType, &v10, 1u, 0);
  if ( !v5 )
  {
    if ( RtlIsStateSeparationEnabled() )
    {
      if ( ExUuidCreate(&a1->InterfaceGuid) >= 0 )
        goto LABEL_8;
    }
    else
    {
      if ( !(unsigned int)ndisIfGetFilterIfInfoFromRegistry((char)a1, (unsigned __int8)a1 - 96) )
      {
LABEL_8:
        v11.Value = ((ifType << 24) | v10 & 0xFFFFFF) << 24;
        v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        Network = Miniport->IfBlock->Network;
        KeReleaseSpinLock(&ndisIfListLock, v6);
        if ( (int)ndisIfCreateInterface(Network, 0, 0LL, &v11, 0LL, 0LL, a1, NdisIfBlockSourceAutomaticLwFilter) < 0 )
          v2 = -1073741823;
        v5 = v2;
        goto LABEL_11;
      }
      if ( ExUuidCreate(&a1->InterfaceGuid) >= 0 )
      {
        ndisIfSetFilterIfInfoInRegistry((char)a1);
        goto LABEL_8;
      }
    }
    v5 = -1073741823;
  }
LABEL_11:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v5;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_26c79ab3a5fb310107e5718cdb1d7c6d_Traceguids,
      (char)a1,
      v9);
  }
  return v5;
}
