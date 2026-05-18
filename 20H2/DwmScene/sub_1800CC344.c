/*
 * XREFs of sub_1800CC344 @ 0x1800CC344
 * Callers:
 *     sub_180040F4C @ 0x180040F4C (sub_180040F4C.c)
 *     sub_1800B10C0 @ 0x1800B10C0 (sub_1800B10C0.c)
 * Callees:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

__int64 __fastcall sub_1800CC344(__int64 a1)
{
  sub_180062180(a1);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return a1;
}
