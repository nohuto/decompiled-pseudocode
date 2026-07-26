/*
 * XREFs of ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0137B08
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EA30 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01387F4 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AF30 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138F68 (-ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDeQueueOpenOnMiniport(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rdx
  struct _NDIS_OPEN_BLOCK *MiniportNextOpen; // rax
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x11u,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)a1,
      a2);
  OpenQueue = a2->OpenQueue;
  if ( OpenQueue == a1 )
  {
    a2->OpenQueue = a1->MiniportNextOpen;
LABEL_10:
    --a2->NumOpens;
    goto LABEL_11;
  }
  if ( OpenQueue )
  {
    do
    {
      MiniportNextOpen = OpenQueue->MiniportNextOpen;
      if ( MiniportNextOpen == a1 )
        break;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    while ( MiniportNextOpen );
    if ( OpenQueue )
    {
      OpenQueue->MiniportNextOpen = OpenQueue->MiniportNextOpen->_NDIS_COMMON_OPEN_BLOCK::MiniportNextOpen;
      goto LABEL_10;
    }
  }
LABEL_11:
  ndisUpdateCheckForLoopbackFlag(a2);
  ndisUnsetNdis6OpenHandlers(v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x12u,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)a1,
      a2);
}
