/*
 * XREFs of ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C013A294
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EA30 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01387F4 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisDeQueueOpenOnProtocol(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  KIRQL v4; // al
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  KIRQL v6; // r8
  struct _NDIS_OPEN_BLOCK *ProtocolNextOpen; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x2Eu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  OpenQueue = a2->OpenQueue;
  v6 = v4;
  if ( a1 == OpenQueue )
  {
    a2->OpenQueue = a1->ProtocolNextOpen;
  }
  else if ( OpenQueue )
  {
    do
    {
      ProtocolNextOpen = OpenQueue->ProtocolNextOpen;
      if ( a1 == ProtocolNextOpen )
        break;
      OpenQueue = OpenQueue->ProtocolNextOpen;
    }
    while ( ProtocolNextOpen );
    if ( OpenQueue )
      OpenQueue->ProtocolNextOpen = OpenQueue->ProtocolNextOpen->_NDIS_COMMON_OPEN_BLOCK::ProtocolNextOpen;
  }
  KeReleaseSpinLock(&a2->Ref.SpinLock, v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x2Fu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      a2);
}
