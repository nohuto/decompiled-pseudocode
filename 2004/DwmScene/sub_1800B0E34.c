/*
 * XREFs of sub_1800B0E34 @ 0x1800B0E34
 * Callers:
 *     sub_1800B1390 @ 0x1800B1390 (sub_1800B1390.c)
 * Callees:
 *     sub_1800C9E68 @ 0x1800C9E68 (sub_1800C9E68.c)
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800B0E34(__int64 a1)
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
    sub_1800C9E68(v3 + 4);
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
