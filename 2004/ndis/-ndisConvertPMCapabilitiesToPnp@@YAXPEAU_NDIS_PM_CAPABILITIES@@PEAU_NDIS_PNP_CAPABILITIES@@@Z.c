/*
 * XREFs of ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C010A684
 * Callers:
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0038794 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertPMCapabilitiesToPnp(struct _NDIS_PM_CAPABILITIES *a1, struct _NDIS_PNP_CAPABILITIES *a2)
{
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  unsigned int v3; // eax
  unsigned int SupportedWoLPacketPatterns; // r8d

  *a2 = 0LL;
  a2->WakeUpCapabilities.MinMagicPacketWakeUp = a1->MinMagicPacketWakeUp;
  a2->WakeUpCapabilities.MinPatternWakeUp = a1->MinPatternWakeUp;
  MinLinkChangeWakeUp = a1->MinLinkChangeWakeUp;
  a2->Flags = 0;
  a2->WakeUpCapabilities.MinLinkChangeWakeUp = MinLinkChangeWakeUp;
  v3 = 0;
  SupportedWoLPacketPatterns = a1->SupportedWoLPacketPatterns;
  if ( (SupportedWoLPacketPatterns & 2) != 0 )
  {
    v3 = 4;
    a2->Flags = 4;
    SupportedWoLPacketPatterns = a1->SupportedWoLPacketPatterns;
  }
  if ( (SupportedWoLPacketPatterns & 1) != 0 )
  {
    v3 |= 2u;
    a2->Flags = v3;
  }
  if ( v3 )
    a2->Flags = v3 | 1;
}
