/*
 * XREFs of ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x1C0066000
 * Callers:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00219C8 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C0066640 (NdisIMCancelInitializeDeviceInstance.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C00190F0 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     WPP_RECORDER_SF_qZq @ 0x1C0066B90 (WPP_RECORDER_SF_qZq.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FDE9C (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C010443C (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01050E4 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

char __fastcall ndisIMCheckDeviceInstance(struct _NDIS_M_DRIVER_BLOCK *a1, struct _UNICODE_STRING *a2, void **a3)
{
  char v6; // r12
  _NDIS_PENDING_IM_INSTANCE **p_PendingDeviceList; // r15
  _NDIS_PENDING_IM_INSTANCE *i; // rbx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rbx
  unsigned __int8 MajorNdisVersion; // al
  unsigned int v14; // eax
  int v16; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+40h] [rbp-C0h] BYREF
  struct _KEVENT v18; // [rsp+58h] [rbp-A8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v19; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[20]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      1u,
      0x33u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      &a2->Length);
  ndisWaitForKernelObject(&a1->IMStartRemoveMutex);
  p_PendingDeviceList = &a1->PendingDeviceList;
  a1->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
  for ( i = a1->PendingDeviceList; i; i = i->Next )
  {
    if ( RtlEqualUnicodeString(&i->Name, a2, 1u) )
    {
      if ( a3 )
        *a3 = i->Context;
      *p_PendingDeviceList = i->Next;
      ExFreePoolWithTag(i, 0);
      v6 = 1;
      break;
    }
    p_PendingDeviceList = &i->Next;
  }
  a1->IMStartRemoveMutexOwnerThread = 0LL;
  KeReleaseMutex(&a1->IMStartRemoveMutex, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZq(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, v11, v16, (char)a1, (__int64)a2, (char)a3);
  if ( !v6 )
  {
    if ( a3 )
    {
      AssociatedProtocol = a1->AssociatedProtocol;
      if ( AssociatedProtocol )
      {
        MajorNdisVersion = AssociatedProtocol->MajorNdisVersion;
        if ( MajorNdisVersion >= 6u )
          goto LABEL_22;
        if ( AssociatedProtocol->PnPEventHandler )
        {
          memset(v20, 0, 0x98uLL);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          LODWORD(v20[0]) = 4;
          v20[3] = &Event;
          WAIT_FOR_PROTO_MUTEX(AssociatedProtocol);
          if ( AssociatedProtocol->PnPEventHandler(0LL, (_NET_PNP_EVENT *)v20) == 259 )
            ndisWaitForKernelObject(&Event);
          RELEASE_PROT_MUTEX(AssociatedProtocol);
          MajorNdisVersion = AssociatedProtocol->MajorNdisVersion;
        }
        if ( MajorNdisVersion >= 6u )
        {
LABEL_22:
          memset(&v19, 0, sizeof(v19));
          ndisInitializeNetPnPEvent(&v19, &v18);
          v14 = a2->Length + 16;
          v19.NetPnPEvent.NetEvent = NetEventIMReEnableDevice;
          v19.NetPnPEvent.BufferLength = v14;
          v19.NetPnPEvent.Buffer = a2;
          WAIT_FOR_PROTO_MUTEX(AssociatedProtocol);
          ndisDeliverNetPnPEventSynchronously(AssociatedProtocol, 0LL, &v19);
          RELEASE_PROT_MUTEX(AssociatedProtocol);
        }
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1u,
      0x35u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      &a2->Length);
  return v6;
}
