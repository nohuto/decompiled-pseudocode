/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801DC700
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@M$0?0@gsl@@QEBAAEAM_J@Z @ 0x1801DC60C (--A-$span@M$0-0@gsl@@QEBAAEAM_J@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@AEAV78@@Z @ 0x1801DD02C (-GetValueAt@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::AnimateSingle(
        int a1,
        _QWORD *a2,
        int a3,
        __int64 a4)
{
  int v7; // r8d
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]

  gsl::span<float,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::GetValueAt(
    a1,
    (unsigned int)&v10,
    v7,
    a3,
    a4);
  v8 = *(_QWORD *)(a4 + 8);
  result = v11;
  *(_QWORD *)v8 = v10;
  *(_DWORD *)(v8 + 8) = result;
  return result;
}
