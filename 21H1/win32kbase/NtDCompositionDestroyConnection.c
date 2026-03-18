/*
 * XREFs of NtDCompositionDestroyConnection @ 0x1C01D48B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0006A30 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyConnection(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  return DirectComposition::CConnection::DestroyHandle(a1);
}
