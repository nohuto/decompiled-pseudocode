/*
 * XREFs of sub_18002101C @ 0x18002101C
 * Callers:
 *     sub_1800225CC @ 0x1800225CC (sub_1800225CC.c)
 * Callees:
 *     sub_1800C8890 @ 0x1800C8890 (sub_1800C8890.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18002101C(__int64 a1)
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
    sub_1800C8890(v2 + 4);
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
