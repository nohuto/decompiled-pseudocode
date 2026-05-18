/*
 * XREFs of sub_1800B10C0 @ 0x1800B10C0
 * Callers:
 *     sub_1800B14E8 @ 0x1800B14E8 (sub_1800B14E8.c)
 * Callees:
 *     sub_1800CC344 @ 0x1800CC344 (sub_1800CC344.c)
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800B10C0(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0xA0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::VertexLayoutGeneric>::`vftable';
    memset(v2 + 4, 0, 0x90uLL);
    sub_1800CC344(v3 + 4);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::VertexLayoutGeneric::`vftable';
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
