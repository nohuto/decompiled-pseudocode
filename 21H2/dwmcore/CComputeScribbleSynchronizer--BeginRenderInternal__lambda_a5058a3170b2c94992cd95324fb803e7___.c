/*
 * XREFs of CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___ @ 0x1801ECDD0
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180081554 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1801EB2DC (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801C0E80 (McTemplateU0qx_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockExclusive((PSRWLOCK)a1);
  v5 = *(_QWORD *)(a1 + 24);
  v12 = (RTL_SRWLOCK *)a1;
  if ( v5 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      McTemplateU0qx_EventWriteTransfer(v4, &EVTDESC_COMPUTESCRIBBLE_FENCEWAIT, *(unsigned int *)(a1 + 48), v5);
      v5 = *(_QWORD *)(a1 + 24);
    }
    if ( *(_BYTE *)(a1 + 32) )
      v6 = *(_QWORD *)(a1 + 8);
    else
      v6 = *(_QWORD *)(a1 + 16);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a2 + 560LL) + 1184LL))(
           *(_QWORD *)(*(_QWORD *)a2 + 560LL),
           *(_QWORD *)(v6 + 16),
           v5);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        43LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
        (const char *)(unsigned int)v7,
        v10);
  }
  v8 = *(_QWORD *)(a1 + 24) + 1LL;
  *(_BYTE *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 24) = v8;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  return v8;
}
