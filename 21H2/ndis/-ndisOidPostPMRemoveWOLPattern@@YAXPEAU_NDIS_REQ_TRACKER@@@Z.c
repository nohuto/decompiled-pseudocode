/*
 * XREFs of ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091310
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003BB24 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C003BB48 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C008FCB4 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090BC4 (-ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C009300C (-ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00953A8 (-ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostPMRemoveWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  struct _SINGLE_LIST_ENTRY *v2; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  __int64 v4; // rdi
  void *v5; // rbx
  PVOID *v6; // rbx
  int v7; // ebx
  struct _SINGLE_LIST_ENTRY *v8; // rcx

  v2 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
  {
    v5 = *(void **)(v4 + 144);
    if ( v5 )
    {
      *(_DWORD *)(v4 + 32) = *(_DWORD *)v5;
      *(_QWORD *)(v4 + 40) = *((_QWORD *)v5 + 1);
      *(_DWORD *)(v4 + 48) = *((_DWORD *)v5 + 4);
      ExFreePoolWithTag(*((PVOID *)v5 + 3), 0);
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(v4 + 144) = 0LL;
    }
  }
  else
  {
    if ( v3 )
    {
      if ( v3->MajorNdisVersion > 6u || v3->MajorNdisVersion == 6 && v3->MinorNdisVersion >= 0x14u )
      {
        ndisMiniportPostRemoveWoLPattern(*(struct _NDIS_MINIPORT_BLOCK **)a1, *((struct _NDIS_OID_REQUEST **)a1 + 4));
        if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v4) == &ndisIntReqWmi )
        {
          ndisUpdateWmiPMParamsForPatterns(v3);
          ndisGetCombinedPMConfig(v3, &v3->PMCurrentParameters);
        }
      }
      else
      {
        ndisPostRemoveMiniportWakeUpPattern(
          *(struct _NDIS_MINIPORT_BLOCK **)a1,
          *((struct _NDIS_OID_REQUEST **)a1 + 4),
          0);
        v6 = *(PVOID **)(v4 + 144);
        ExFreePoolWithTag(v6[3], 0);
        *(_DWORD *)(v4 + 32) = *(_DWORD *)v6;
        *(_QWORD *)(v4 + 40) = v6[1];
        *(_DWORD *)(v4 + 48) = *((_DWORD *)v6 + 4);
        ExFreePoolWithTag(v6, 0);
        *(_QWORD *)(v4 + 144) = 0LL;
      }
    }
    v7 = **(_DWORD **)(v4 + 40);
    if ( *((_QWORD *)a1 + 3) )
      ndisDeletePatternEntry(v2 + 63, v7);
    v8 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
    if ( v8 && (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
      ndisDeletePatternEntry(v8 + 90, v7);
  }
}
