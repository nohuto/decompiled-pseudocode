/*
 * XREFs of ?ndisOidPreOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00383C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 *     ?ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z @ 0x1C00384E4 (-ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreOffloadHwCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  unsigned int v6; // r8d
  char v7[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC1u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_12;
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v1 + 4096) )
  {
LABEL_12:
    *((_DWORD *)a1 + 10) = -1073741637;
    v4 = 1;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 48);
    if ( v6 < 0x70 )
    {
      *(_DWORD *)(v3 + 56) = 112;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      ndisCopyNdisOffload(
        *(struct _NDIS_OFFLOAD **)(v3 + 40),
        (struct _NDIS_OFFLOAD *)(*(_QWORD *)(v1 + 4096) + 656LL),
        v6,
        (unsigned int *)(v3 + 52),
        1);
      *((_DWORD *)a1 + 10) = 0;
    }
  }
LABEL_6:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC2u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v7);
  }
  return v4;
}
