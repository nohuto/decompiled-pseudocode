/*
 * XREFs of sub_1800856DC @ 0x1800856DC
 * Callers:
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_180085A04 @ 0x180085A04 (sub_180085A04.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800856DC(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _QWORD v9[10]; // [rsp+28h] [rbp-50h] BYREF

  v6 = operator new(0x78uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Engine::SceneLayer>::`vftable';
    v9[2] = 0LL;
    v9[3] = 0LL;
    sub_18001269C(v9, a2);
    sub_180085A04(v7 + 4, v9, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v7 + 4;
  *(_QWORD *)(a1 + 8) = v7;
  return a1;
}
