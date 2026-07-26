/*
 * XREFs of ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019C3C
 * Callers:
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A1D0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

char __fastcall ndisIsDefaultPortStateOperational(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // di

  v2 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x2Cu,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      a1);
  if ( (a1->Flags & 0x10000) != 0
    && (a1->DefaultPortSendControlState != NdisPortControlStateControlled
     || ((a1->DefaultPortSendAuthorizationState - 1) & 0xFFFFFFFD) == 0)
    && (a1->DefaultPortRcvControlState != NdisPortControlStateControlled
     || ((a1->DefaultPortRcvAuthorizationState - 1) & 0xFFFFFFFD) == 0) )
  {
    v2 = 1;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x2Du,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      a1);
  return v2;
}
