/*
 * XREFs of ndisMiniportDeviceReadyNotification @ 0x1C00FB4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ndisFindMiniportByPdo @ 0x1C0017E40 (ndisFindMiniportByPdo.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003EAA0 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C00FB674 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C00FD424 (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisMiniportDeviceReadyNotification(_QWORD *NotificationStructure, PVOID Context)
{
  _UNICODE_STRING *v3; // rax
  PVOID v4; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportByPdo; // rax
  struct _NDIS_MINIPORT_BLOCK *v6; // rbx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  if ( *(_QWORD *)((char *)NotificationStructure + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
    && *(_QWORD *)((char *)NotificationStructure + 12) == *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 )
  {
    CopyPartialStringToBuffer<64>(NotificationStructure, NotificationStructure[5]);
    v3 = (_UNICODE_STRING *)NotificationStructure[5];
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = v3;
    ObjectAttributes.Length = 48;
    IoStatusBlock = 0LL;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 1u) >= 0 )
    {
      Object = 0LL;
      if ( ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
      {
        v4 = Object;
        MiniportByPdo = ndisFindMiniportByPdo(*((_DEVICE_OBJECT **)Object + 1));
        v6 = MiniportByPdo;
        if ( MiniportByPdo )
        {
          if ( (MiniportByPdo->Flags & 0x80u) == 0 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                1u,
                0xAu,
                (struct _GUID *)&WPP_1d2f501033ad3f3cde38d2a103fcd59f_Traceguids,
                MiniportByPdo);
            ndisMSetMiniportReadyForBinding(v6, 1, Reason_MiniportDeviceNotStarted, RunAsynchronous);
            ndisNotifyWmiAdapterArrival(v6);
          }
          else
          {
            MiniportByPdo->DriverHandle->CxBlock->Chars.EvtCxDeviceStartComplete(MiniportByPdo->MiniportAdapterContext);
          }
        }
        ObfDereferenceObject(v4);
      }
      ZwClose(FileHandle);
    }
  }
  return 0LL;
}
