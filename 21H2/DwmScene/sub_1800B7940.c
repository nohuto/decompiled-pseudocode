/*
 * XREFs of sub_1800B7940 @ 0x1800B7940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B7940(__int64 a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)(a1 + 16);
  *v1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return sub_1800D041C(v1);
}
