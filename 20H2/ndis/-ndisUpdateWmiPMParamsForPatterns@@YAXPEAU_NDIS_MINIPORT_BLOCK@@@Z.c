/*
 * XREFs of ?ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095228
 * Callers:
 *     ?ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090298 (-ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091190 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008FB7C (-ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 */

void __fastcall ndisUpdateWmiPMParamsForPatterns(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r10
  _SINGLE_LIST_ENTRY *Next; // rax
  _SINGLE_LIST_ENTRY *i; // r9
  struct _NDIS_PM_PARAMETERS v4; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  Next = a1->WOLPatternList.Next;
  memset(&v4, 0, sizeof(v4));
  while ( Next )
  {
    for ( i = Next + 1; i; i = i->Next )
    {
      if ( i[2].Next == (_SINGLE_LIST_ENTRY *)&ndisIntReqWmi )
        ndisEnablePMParamForPattern((struct _NDIS_PM_WOL_PATTERN *)&Next[6], &v4);
    }
    Next = Next->Next;
  }
  v1->PMWmiParameters.EnabledWoLPacketPatterns = v4.EnabledWoLPacketPatterns;
}
