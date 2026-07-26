/*
 * XREFs of ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0034858
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C00346EC (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B2688 (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B2A38 (ndisIfDeleteCompartment.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00B4868 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B4EC0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B5380 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall COMPARTMENTBLOCK_DECREMENT_REF(struct _NDIS_IF_COMPARTMENT_BLOCK *a1)
{
  struct _KEVENT *v1; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 11, 0xFFFFFFFF) == 1 )
  {
    v1 = (struct _KEVENT *)*((_QWORD *)a1 + 214);
    if ( v1 )
      KeSetEvent(v1, 0, 0);
  }
}
