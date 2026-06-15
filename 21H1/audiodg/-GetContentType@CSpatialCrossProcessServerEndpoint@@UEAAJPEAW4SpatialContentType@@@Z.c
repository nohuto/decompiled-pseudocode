/*
 * XREFs of ?GetContentType@CSpatialCrossProcessServerEndpoint@@UEAAJPEAW4SpatialContentType@@@Z @ 0x14001F320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::GetContentType(
        CSpatialCrossProcessServerEndpoint *this,
        enum SpatialContentType *a2)
{
  if ( !a2 )
    return 2147500035LL;
  *(_DWORD *)a2 = *((_DWORD *)this + 350);
  return 0LL;
}
