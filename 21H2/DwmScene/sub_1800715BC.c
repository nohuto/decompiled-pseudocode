/*
 * XREFs of sub_1800715BC @ 0x1800715BC
 * Callers:
 *     sub_18007B34C @ 0x18007B34C (sub_18007B34C.c)
 * Callees:
 *     sub_180077740 @ 0x180077740 (sub_180077740.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800715BC(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Utils::Tweening::TweenManager>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  v2 = operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::Tweening::HighPerfClock>::`vftable';
    *((_QWORD *)v2 + 2) = &Spectre::Utils::Tweening::HighPerfClock::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v5[1] = v3;
  v5[0] = v3 + 4;
  sub_180077740(a1 + 16, v5);
  return a1;
}
