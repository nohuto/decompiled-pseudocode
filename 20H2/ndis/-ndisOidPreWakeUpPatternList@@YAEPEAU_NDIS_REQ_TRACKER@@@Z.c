/*
 * XREFs of ?ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092540
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093A58 (-ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093C0C (-ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreWakeUpPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  char v2; // dl
  struct _NDIS_MINIPORT_BLOCK *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r10
  int v7; // eax
  int WolPatternList; // eax

  v2 = 0;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 3);
  v5 = *((_QWORD *)a1 + 4);
  if ( v4
    && ((v6 = *(_QWORD *)(v4 + 24), *(_BYTE *)(v6 + 56) > 6u) || *(_BYTE *)(v6 + 56) == 6
                                                              && *(_BYTE *)(v6 + 57) >= 0x14u)
    || *((_QWORD *)a1 + 1) && (*(_DWORD *)(v5 + 88) & 0x4000) == 0
    || (v7 = *(_DWORD *)(v5 + 4), (v7 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( v4 && !v7 )
    goto LABEL_16;
  if ( !*((_QWORD *)a1 + 2) && v3 )
  {
    if ( v3->MajorNdisVersion > 6u || v3->MajorNdisVersion == 6 && v3->MinorNdisVersion >= 0x14u )
    {
      *(_DWORD *)(v5 + 32) = -50265844;
      WolPatternList = ndisQueryWolPatternList(v3->WOLPatternList.Next, (struct _NDIS_OID_REQUEST *)v5);
      goto LABEL_18;
    }
LABEL_16:
    WolPatternList = ndisQueryWakeUpPatternList(
                       *((struct _NDIS_OPEN_BLOCK **)a1 + 3),
                       v3,
                       (struct _NDIS_OID_REQUEST *)v5);
LABEL_18:
    *((_DWORD *)a1 + 10) = WolPatternList;
    return 1;
  }
  return v2;
}
