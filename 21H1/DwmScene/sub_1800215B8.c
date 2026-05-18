/*
 * XREFs of sub_1800215B8 @ 0x1800215B8
 * Callers:
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 *     sub_1800C6F10 @ 0x1800C6F10 (sub_1800C6F10.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800215B8(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xA0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::RenderState>::`vftable';
    sub_1800C6F10(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  sub_18000FA80(a1, (__int64)(v3 + 4));
  return a1;
}
