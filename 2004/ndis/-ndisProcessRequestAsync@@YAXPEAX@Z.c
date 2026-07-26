/*
 * XREFs of ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1C009E7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001BF14 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 */

void __fastcall ndisProcessRequestAsync(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  struct _NDIS_OID_REQUEST *v3; // rbx

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[7];
  v3 = (struct _NDIS_OID_REQUEST *)P[6];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Au,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      v3);
  if ( (unsigned int)ndisQueueOidRequest(v3, v1, 0LL, 0LL) != 259 )
  {
    ExFreePoolWithTag(v3, 0);
    LOBYTE(v3) = 0;
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0x4Au);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      (char)v3,
      0LL);
}
