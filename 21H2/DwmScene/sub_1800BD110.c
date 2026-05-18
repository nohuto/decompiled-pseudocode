/*
 * XREFs of sub_1800BD110 @ 0x1800BD110
 * Callers:
 *     sub_1800BA2BC @ 0x1800BA2BC (sub_1800BA2BC.c)
 *     sub_1800C0090 @ 0x1800C0090 (sub_1800C0090.c)
 * Callees:
 *     sub_1800BD908 @ 0x1800BD908 (sub_1800BD908.c)
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800BD110(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x158uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    memset(v2 + 4, 0, 0x148uLL);
    sub_1800BD908(v3 + 4);
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
