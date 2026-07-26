/*
 * XREFs of ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00371C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B650 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003735C (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0037660 (-ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037D34 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0037D64 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0088B28 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009E644 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009E9A0 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreRSSParameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  __int64 v3; // rbx
  char v4; // di
  struct _NDIS_OPEN_BLOCK *v5; // rbp
  int v6; // eax
  int *v7; // r14
  _BYTE v9[12]; // [rsp+50h] [rbp-38h] BYREF
  int v10; // [rsp+5Ch] [rbp-2Ch]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x89u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      (char)v5,
      v3);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_9;
    v7 = (int *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = ndisQueryMiniportRSSParameters(v1, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 4);
  }
  else
  {
    v7 = (int *)((char *)a1 + 40);
  }
  if ( v6 )
    goto LABEL_6;
  if ( v5 )
  {
    *v7 = ndisQueryOpenRSSParameters(v5, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
    goto LABEL_9;
  }
  if ( v1 )
  {
    *v7 = ndisQueryMiniportRSSParameters(v1, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 4);
LABEL_6:
    if ( v6 == 1 )
    {
      if ( !v5
        || !ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v3)
        || (v4 = ndisSetOpenRSSParameters(v5, (struct _NDIS_OID_REQUEST *)v3, v7), v4 != 1) )
      {
        if ( v1 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 4LL) & 4) == 0 )
          {
            NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v9, v1);
            if ( (v10 & 0x800) != 0 )
              *(_QWORD *)(v3 + 144) = __rdtsc();
            else
              *(_QWORD *)(v3 + 144) = 0LL;
          }
          v4 = ndisSetMiniportRSSParameters(v1, (struct _NDIS_OID_REQUEST *)v3, v7);
          if ( v4 != 1 && (v1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 )
            v4 = ndisSetMiniportRSSv1ParametersForMiniportV2(v1, (struct _NDIS_OID_REQUEST *)v3, v7);
        }
      }
    }
  }
LABEL_9:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Au,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      (char)v5,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
