/*
 * XREFs of sub_1800268EC @ 0x1800268EC
 * Callers:
 *     sub_180027E9C @ 0x180027E9C (sub_180027E9C.c)
 * Callees:
 *     sub_1800CE160 @ 0x1800CE160 (sub_1800CE160.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800268EC(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xC0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DeviceShaderPipeline>::`vftable';
    sub_1800CE160(v2 + 4);
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
