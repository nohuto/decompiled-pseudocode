/*
 * XREFs of wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_::__clone @ 0x180073E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800CD898 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = a2 + 1;
  *a2 = &off_18014B2D0;
  ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(a2 + 1, a1 + 8);
  result = *(_QWORD *)(v2 + 8);
  v3[1] = result;
  return result;
}
