/*
 * XREFs of ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x1C008FD64
 * Callers:
 *     ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003AF9C (-ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090A44 (-ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090F40 (-ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091310 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetPatternEffectivePriority(struct _NDIS_PACKET_PATTERN_ENTRY *a1)
{
  __int64 result; // rax
  _SINGLE_LIST_ENTRY *p_DupLink; // rdx
  unsigned int v3; // ecx

  result = 0xFFFFFFFFLL;
  p_DupLink = &a1->DupLink;
  while ( p_DupLink )
  {
    v3 = result;
    result = LODWORD(p_DupLink[3].Next);
    p_DupLink = p_DupLink->Next;
    if ( (unsigned int)result >= v3 )
      result = v3;
  }
  return result;
}
