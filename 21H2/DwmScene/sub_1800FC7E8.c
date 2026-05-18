/*
 * XREFs of sub_1800FC7E8 @ 0x1800FC7E8
 * Callers:
 *     sub_1800FC58C @ 0x1800FC58C (sub_1800FC58C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800FC7E8(_QWORD *a1, _QWORD *a2, int *a3, int *a4)
{
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  int v10; // xmm1_4
  int v11; // xmm0_4
  __int64 v12; // rax

  v8 = operator new(0x38uLL);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
    v10 = *a4;
    v11 = *a3;
    *(_QWORD *)v8 = &Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>::`vftable';
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    v12 = a2[1];
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    *((_QWORD *)v9 + 1) = *a2;
    *((_QWORD *)v9 + 2) = a2[1];
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_DWORD *)v9 + 10) = v11;
    *((_DWORD *)v9 + 11) = v10;
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9;
  return a1;
}
