/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C0004990
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000317C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C003DE10 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C003F384 (-ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C0074924 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008F21C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008F3B4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE0A0 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AE11C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C6AD4 (PktMonClientNblDropNdis.c)
 *     PktMonClientNblLogNdis @ 0x1C00C6B28 (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  KIRQL v5; // r12
  unsigned int v6; // ebx
  ULONG v11; // esi
  __int64 v12; // rbx
  unsigned int v13; // ebx
  int v14; // esi
  unsigned int v15; // r9d
  LARGE_INTEGER *v16; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h]
  int v21; // [rsp+50h] [rbp-38h]
  union _LARGE_INTEGER v22; // [rsp+90h] [rbp+8h] BYREF

  v5 = 2;
  v6 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = -1;
  if ( *((_DWORD *)MiniportAdapterHandle + 12) || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    LODWORD(v20) = *((_DWORD *)MiniportAdapterHandle + 12);
    HIDWORD(v20) = *((_DWORD *)MiniportAdapterHandle + 20);
    v19 = *((_QWORD *)MiniportAdapterHandle + 5);
    if ( !v19 )
      v19 = *((_QWORD *)MiniportAdapterHandle + 5);
  }
  v11 = ReceiveFlags;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
    ndisNblVerifyRxIndication(
      (ULONG_PTR)NetBufferList,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle,
      *((enum _NDIS_MEDIUM *)MiniportAdapterHandle + 459));
  if ( (v20 & 0x400000000LL) != 0 )
  {
    if ( (v11 & 1) == 0 )
      v5 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v19, 2u);
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 670) & 1) != 0 )
  {
    v16 = (LARGE_INTEGER *)NetBufferList;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( NetBufferList )
    {
      do
      {
        v16[44] = PerformanceCounter;
        v16 = (LARGE_INTEGER *)v16->QuadPart;
      }
      while ( v16 );
    }
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 2664) )
  {
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, NumberOfNetBufferLists);
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      v15 = 129;
      if ( (v11 & 2) == 0 )
        v15 = 128;
      if ( (v11 & 1) != 0 )
        v6 = 1;
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList,
        *((_QWORD *)MiniportAdapterHandle + 510),
        *((_QWORD *)MiniportAdapterHandle + 313),
        v15,
        v6);
    }
    if ( byte_1C00E3FD8 )
    {
      v18 = *((_QWORD *)MiniportAdapterHandle + 736);
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 52) & 1) != 0 )
          PktMonClientNblLogNdis((char *)MiniportAdapterHandle + 5864, NetBufferList, *(_QWORD *)&PortNumber, 1LL);
      }
    }
    v12 = MEMORY[0xFFFFF78000000320];
    ndisInvokeNextReceiveHandler(
      NetBufferList,
      PortNumber,
      NumberOfNetBufferLists,
      v11,
      *((struct _NDIS_OBJECT_HEADER **)MiniportAdapterHandle + 314),
      *((void **)MiniportAdapterHandle + 312),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))MiniportAdapterHandle
      + 328));
    v22.QuadPart = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v12) / 10000;
    v13 = v11 & 1;
    if ( (v11 & 1) != 0 || KeGetCurrentIrql() == 2 )
      ndisPeriodicReceivesLearning((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, NumberOfNetBufferLists, &v22);
    v14 = v11 & 2;
    if ( v14 && *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList,
        *((_QWORD *)MiniportAdapterHandle + 313),
        *((_QWORD *)MiniportAdapterHandle + 510),
        0x8Eu,
        v13);
    if ( (Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E3FD8) && v14 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferList);
  }
  else
  {
    if ( byte_1C00E3FD8 && (*((_DWORD *)MiniportAdapterHandle + 1465) & 2) != 0 )
      PktMonClientNblDropNdis(
        (_DWORD)MiniportAdapterHandle + 5808,
        (_DWORD)NetBufferList,
        PortNumber,
        1,
        -1071448033,
        -536866808);
    if ( (v11 & 2) == 0 )
    {
      if ( (v11 & 1) != 0 )
        v6 = 1;
      (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))MiniportAdapterHandle + 307))(
        *((_QWORD *)MiniportAdapterHandle + 293),
        NetBufferList,
        v6);
    }
  }
  if ( (v20 & 0x400000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v19, 2u, 0xFuLL);
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
}
