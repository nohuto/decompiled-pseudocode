/*
 * XREFs of sub_180048468 @ 0x180048468
 * Callers:
 *     sub_180026A30 @ 0x180026A30 (sub_180026A30.c)
 * Callees:
 *     sub_1800CC3B4 @ 0x1800CC3B4 (sub_1800CC3B4.c)
 */

__int64 __fastcall sub_180048468(__int64 a1)
{
  __int64 result; // rax

  sub_1800CC3B4();
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::GpuQueryD3D11::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 4;
  *(_DWORD *)(a1 + 140) = 4;
  result = a1;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_BYTE *)(a1 + 152) = 1;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  return result;
}
