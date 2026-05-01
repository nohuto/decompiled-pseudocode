/*
 * XREFs of ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x180381468
 * Callers:
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180382830 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180383868 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CMultitaskingViewElementBase::PointerTracking *__fastcall CMultitaskingViewElementBase::PointerTracking::PointerTracking(
        CMultitaskingViewElementBase::PointerTracking *this,
        const struct CMultitaskingViewElementBase::PointerTracking *a2)
{
  __int64 *v4; // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  v4 = (__int64 *)((char *)this + 32);
  *v4 = *((_QWORD *)a2 + 4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  return this;
}
