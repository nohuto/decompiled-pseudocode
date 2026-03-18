/*
 * XREFs of ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800DDAF0
 * Callers:
 *     ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAKXZ @ 0x1800EEB10 (-AddRef@ConnectionIndirector@BamoImpl@Microsoft@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::AddRef(Microsoft::BamoImpl::ConnectionIndirector *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this - 2);
}
