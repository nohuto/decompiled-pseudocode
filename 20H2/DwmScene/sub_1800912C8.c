/*
 * XREFs of sub_1800912C8 @ 0x1800912C8
 * Callers:
 *     sub_180090CE0 @ 0x180090CE0 (sub_180090CE0.c)
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800912C8(__int64 a1, unsigned int *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xA8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::VertexBuffer>::`vftable';
    sub_1800CA310(v4 + 4, *a2);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  sub_18000FA80(a1, (__int64)(v5 + 4));
  return a1;
}
