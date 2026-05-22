/*
 * XREFs of ?Thunk_RegisterEdgyControllerClient_142@?$IEdgyControllerServerPrincipal_Receive@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180100580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IEdgyControllerServerPrincipal_Receive<BamoImpl::BamoEdgyControllerServerPrincipalImpl>::Thunk_RegisterEdgyControllerClient_142(
        BamoImpl::BamoEdgyControllerServerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoEdgyControllerServerPrincipalImpl::RegisterEdgyControllerClient(
           a1,
           *(const unsigned __int16 **)a2,
           **(_DWORD **)(a2 + 8));
}
