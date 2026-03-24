/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801DB3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@M$0?0@gsl@@QEBAAEAM_J@Z @ 0x1801DB25C (--A-$span@M$0-0@gsl@@QEBAAEAM_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat4@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@AEAV78@@Z @ 0x1801DBDAC (-GetValueAt@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

_OWORD *__fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::AnimateSingle(
        int a1,
        _QWORD *a2,
        int a3,
        __int64 a4)
{
  int v7; // r8d
  _OWORD *result; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  gsl::span<float,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::GetValueAt(
    a1,
    (unsigned int)&v9,
    v7,
    a3,
    a4);
  result = *(_OWORD **)(a4 + 8);
  *result = v9;
  return result;
}
