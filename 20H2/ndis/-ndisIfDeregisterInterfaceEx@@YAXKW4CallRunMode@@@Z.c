/*
 * XREFs of ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00B17F4
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B2014 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     NdisIfDeregisterInterface @ 0x1C01268B0 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0009800 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F050 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00187A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C002577C (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C005F5B0 (-NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C00FB674 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FD80C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C011EE88 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(int a1, enum CallRunMode a2)
{
  struct _LIST_ENTRY *Interface; // rax
  KIRQL v5; // r10
  struct _NDIS_IF_BLOCK *v6; // rdi
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  struct _NDIS_MINIPORT_BLOCK *v9; // rax
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  KIRQL v12; // bl
  __int64 v13; // [rsp+28h] [rbp-40h]
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_74ec276d98723cbe160982132dfec1f3_Traceguids,
      a1);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Interface = ndisIfFindInterface(a1);
  v6 = (struct _NDIS_IF_BLOCK *)Interface;
  if ( LOBYTE(Interface[87].Flink) )
    v6 = 0LL;
  else
    LOBYTE(Interface[87].Flink) = 1;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( !v6 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v7 = 15;
    v8 = 3;
    goto LABEL_17;
  }
  v9 = ndisIfReferenceMiniport(v6, 0x14u);
  v10 = v9;
  if ( v9 )
  {
    ndisMSetMiniportReadyForBinding(v9, 0, Reason_MiniportInterfaceDeregister, RunSynchronous);
    NdisMRemoveMiniportInternal(v10, NdisMEventErr_UninstalledByUsermode);
    ndisIfDereferenceMiniport(v6, v11, 0x14u);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL);
  if ( a2 == RunSynchronous )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v6, 0xFFu);
  KeReleaseSpinLock(&ndisIfListLock, v12);
  if ( a2 == RunSynchronous )
    ndisWaitForKernelObject(&Event);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = 16;
    v8 = 4;
LABEL_17:
    LODWORD(v13) = a1;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      v7,
      (struct _GUID *)&WPP_74ec276d98723cbe160982132dfec1f3_Traceguids,
      v13);
  }
}
