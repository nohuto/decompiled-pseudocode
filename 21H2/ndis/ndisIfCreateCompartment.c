/*
 * XREFs of ndisIfCreateCompartment @ 0x1C00B2688
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B3190 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013D6C (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002C0DC (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0034858 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C0034B50 (ndisIfCreateCompartmentBlock.c)
 *     ndisCmGetThreadState @ 0x1C0035F5C (ndisCmGetThreadState.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C00B2EA4 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C0105748 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C0108A58 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C01279E8 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartment(__int64 a1, struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // r14
  int Network; // esi
  char v6; // r15
  __int128 *v7; // rbp
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  KIRQL v9; // r11
  struct _NDIS_IF_COMPARTMENT_BLOCK *v10; // rdi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v11; // rbx
  int v12; // eax
  bool v13; // cf
  struct _NDIS_IF_COMPARTMENT_BLOCK *v14; // rdi
  struct _NDIS_NSI_COMPARTMENT_RW *v15; // r15
  __int128 v16; // xmm0
  KIRQL v17; // al
  KIRQL v18; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  KIRQL v20; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rsi
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  KIRQL v26; // bl
  unsigned int v28; // [rsp+80h] [rbp+8h] BYREF
  int v29; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v30; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  Network = 0;
  v6 = 0;
  v7 = (__int128 *)(v2 + 1080);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids);
  *a2 = 0LL;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v30 = CompartmentBlockByGuid;
  v10 = CompartmentBlockByGuid;
  v11 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    v12 = *((_DWORD *)CompartmentBlockByGuid + 10);
    if ( (v12 & 1) != 0 )
    {
      v10 = 0LL;
      v30 = 0LL;
      v11 = 0LL;
    }
    else if ( (v12 & 2) != 0 )
    {
      *((_DWORD *)v10 + 10) = v12 & 0xFFFFFFFD;
      _InterlockedIncrement((volatile signed __int32 *)v10 + 11);
      v10 = v30;
      v6 = 1;
    }
    else if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      Network = -1073741270;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( Network >= 0 )
  {
    if ( v11 )
    {
LABEL_23:
      v22 = 4LL;
      v23 = (_OWORD *)((char *)v10 + 1160);
      v24 = (_OWORD *)(v2 + 1096);
      do
      {
        *v23 = *v24;
        v23[1] = v24[1];
        v23[2] = v24[2];
        v23[3] = v24[3];
        v23[4] = v24[4];
        v23[5] = v24[5];
        v23[6] = v24[6];
        v23 += 8;
        v25 = v24[7];
        v24 += 8;
        *(v23 - 1) = v25;
        --v22;
      }
      while ( v22 );
      *(_DWORD *)v23 = *(_DWORD *)v24;
      memmove(*(void **)(a1 + 32), (char *)v10 + 64, 0x668uLL);
      **(_DWORD **)(a1 + 16) = *((_DWORD *)v10 + 4);
      if ( v6 )
      {
        ndisNsiNotifyClientCompartmentChange(v10, 1LL);
        v26 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        COMPARTMENTBLOCK_DECREMENT_REF(v10);
        KeReleaseSpinLock(&ndisIfListLock, v26);
      }
      goto LABEL_27;
    }
    Network = ndisIfCreateCompartmentBlock(0, (_OWORD *)(v2 + 1080), 0LL, &v30);
    if ( Network >= 0 )
    {
      v13 = *(_BYTE *)(v2 + 1) < 2u;
      v14 = v30;
      *a2 = v30;
      if ( !v13 )
        *((_DWORD *)v14 + 420) = *(_DWORD *)(v2 + 1616);
      v15 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v14 + 64);
      *((_DWORD *)v14 + 16) = *(_DWORD *)v2;
      v16 = *v7;
      *(_OWORD *)((char *)v14 + 1144) = *v7;
      *((_DWORD *)v14 + 419) = *(_DWORD *)(v2 + 1612);
      if ( (*((_DWORD *)v14 + 420) & 4) != 0 )
      {
        *(_OWORD *)((char *)v14 + 1684) = v16;
      }
      else
      {
        v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        v28 = 0;
        v18 = v17;
        ndisCmGetThreadState(KeGetCurrentThread(), &v28, &v29);
        CompartmentBlock = ndisIfFindCompartmentBlock(v28);
        v14 = v30;
        *(_OWORD *)((char *)v30 + 1684) = *(_OWORD *)((char *)CompartmentBlock + 1144);
        KeReleaseSpinLock(&ndisIfListLock, v18);
      }
      Network = ndisIfCreateNetwork((struct _GUID *)v14 + 5, *((_DWORD *)v14 + 4));
      if ( Network >= 0 )
      {
        v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v14 + 5);
        KeReleaseSpinLock(&ndisIfListLock, v20);
        if ( !NetworkBlock )
        {
          Network = -1073741772;
          goto LABEL_27;
        }
        *((_QWORD *)v14 + 7) = NetworkBlock;
        Network = ndisIfCreateInterface(NetworkBlock, 1u, v15, 0LL, 0LL, 0LL, 0LL, NdisIfBlockSourceAutomaticLoopback);
        if ( Network >= 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v14 + 11);
          v10 = v30;
          v6 = 1;
          goto LABEL_23;
        }
      }
    }
  }
LABEL_27:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      Network,
      *a2);
  return (unsigned int)Network;
}
