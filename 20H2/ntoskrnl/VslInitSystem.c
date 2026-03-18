/*
 * XREFs of VslInitSystem @ 0x140A75DF0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpIumPhase4Initialize @ 0x1403CE3EC (VslpIumPhase4Initialize.c)
 *     VslpIumPhase0Initialize @ 0x140A92768 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall VslInitSystem(int a1, __int64 a2)
{
  if ( a1 )
    return VslpIumPhase4Initialize();
  else
    return VslpIumPhase0Initialize(a2);
}
