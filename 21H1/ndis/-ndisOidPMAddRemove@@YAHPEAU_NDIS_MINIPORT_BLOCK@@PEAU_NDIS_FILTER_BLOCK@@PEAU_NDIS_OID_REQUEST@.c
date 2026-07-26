/*
 * XREFs of ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016BDC
 * Callers:
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     NdisFOidRequest @ 0x1C000C370 (NdisFOidRequest.c)
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C220 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C00925F0 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016CFC (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EF0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0017030 (WPP_RECORDER_SF_qqqd.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008F21C (-ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_O.c)
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090928 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00921C0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 */

__int64 __fastcall ndisOidPMAddRemove(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // rsi
  NDIS_OID Oid; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  unsigned int v11; // eax
  int v12; // edx

  v4 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Eu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( !KeGetCurrentIrql() )
  {
    Oid = a3->DATA.QUERY_INFORMATION.Oid;
    if ( Oid == -50265846 )
    {
      v7 = ndisPMAddWOLPattern(a1, v4, a3);
      v8 = v7;
      if ( !v7 )
        goto LABEL_9;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v9 = 64;
LABEL_8:
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          14,
          v9,
          (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
          v7);
        goto LABEL_9;
      }
      return v8;
    }
    if ( Oid != -50265845 )
    {
      if ( Oid == -50265843 )
      {
        v7 = ndisPMAddProtocolOffload(a1, v4, a3);
        v8 = v7;
        if ( v7 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v9 = 65;
            goto LABEL_8;
          }
          return v8;
        }
LABEL_9:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqqd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)a2,
            11,
            67,
            (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
            (char)a1,
            (char)v4,
            (char)a3,
            v8);
        return v8;
      }
      if ( Oid != -50265841 )
      {
        v8 = -1073741823;
        goto LABEL_9;
      }
    }
    v7 = ndisOidPMRemove(a1, v4, a3);
    v8 = v7;
    if ( v7 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v9 = 66;
        goto LABEL_8;
      }
      return v8;
    }
    goto LABEL_9;
  }
  v11 = ndisCreatePMAddRemoveWorkItem(a1, v4, a3);
  v8 = v11;
  if ( v11 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        14,
        63,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        a3->DATA.QUERY_INFORMATION.Oid,
        v11);
    }
    return v8;
  }
  return 259LL;
}
