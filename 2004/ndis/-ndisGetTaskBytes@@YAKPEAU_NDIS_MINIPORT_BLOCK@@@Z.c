/*
 * XREFs of ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A660
 * Callers:
 *     ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E368 (-ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ndisGetTaskBytes(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rbx
  char v2; // di
  int v3; // ecx
  unsigned int Encapsulation; // eax
  unsigned int v5; // ebx

  Offload = a1->Offload;
  v2 = (char)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB4u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      a1);
  v3 = Offload->TopCapabilities.LsoV1.IPv4.Encapsulation != 0 ? 64 : 28;
  if ( Offload->TopCapabilities.Checksum.IPv4Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv4Transmit.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Receive.Encapsulation
    || Offload->TopCapabilities.Checksum.IPv6Transmit.Encapsulation )
  {
    v3 = Offload->TopCapabilities.LsoV1.IPv4.Encapsulation != 0 ? 100 : 64;
  }
  Encapsulation = Offload->TopCapabilities.IPsecV1.Supported.Encapsulation;
  v5 = v3 + 44;
  if ( !Encapsulation )
    v5 = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB5u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v2,
      v5);
  return v5;
}
