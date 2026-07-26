/*
 * XREFs of ?ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091650
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x1C00913D4 (-ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMHardwareCapabilities(struct _NDIS_REQ_TRACKER *a1)
{
  return ndisOidPrePMCapabilities(a1, 1);
}
