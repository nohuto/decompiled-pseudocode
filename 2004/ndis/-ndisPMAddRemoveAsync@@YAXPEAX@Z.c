/*
 * XREFs of ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C0092AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016B9C (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 */

void __fastcall ndisPMAddRemoveAsync(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  struct _NDIS_FILTER_BLOCK *v2; // rbp
  __int64 v4; // rdi
  int v5; // ebp
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int128 v10; // [rsp+50h] [rbp-38h]
  __int128 v11; // [rsp+60h] [rbp-28h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  v2 = (struct _NDIS_FILTER_BLOCK *)P[5];
  v4 = P[6];
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x44u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v1,
      v4);
  DWORD2(v11) = ndisOidPMAddRemove(v1, v2, (struct _NDIS_OID_REQUEST *)v4);
  v5 = DWORD2(v11);
  *(_QWORD *)&v11 = v4;
  *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 88) & 0xF8FFFFF6 | 0x5000000;
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v9, v6, v7, v8);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0xEu);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x45u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v1,
      v4,
      v5,
      v9,
      v10);
}
