/*
 * XREFs of sub_1800D1C14 @ 0x1800D1C14
 * Callers:
 *     sub_18004681C @ 0x18004681C (sub_18004681C.c)
 *     sub_1800B6990 @ 0x1800B6990 (sub_1800B6990.c)
 * Callees:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 */

__int64 __fastcall sub_1800D1C14(__int64 a1)
{
  sub_180067A50(a1);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return a1;
}
