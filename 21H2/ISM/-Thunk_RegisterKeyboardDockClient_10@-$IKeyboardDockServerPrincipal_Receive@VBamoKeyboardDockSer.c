/*
 * XREFs of ?Thunk_RegisterKeyboardDockClient_10@?$IKeyboardDockServerPrincipal_Receive@VBamoKeyboardDockServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180128310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IKeyboardDockServerPrincipal_Receive<BamoImpl::BamoKeyboardDockServerPrincipalImpl>::Thunk_RegisterKeyboardDockClient_10(
        BamoImpl::BamoKeyboardDockServerPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoKeyboardDockServerPrincipalImpl::RegisterKeyboardDockClient(a1, **a2);
}
