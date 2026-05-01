/*
 * XREFs of _lambda_d14133faddb8c28b80f2f473bceb745b_::__lambda_d14133faddb8c28b80f2f473bceb745b_ @ 0x180014304
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180081788 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___::_scalar_deleting_destructor_ @ 0x180088A20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___--_scala.c)
 * Callees:
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800125E8 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_d14133faddb8c28b80f2f473bceb745b_::__lambda_d14133faddb8c28b80f2f473bceb745b_(__int64 *a1)
{
  HRESULT result; // eax
  __int64 v3; // rcx

  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)(a1 + 4));
  result = WindowsDeleteString((HSTRING)a1[2]);
  a1[2] = 0LL;
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
