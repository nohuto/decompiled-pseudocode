/*
 * XREFs of ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x1801E4278
 * Callers:
 *     ?EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribble@@@Z @ 0x1801A7478 (-EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribb.c)
 *     ?SetScribble@CComputeScribbleFramebuffer@@QEAAXPEAVCComputeScribble@@@Z @ 0x1801EBC40 (-SetScribble@CComputeScribbleFramebuffer@@QEAAXPEAVCComputeScribble@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = (__int64)a2;
  if ( a2 )
    (**a2)(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
