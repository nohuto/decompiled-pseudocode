/*
 * XREFs of ?ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z @ 0x1C0082608
 * Callers:
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0081944 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisRollbackPortActivation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PORT *a2,
        struct _NDIS_PORT *a3)
{
  struct _NDIS_PORT *i; // rdx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x26u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      (char)a1,
      a2);
  for ( i = a2; i; i = i->Next )
  {
    if ( i == a3 )
      break;
    *((_DWORD *)i->NdisReserved + 4) = *((_DWORD *)i->NdisReserved + 5);
    --a1->NumberOfActivePorts;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x27u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      (char)a1,
      a2);
}
