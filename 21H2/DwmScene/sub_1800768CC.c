/*
 * XREFs of sub_1800768CC @ 0x1800768CC
 * Callers:
 *     sub_18007B4CC @ 0x18007B4CC (sub_18007B4CC.c)
 * Callees:
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     sub_1800ED79C @ 0x1800ED79C (sub_1800ED79C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800768CC(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xF0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::StandardShaderExtension>::`vftable';
    sub_1800ED79C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  sub_1800111C8(a1, (__int64)(v3 + 4));
  return a1;
}
