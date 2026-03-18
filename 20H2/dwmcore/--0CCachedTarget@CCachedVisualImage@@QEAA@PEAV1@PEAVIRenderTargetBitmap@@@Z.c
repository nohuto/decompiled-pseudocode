/*
 * XREFs of ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x1800C8944
 * Callers:
 *     ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800C87F8 (-CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1800459AC (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::CCachedTarget::CCachedTarget(
        CCachedVisualImage::CCachedTarget *this,
        struct CCachedVisualImage *a2,
        struct IRenderTargetBitmap *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)this = a2;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    (__int64)a3);
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 2;
  *((_WORD *)this + 18) = 1;
  v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v6 + 40LL))(
    v6,
    ((unsigned __int64)a2 + 80) & -(__int64)(a2 != 0LL));
  return this;
}
