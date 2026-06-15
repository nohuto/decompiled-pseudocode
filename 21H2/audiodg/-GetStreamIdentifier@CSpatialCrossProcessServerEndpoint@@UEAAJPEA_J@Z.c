/*
 * XREFs of ?GetStreamIdentifier@CSpatialCrossProcessServerEndpoint@@UEAAJPEA_J@Z @ 0x140066640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::GetStreamIdentifier(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 *a2)
{
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_QWORD *)this + 174);
  return 0LL;
}
