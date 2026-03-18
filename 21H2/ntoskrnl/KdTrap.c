/*
 * XREFs of KdTrap @ 0x140299A2C
 * Callers:
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 * Callees:
 *     KdpStub @ 0x140299E04 (KdpStub.c)
 *     KdpTrap @ 0x140A6F1FC (KdpTrap.c)
 */

__int64 __fastcall KdTrap(int a1, int a2, int a3, int a4, char a5, char a6)
{
  if ( KdpDebugRoutineSelect )
    return KdpTrap(a1, a2, a3, a4, a5, a6);
  else
    return KdpStub(a1, a2, a3, a4, a5, a6);
}
