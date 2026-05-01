/*
 * XREFs of ??0hresult_error@winrt@@QEAA@AEBU01@@Z @ 0x1801AE2F0
 * Callers:
 *     ??0hresult_not_implemented@winrt@@QEAA@AEBU01@@Z @ 0x1801AE2D0 (--0hresult_not_implemented@winrt@@QEAA@AEBU01@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

winrt::hresult_error *__fastcall winrt::hresult_error::hresult_error(
        winrt::hresult_error *this,
        const struct winrt::hresult_error *a2)
{
  __int64 *v3; // rcx

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = -1430532899;
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  v3 = (__int64 *)((char *)this + 16);
  *v3 = *((_QWORD *)a2 + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3);
  return this;
}
