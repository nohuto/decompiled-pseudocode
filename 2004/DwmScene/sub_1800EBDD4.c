/*
 * XREFs of sub_1800EBDD4 @ 0x1800EBDD4
 * Callers:
 *     sub_1800ECD78 @ 0x1800ECD78 (sub_1800ECD78.c)
 * Callees:
 *     sub_1800EEAD4 @ 0x1800EEAD4 (sub_1800EEAD4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800EBDD4(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xA8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShaderPropertyBlock>::`vftable';
    sub_1800EEAD4(v4 + 4, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  return a1;
}
