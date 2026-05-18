/*
 * XREFs of sub_1800B7B38 @ 0x1800B7B38
 * Callers:
 *     sub_1800B4570 @ 0x1800B4570 (sub_1800B4570.c)
 * Callees:
 *     sub_1800110E8 @ 0x1800110E8 (sub_1800110E8.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B7B38(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x7D0uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShadowMapCamera>::`vftable';
    sub_1800F9464(v4 + 4, a2, 360LL);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  sub_1800110E8(a1, (__int64)(v5 + 4));
  return a1;
}
