/*
 * XREFs of ?SetScribble@CComputeScribbleFramebuffer@@QEAAXPEAVCComputeScribble@@@Z @ 0x1801EBC40
 * Callers:
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x1801EA85C (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x1801E4278 (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 */

void __fastcall CComputeScribbleFramebuffer::SetScribble(
        CComputeScribbleFramebuffer *this,
        struct CComputeScribble *a2)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  v5 = v2;
  wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 9,
    (void (__fastcall ***)(_QWORD))a2);
  *((_BYTE *)this + 240) = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
