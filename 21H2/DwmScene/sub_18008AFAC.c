/*
 * XREFs of sub_18008AFAC @ 0x18008AFAC
 * Callers:
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_18008B2D4 @ 0x18008B2D4 (sub_18008B2D4.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008AFAC(__int64 a1, __int64 a2, __int64 a3)
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
    sub_18001277C(v9, a2);
    sub_18008B2D4(v7 + 4, v9, a3);
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
