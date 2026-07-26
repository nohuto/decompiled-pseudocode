/*
 * XREFs of ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00342B8
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C003414C (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B2058 (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B2408 (ndisIfDeleteCompartment.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00B4238 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B4890 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B4D50 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
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
