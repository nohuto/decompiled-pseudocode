/*
 * XREFs of ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090328
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C003BB48 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095410 (-ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMIndicatePMOffloadReject(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  char v2; // bp
  _SINGLE_LIST_ENTRY *p_PMProtocolOffloadList; // rcx
  int v6; // edx
  _SINGLE_LIST_ENTRY *Next; // rax
  _SINGLE_LIST_ENTRY *v8; // rbx
  _SINGLE_LIST_ENTRY *v9; // rbx
  _SINGLE_LIST_ENTRY *v10; // rcx
  void **p_Next; // rcx

  v2 = 0;
  if ( a2->StatusBufferSize >= 4 )
  {
    p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
    v6 = *(_DWORD *)a2->StatusBuffer;
    Next = p_PMProtocolOffloadList->Next;
    if ( p_PMProtocolOffloadList->Next )
    {
      do
      {
        v8 = Next;
        if ( HIDWORD(Next[24].Next) == v6 )
          break;
        p_PMProtocolOffloadList = Next;
        v8 = 0LL;
        Next = Next->Next;
      }
      while ( Next );
      if ( v8 )
      {
        p_PMProtocolOffloadList->Next = Next->Next;
        LODWORD(a2->NdisReserved[2]) = 0;
        v9 = v8 + 1;
        if ( v9 )
        {
          do
          {
            v10 = v9;
            v9 = v9->Next;
            p_Next = (void **)&v10[-1].Next;
            if ( p_Next[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(p_Next, 0);
            ++LODWORD(a2->NdisReserved[2]);
          }
          while ( v9 );
          if ( v2 )
          {
            ndisUpdateWmiPMParamsForProtocolOffloads(a1);
            ndisGetCombinedPMConfig(a1, &a1->PMCurrentParameters);
          }
        }
      }
    }
  }
}
