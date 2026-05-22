/*
 * XREFs of ?Release@ConnectionIndirector@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18004B380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::Release(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return Microsoft::BamoImpl::ConnectionIndirector::Release(
           (Microsoft::BamoImpl::ConnectionIndirector *)(a1 - 16),
           a2,
           a3,
           a4);
}
