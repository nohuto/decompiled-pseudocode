/*
 * XREFs of ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18004AD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::Release(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return Microsoft::BamoImpl::BufferingMessageCallHost::Release(
           (Microsoft::BamoImpl::BamoImplObject *)(a1 - 16),
           a2,
           a3,
           a4);
}
