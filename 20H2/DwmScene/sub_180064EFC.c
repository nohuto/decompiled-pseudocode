/*
 * XREFs of sub_180064EFC @ 0x180064EFC
 * Callers:
 *     sub_180064FF8 @ 0x180064FF8 (sub_180064FF8.c)
 * Callees:
 *     sub_1800D5D5C @ 0x1800D5D5C (sub_1800D5D5C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180064EFC(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x1F8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ImageProcessingManager>::`vftable';
    sub_1800D5D5C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
