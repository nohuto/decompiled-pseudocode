/*
 * XREFs of sub_18006F12C @ 0x18006F12C
 * Callers:
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800FED34 @ 0x1800FED34 (sub_1800FED34.c)
 *     sub_18010A668 @ 0x18010A668 (sub_18010A668.c)
 * Callees:
 *     sub_1800E2BCC @ 0x1800E2BCC (sub_1800E2BCC.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18006F12C(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_1800E2BCC(v2 + 4);
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
