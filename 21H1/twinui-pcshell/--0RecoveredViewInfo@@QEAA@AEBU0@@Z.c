/*
 * XREFs of ??0RecoveredViewInfo@@QEAA@AEBU0@@Z @ 0x18027E448
 * Callers:
 *     _lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator() @ 0x18027F5A4 (_lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

RecoveredViewInfo *__fastcall RecoveredViewInfo::RecoveredViewInfo(
        RecoveredViewInfo *this,
        const struct RecoveredViewInfo *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  return this;
}
