/*
 * XREFs of ndisIfRegisterInterfaceEx @ 0x1C002B46C
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C00B1760 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C0105778 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013C7C (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00187E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Llq @ 0x1C002B948 (WPP_RECORDER_SF_Llq.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C002B9F0 (NdisConvertNtStatusToNdisStatus.c)
 *     ?AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z @ 0x1C002BA20 (-AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z.c)
 *     ndisIfTryAllocatingSuggestedIndex @ 0x1C002BAA8 (ndisIfTryAllocatingSuggestedIndex.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002BB3C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     NdisAllocateRefCount @ 0x1C002BC20 (NdisAllocateRefCount.c)
 *     WPP_RECORDER_SF_qllq @ 0x1C002BCE0 (WPP_RECORDER_SF_qllq.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FD80C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0105EBC (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        _QWORD *a1,
        _LIST_ENTRY *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int64 v7; // r12
  __int64 v9; // r14
  _LIST_ENTRY *v11; // rbx
  _DWORD *v12; // rdi
  unsigned __int16 v13; // bp
  _DWORD *PoolWithTag; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  _OWORD *v18; // rsi
  __int128 v19; // xmm1
  KIRQL v20; // al
  struct _GUID *v21; // r8
  KIRQL v22; // bp
  __int64 v23; // rcx
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v25; // rsi
  _LIST_ENTRY *i; // r14
  unsigned int v27; // r15d
  IfIndexRange *v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // ebx
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rdx
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rax
  KIRQL v40; // bl
  __int128 v42; // xmm0
  unsigned __int16 v43; // ax
  __int64 v44; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v46; // [rsp+50h] [rbp-48h]
  unsigned int v48; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v49; // [rsp+B8h] [rbp+20h] BYREF

  v7 = (unsigned __int64)a2 >> 48;
  v9 = ((unsigned __int64)a2 >> 24) & 0xFFFFFF;
  v48 = 0;
  v49 = ((unsigned __int64)a2 >> 24) & 0xFFFFFF;
  v11 = a2;
  v46 = 0LL;
  v12 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qllq(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, a4);
  if ( !a4 )
  {
    v30 = -1073741811;
LABEL_59:
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(a4 + 1) != 1 )
  {
    v30 = -1073741637;
    goto LABEL_37;
  }
  if ( *(_WORD *)(a4 + 2) < 0x60u )
  {
    v30 = -1073741811;
    goto LABEL_37;
  }
  v13 = 512;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5D8uLL, 0x6669444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v30 = -1073741670;
    goto LABEL_37;
  }
  memset(PoolWithTag + 1, 0, 0x5D4uLL);
  *v12 = 98042131;
  if ( (unsigned int)(v9 - 32512) > 0x4100 && (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v49, 0, 0) )
  {
    v30 = -1073741811;
    goto LABEL_59;
  }
  *((_QWORD *)v12 + 164) = v11;
  LOBYTE(a2) = 2;
  LOBYTE(v15) = 17;
  v12[334] = *(_DWORD *)(a4 + 4);
  v12[140] = *(_DWORD *)(a4 + 4);
  v12[335] = *(_DWORD *)(a4 + 20);
  v12[336] = *(_DWORD *)(a4 + 24);
  v12[354] = *(_DWORD *)(a4 + 84);
  v12[350] = a5;
  v12[326] = 1;
  *((_QWORD *)v12 + 179) = NdisAllocateRefCount(v15, a2);
  if ( *(_WORD *)(a4 + 48) <= 0x200u )
    v13 = *(_WORD *)(a4 + 48);
  *((_WORD *)v12 + 4) = v13;
  if ( v13 )
    memmove((char *)v12 + 10, (const void *)(a4 + *(unsigned __int16 *)(a4 + 50)), v13);
  *((_WORD *)v12 + 262) = HIWORD(v11);
  v12[132] = *(_DWORD *)(a4 + 28);
  v12[133] = *(_DWORD *)(a4 + 32);
  v12[134] = *(_DWORD *)(a4 + 36);
  *((_BYTE *)v12 + 556) = *(_BYTE *)(a4 + 40);
  *(_OWORD *)(v12 + 135) = *(_OWORD *)(a4 + 52);
  v12[141] = *(_DWORD *)(a4 + 88);
  v12[142] = *(_DWORD *)(a4 + 92);
  if ( a1 == qword_1C00E6000 || a1 == qword_1C00E5FF8 )
  {
    v16 = 5LL;
    v17 = v12 + 144;
    v18 = (_OWORD *)(a4 + 96);
    do
    {
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v17 += 8;
      v19 = v18[7];
      v18 += 8;
      *(v17 - 1) = v19;
      --v16;
    }
    while ( v16 );
    *v17 = *v18;
    *((_BYTE *)v12 + 1393) = 1;
    *((_QWORD *)v12 + 165) = v12;
    if ( a3 )
    {
      v46 = a3;
      *((_QWORD *)v12 + 176) = a3;
      *((_BYTE *)v12 + 1394) = 1;
    }
  }
  else
  {
    v42 = *(_OWORD *)(a4 + 68);
    *((_QWORD *)v12 + 165) = a3;
    *(_OWORD *)(v12 + 145) = v42;
    v43 = *(_WORD *)(a4 + 42);
    if ( v43 > 0x20u )
    {
      v30 = -1073741811;
      goto LABEL_59;
    }
    *((_WORD *)v12 + 562) = v43;
    *((_WORD *)v12 + 579) = *(_WORD *)(a4 + 42);
    if ( *(_WORD *)(a4 + 42) )
    {
      memmove((char *)v12 + 1126, (const void *)(a4 + *(unsigned __int16 *)(a4 + 44)), *(unsigned __int16 *)(a4 + 42));
      v44 = *(unsigned __int16 *)(a4 + 46);
      if ( (_WORD)v44 )
        memmove(v12 + 290, (const void *)(a4 + v44), *(unsigned __int16 *)(a4 + 42));
    }
  }
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v21 = (struct _GUID *)(v12 + 145);
  v22 = v20;
  v23 = *(_QWORD *)(v12 + 145) - *(_QWORD *)&ndisDefaultNetworkGuid.Data1;
  if ( !v23 )
    v23 = *(_QWORD *)(v12 + 147) - *(_QWORD *)ndisDefaultNetworkGuid.Data4;
  if ( !v23 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    if ( !CompartmentBlock )
      goto LABEL_52;
    *v21 = *(struct _GUID *)(*((_QWORD *)CompartmentBlock + 7) + 32LL);
  }
  NetworkBlock = ndisIfFindNetworkBlock(v21);
  v25 = NetworkBlock;
  if ( !NetworkBlock || (*((_DWORD *)NetworkBlock + 18) & 3) != 0 )
  {
LABEL_52:
    v30 = -1073741811;
LABEL_54:
    KeReleaseSpinLock(&ndisIfListLock, v22);
    goto LABEL_59;
  }
  for ( i = ndisIfList.Flink; i != &ndisIfList && i[5].Flink <= v11; i = i->Flink )
  {
    if ( i[5].Flink == v11 )
    {
      v30 = -1073741270;
      goto LABEL_54;
    }
  }
  v27 = a6;
  if ( !(unsigned __int8)ndisIfTryAllocatingSuggestedIndex(a6) )
  {
    v29 = IfIndexRange::AllocateAnyBit(v28, &v48);
    v30 = NdisConvertNtStatusToNdisStatus(v29);
    if ( v30 )
      goto LABEL_54;
    v27 = v48;
  }
  v12[1] = v27;
  v31 = (_LIST_ENTRY *)(v12 + 308);
  Blink = i->Blink;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    goto LABEL_56;
  *((_QWORD *)v12 + 155) = Blink;
  v31->Flink = Flink;
  Flink->Blink = v31;
  Blink->Flink = v31;
  v34 = a1 + 3;
  *((_QWORD *)v12 + 166) = a1;
  v35 = v12 + 312;
  v36 = a1[3];
  if ( *(_QWORD **)(v36 + 8) != a1 + 3
    || (*((_QWORD *)v12 + 157) = v34,
        *v35 = v36,
        *(_QWORD *)(v36 + 8) = v35,
        *v34 = v35,
        v37 = (_QWORD *)((char *)v25 + 56),
        v38 = *((_QWORD *)v25 + 7),
        v39 = v12 + 316,
        *(struct _NDIS_IF_NETWORK_BLOCK **)(v38 + 8) != (struct _NDIS_IF_NETWORK_BLOCK *)((char *)v25 + 56)) )
  {
LABEL_56:
    __fastfail(3u);
  }
  *v39 = v38;
  ++ndisInterfaceCount;
  *((_QWORD *)v12 + 159) = v37;
  *(_QWORD *)(v38 + 8) = v39;
  *v37 = v39;
  v12[144] = *(_DWORD *)(*((_QWORD *)v25 + 6) + 16LL);
  *((_QWORD *)v12 + 171) = v25;
  *((_QWORD *)v12 + 172) = *((_QWORD *)v25 + 6);
  ++*((_DWORD *)v25 + 19);
  if ( v46 )
  {
    *(_QWORD *)(v46 + 696) = v12;
    *(_DWORD *)(v46 + 688) = v27;
  }
  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v12 + 179), 0);
  ++v12[326];
  KeReleaseSpinLock(&ndisIfListLock, v22);
  ndisNsiNotifyClientInterfaceChange(v12, 1LL, 0LL);
  v40 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v12, 0);
  KeReleaseSpinLock(&ndisIfListLock, v40);
  v30 = 0;
  *a7 = v27;
LABEL_37:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Llq(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, a4);
  return v30;
}
