/*
 * XREFs of ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0073CE8
 * Callers:
 *     NdisNblTrackerDeregisterComponent @ 0x1C00202B0 (NdisNblTrackerDeregisterComponent.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C002CEB0 (NdisNblTrackerRegisterComponent.c)
 * Callees:
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C0038D40 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

void __fastcall ndisNblTrackerDeleteTracker(ULONG_PTR *P)
{
  ULONG_PTR *v2; // rbx
  __int64 v3; // rdi
  ULONG_PTR v4; // rcx

  v2 = P + 5;
  v3 = 2LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      ndisFreePerProcessorSlot(v4, 0x6B74444EuLL);
    }
    v2 += 2;
    --v3;
  }
  while ( v3 );
  ExFreePoolWithTag(P, 0);
}
