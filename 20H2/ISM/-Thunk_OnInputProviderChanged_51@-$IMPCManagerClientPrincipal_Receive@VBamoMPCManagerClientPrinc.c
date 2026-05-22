/*
 * XREFs of ?Thunk_OnInputProviderChanged_51@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800468A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnInputProviderChanged_51(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnInputProviderChanged(
           a1,
           *(struct LegacyDeviceInfo **)a2,
           **(_DWORD **)(a2 + 8));
}
