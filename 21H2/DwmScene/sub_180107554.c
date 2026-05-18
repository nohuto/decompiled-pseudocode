/*
 * XREFs of sub_180107554 @ 0x180107554
 * Callers:
 *     sub_1800BD2C4 @ 0x1800BD2C4 (sub_1800BD2C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180107554(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return a1;
}
