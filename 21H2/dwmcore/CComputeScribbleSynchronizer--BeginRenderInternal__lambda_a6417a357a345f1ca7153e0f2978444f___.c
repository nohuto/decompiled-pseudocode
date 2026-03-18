/*
 * XREFs of CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___ @ 0x1801ECEA0
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801EB67C (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801C0E80 (McTemplateU0qx_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___(
        __int64 a1,
        _QWORD *a2)
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
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 120LL))(*a2, *(_QWORD *)(v6 + 24), v5);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        52LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
        (const char *)(unsigned int)v7,
        v10);
  }
  v8 = *(_QWORD *)(a1 + 24) + 1LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = v8;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  return v8;
}
