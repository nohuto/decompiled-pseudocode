/*
 * XREFs of ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C0100B98
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C010308C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 * Callees:
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C010158C (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0122D8C (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 */

char __fastcall ndisBindReadProtocolDriverConfiguration(struct NDIS_BIND_PROTOCOL_DRIVER *a1, char a2)
{
  if ( ndisBindReadProtocolDriverFromV3Registry(a1) || ndisBindReadProtocolDriverFromV2Registry(a1) )
    return 1;
  if ( a2 )
  {
    a1->ProtocolBindFlags |= 2u;
    return 1;
  }
  return 0;
}
