/*
 * XREFs of sub_1800A2EB8 @ 0x1800A2EB8
 * Callers:
 *     sub_1800A31A4 @ 0x1800A31A4 (sub_1800A31A4.c)
 * Callees:
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 *     sub_1800110E8 @ 0x1800110E8 (sub_1800110E8.c)
 *     sub_1800A30C8 @ 0x1800A30C8 (sub_1800A30C8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A2EB8(__int64 a1, _BYTE *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  __int64 v7[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = operator new(0x80uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::IShaderExtension>::`vftable';
    v7[2] = 0LL;
    v7[3] = 15LL;
    LOBYTE(v7[0]) = 0;
    unknown_libname_98(v7, a2);
    sub_1800A30C8(v5 + 4, v7);
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
