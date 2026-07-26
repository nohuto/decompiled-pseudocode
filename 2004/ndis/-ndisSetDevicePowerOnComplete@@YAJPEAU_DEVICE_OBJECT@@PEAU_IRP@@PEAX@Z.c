/*
 * XREFs of ?ndisSetDevicePowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0014140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017940 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001982C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  int Status; // eax
  char v7[4]; // [rsp+30h] [rbp-18h]

  if ( (*((_DWORD *)a3 + 30) & 0x80u) != 0 )
    Status = 0;
  else
    Status = a2->IoStatus.Status;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x53u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)a3,
      *(_DWORD *)v7);
  }
  ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)a3, NdisMEventD0_Complete);
  ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)a3, MPREF_PM_DEVPOWERUP);
  *((_QWORD *)a3 + 675) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5368), (WORK_QUEUE_TYPE)40);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x54u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a3);
  return 3221225494LL;
}
