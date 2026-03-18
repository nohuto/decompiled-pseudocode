/*
 * XREFs of ?Thunk_UpdateUniqueId_8@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800D4110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Thunk_UpdateUniqueId_8(
        BamoImpl::BamoDataProviderProxyImpl *a1,
        struct _LUID **a2)
{
  return BamoImpl::BamoDataProviderProxyImpl::UpdateUniqueId(a1, *a2);
}
