/*
 * XREFs of ?ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00334B0 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077CD4 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreIovDeleteVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  char v4; // bl
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  _NDIS_OPEN_BLOCK *v7; // r14
  unsigned int v8; // edx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x33u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_20;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    *(_DWORD *)(v1 + 56) = 12;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_21;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_7;
  if ( (ndisIovNicSwitchWithoutIovSupported(v3)
     || (SriovCurrentCapabilities = v3->SriovCurrentCapabilities) != 0LL
     && v3->NicSwitchCurrentCapabilities
     && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3)
    && (OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1),
        (v7 = OidSourceHandle) != 0LL)
    && OidSourceHandle->Header.Type == 18
    && (v8 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL)) != 0 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v3, v8);
    if ( VPortByVPortId )
    {
      if ( VPortByVPortId->Open == v7 )
      {
        *(_QWORD *)(v1 + 152) = VPortByVPortId;
LABEL_7:
        v4 = 0;
        goto LABEL_21;
      }
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741811;
    }
  }
  else
  {
LABEL_20:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_21:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x34u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
