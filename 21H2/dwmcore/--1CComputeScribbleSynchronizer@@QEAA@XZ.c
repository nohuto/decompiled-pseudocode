/*
 * XREFs of ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x1801EB25C
 * Callers:
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x1801EB1D8 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801EB930 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 *     ?Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1801ECF64 (-Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(
        CComputeScribbleSynchronizer *this,
        void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 5);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 1);
}
