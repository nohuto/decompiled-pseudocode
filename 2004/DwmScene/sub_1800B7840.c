/*
 * XREFs of sub_1800B7840 @ 0x1800B7840
 * Callers:
 *     sub_1800B49EC @ 0x1800B49EC (sub_1800B49EC.c)
 *     sub_1800BA7C0 @ 0x1800BA7C0 (sub_1800BA7C0.c)
 * Callees:
 *     sub_1800B8038 @ 0x1800B8038 (sub_1800B8038.c)
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800B7840(__int64 a1)
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
    sub_1800B8038(v3 + 4);
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
