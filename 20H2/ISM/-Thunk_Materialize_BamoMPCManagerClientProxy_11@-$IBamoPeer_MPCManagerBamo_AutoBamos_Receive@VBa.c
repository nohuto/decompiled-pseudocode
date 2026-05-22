/*
 * XREFs of ?Thunk_Materialize_BamoMPCManagerClientProxy_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180074360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_MPCManagerBamo_AutoBamos_Receive<BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoMPCManagerClientProxy_11(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *a1,
        unsigned int **a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  return BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::Materialize_BamoMPCManagerClientProxy(
           a1,
           (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)**a2,
           a3,
           a4);
}
