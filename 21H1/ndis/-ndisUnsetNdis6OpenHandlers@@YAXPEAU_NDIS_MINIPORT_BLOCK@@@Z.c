/*
 * XREFs of ?ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01390F8
 * Callers:
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0137C98 (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisUnsetNdis6OpenHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rdi
  bool v2; // si
  bool v3; // bp
  unsigned __int8 MajorNdisVersion; // r8
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  unsigned int Flags; // eax
  void (__fastcall *Ndis5PacketIndicateHandler)(void *, _NDIS_PACKET **, unsigned int); // rdx
  void (__fastcall *ReturnPacketHandler)(void *, _NDIS_PACKET *); // rcx

  OpenQueue = a1->OpenQueue;
  v2 = 0;
  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x93u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
  MajorNdisVersion = a1->MajorNdisVersion;
  if ( !OpenQueue )
    goto LABEL_19;
  do
  {
    ProtocolHandle = OpenQueue->ProtocolHandle;
    if ( !v2 )
      v2 = ProtocolHandle->MajorNdisVersion >= 6u;
    if ( !v3 )
      v3 = ProtocolHandle->MajorNdisVersion < 6u;
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  while ( OpenQueue );
  if ( !v2 )
  {
LABEL_19:
    if ( !a1->HighestFilter )
    {
      a1->Ndis6ProtocolsBound = 0;
      Flags = a1->Flags;
      Ndis5PacketIndicateHandler = a1->Ndis5PacketIndicateHandler;
      a1->SavedPacketIndicateHandler = Ndis5PacketIndicateHandler;
      if ( (Flags & 0x20000000) != 0 )
        a1->PacketIndicateHandler = Ndis5PacketIndicateHandler;
      if ( MajorNdisVersion < 6u )
      {
        ReturnPacketHandler = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
        a1->SynchronousReturnPacketContext = a1->MiniportAdapterContext;
        a1->SynchronousReturnPacketHandler = ReturnPacketHandler;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x94u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
}
