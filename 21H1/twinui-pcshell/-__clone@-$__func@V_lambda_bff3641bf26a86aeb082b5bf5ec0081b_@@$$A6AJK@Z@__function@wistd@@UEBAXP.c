/*
 * XREFs of ?__clone@?$__func@V_lambda_bff3641bf26a86aeb082b5bf5ec0081b_@@$$A6AJK@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x1800BB220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func<_lambda_bff3641bf26a86aeb082b5bf5ec0081b_,long (unsigned long)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  *a2 = &wistd::__function::__func<_lambda_bff3641bf26a86aeb082b5bf5ec0081b_,long (unsigned long)>::`vftable';
  v3 = a2 + 1;
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  result = *(_QWORD *)(a1 + 16);
  v3[1] = result;
  return result;
}
