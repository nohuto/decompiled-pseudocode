/*
 * XREFs of NdisIfAllocateNetLuidIndex @ 0x1C0126640
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0105EBC (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

NDIS_STATUS __stdcall NdisIfAllocateNetLuidIndex(NET_IFTYPE ifType, PUINT32 pNetLuidIndex)
{
  return ndisIfAllocateAndVerifyNetLuidIndex(ifType, pNetLuidIndex, 1, 1);
}
