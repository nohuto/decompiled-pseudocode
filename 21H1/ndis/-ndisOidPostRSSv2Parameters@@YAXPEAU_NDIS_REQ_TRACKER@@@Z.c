/*
 * XREFs of ?ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00881B8 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0088334 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

void __fastcall ndisOidPostRSSv2Parameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rdi
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  __int64 v5; // [rsp+38h] [rbp-20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Du,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)v1,
      (char)v4,
      v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3, *((_DWORD *)a1 + 10));
    if ( v4 )
      ndisPostSetOpenRSSv2Parameters(v4, (struct _NDIS_OID_REQUEST *)v3, *((_DWORD *)a1 + 10));
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)v1,
      (char)v4,
      v5);
  }
}
