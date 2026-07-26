/*
 * XREFs of ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C0090130
 * Callers:
 *     ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00906B0 (-ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008FA28 (-ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C0090810 (-ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(_LIST_ENTRY *a1, struct _NDIS_PM_WAKE_PACKET *a2)
{
  if ( ndisAcOnLine
    && a1[278].Blink
    && !LODWORD(a1[29].Flink)
    && HIDWORD(a1[356].Flink) == 1
    && a1[342].Blink
    && !LODWORD(a1[356].Flink) )
  {
    if ( ndisMValidatePMWakePacketForMagicPacket((struct _NDIS_MINIPORT_BLOCK *)a1, a2) )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
