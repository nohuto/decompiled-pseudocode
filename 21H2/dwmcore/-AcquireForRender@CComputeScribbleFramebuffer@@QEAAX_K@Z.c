/*
 * XREFs of ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1801EB2DC
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801E46C8 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801EBBF0 (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___ @ 0x1801ECDD0 (CComputeScribbleSynchronizer--BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___.c)
 */

void __fastcall CComputeScribbleFramebuffer::AcquireForRender(CComputeScribbleFramebuffer *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      (__int64)this,
      &EVTDESC_COMPUTESCRIBBLE_FRAMECOMPLETED,
      *((_QWORD *)this + 29),
      *((_DWORD *)this + 61));
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  v4 = *((_QWORD *)this + 6);
  v5 = *((_QWORD *)this + 2);
  v6 = (RTL_SRWLOCK *)((char *)this + 64);
  *((_QWORD *)this + 7) = CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___(
                            v4,
                            &v5);
  *((_QWORD *)this + 29) = a2;
  CComputeScribbleFramebuffer::SaveDirtyForPreRender(this);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
}
