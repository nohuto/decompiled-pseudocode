/*
 * XREFs of sub_180101C84 @ 0x180101C84
 * Callers:
 *     sub_1800B79F4 @ 0x1800B79F4 (sub_1800B79F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180101C84(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
