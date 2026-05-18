/*
 * XREFs of sub_180043A58 @ 0x180043A58
 * Callers:
 *     sub_1800449CC @ 0x1800449CC (sub_1800449CC.c)
 * Callees:
 *     memset @ 0x18012396A (memset.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180043A58(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>::`vftable';
  memset((void *)(a1 + 17), 0, 0x8FuLL);
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  `eh vector constructor iterator'((void *)(a1 + 64), 0x30uLL, 2uLL, sub_180043C00, sub_180043D90);
  return a1;
}
