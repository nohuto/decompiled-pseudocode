/*
 * XREFs of ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0088B20
 * Callers:
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0088720 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0088CBC (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 */

__int64 __fastcall ndisQueryMiniportRSSv2Parameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int RSSv2ParametersHelper; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      a2);
  RSSv2ParametersHelper = ndisQueryRSSv2ParametersHelper(a1, a2, 0);
  v5 = RSSv2ParametersHelper;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = RSSv2ParametersHelper;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      v7);
  }
  return v5;
}
