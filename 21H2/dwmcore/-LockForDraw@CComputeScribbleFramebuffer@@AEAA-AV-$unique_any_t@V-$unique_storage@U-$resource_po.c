/*
 * XREFs of ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1801EBB4C
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801EB67C (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 */

_QWORD *__fastcall CComputeScribbleFramebuffer::LockForDraw(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      a1,
      &EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Start,
      *(_QWORD *)(a1 + 232),
      *(_DWORD *)(a1 + 244));
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 64));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      v4,
      &EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Stop,
      *(_QWORD *)(a1 + 232),
      *(_DWORD *)(a1 + 244));
  v6 = 0LL;
  *(_BYTE *)(a1 + 152) = 1;
  *a2 = a1 + 64;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
  return a2;
}
