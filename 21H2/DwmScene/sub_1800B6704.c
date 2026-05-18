/*
 * XREFs of sub_1800B6704 @ 0x1800B6704
 * Callers:
 *     sub_1800B6C60 @ 0x1800B6C60 (sub_1800B6C60.c)
 * Callees:
 *     sub_1800CF738 @ 0x1800CF738 (sub_1800CF738.c)
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800B6704(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x78uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::IndexBufferGeneric>::`vftable';
    memset(v2 + 4, 0, 0x68uLL);
    sub_1800CF738(v3 + 4);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::IndexBufferGeneric::`vftable';
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
