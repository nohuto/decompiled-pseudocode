/*
 * XREFs of ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAKXZ @ 0x1800EBEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::AddRef(__int64 a1)
{
  return Microsoft::BamoImpl::ConnectionIndirector::AddRef((Microsoft::BamoImpl::ConnectionIndirector *)(a1 - 8));
}
