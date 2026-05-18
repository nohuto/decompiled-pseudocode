/*
 * XREFs of sub_1800B0F9C @ 0x1800B0F9C
 * Callers:
 *     sub_1800B1640 @ 0x1800B1640 (sub_1800B1640.c)
 * Callees:
 *     sub_180099368 @ 0x180099368 (sub_180099368.c)
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B0F9C(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0xB0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::TextureGeneric>::`vftable';
    memset(v2 + 4, 0, 0xA0uLL);
    sub_180099368((__int64)(v3 + 4));
    *((_QWORD *)v3 + 2) = &Spectre::Engine::TextureGeneric::`vftable';
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
