/*
 * XREFs of sub_180026A30 @ 0x180026A30
 * Callers:
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 * Callees:
 *     sub_180048468 @ 0x180048468 (sub_180048468.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180026A30(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x108uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::GpuQueryD3D11>::`vftable';
    sub_180048468(v2 + 4);
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
