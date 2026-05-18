/*
 * XREFs of sub_18000FD9C @ 0x18000FD9C
 * Callers:
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 * Callees:
 *     sub_18000FB60 @ 0x18000FB60 (sub_18000FB60.c)
 *     sub_180068494 @ 0x180068494 (sub_180068494.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000FD9C(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xB8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::FrameBuffer>::`vftable';
    sub_180068494(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  sub_18000FB60(a1, (__int64)(v3 + 4));
  return a1;
}
