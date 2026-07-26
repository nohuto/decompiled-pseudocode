/*
 * XREFs of ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017204
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F740 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000E9D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00185E4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001B868 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisNsiGetTopIfBlockFromMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *result; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  _NDIS_FILTER_BLOCK *HighestFilter; // rbx
  _NDIS_IF_BLOCK *IfBlock; // rbx
  int v7; // [rsp+48h] [rbp+10h] BYREF

  result = ndisReferenceTopMiniportByNameForNsi(a1, 0, a3, 0, NSIREF_IFTOP, MPREF_IF_FINDTOP);
  v4 = result;
  if ( result )
  {
    KeAcquireSpinLockAtDpcLevel(&result->Lock);
    HighestFilter = v4->HighestFilter;
    v4->MiniportThread = KeGetCurrentThread();
    if ( !HighestFilter )
      goto LABEL_8;
    do
    {
      v7 = 0;
      if ( ndisReferenceRefEx(&HighestFilter->PnPRef.SpinLock, 0xBu, (enum _NDIS_REFERENCE_STATUS *)&v7) )
        break;
      HighestFilter = HighestFilter->LowerFilter;
    }
    while ( HighestFilter );
    if ( HighestFilter )
      IfBlock = HighestFilter->IfBlock;
    else
LABEL_8:
      IfBlock = v4->IfBlock;
    v4->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    ndisDereferenceMiniportForNsi(v4, NSIREF_IFTOP, 0x3Cu);
    return (struct _NDIS_MINIPORT_BLOCK *)IfBlock;
  }
  return result;
}
