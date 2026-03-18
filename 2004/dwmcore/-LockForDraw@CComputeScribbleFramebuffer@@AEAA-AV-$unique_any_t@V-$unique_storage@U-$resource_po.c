/*
 * XREFs of ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1801A7CC4
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800E9F40 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801544F4 (McTemplateU0xq_EventWriteTransfer.c)
 */

_QWORD *__fastcall CComputeScribbleFramebuffer::LockForDraw(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *result; // rax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      a1,
      &EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Start,
      *(_QWORD *)(a1 + 200),
      *(_DWORD *)(a1 + 236));
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 224));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      v4,
      &EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Stop,
      *(_QWORD *)(a1 + 200),
      *(_DWORD *)(a1 + 236));
  *(_BYTE *)(a1 + 233) = 1;
  result = a2;
  *a2 = a1 + 224;
  return result;
}
