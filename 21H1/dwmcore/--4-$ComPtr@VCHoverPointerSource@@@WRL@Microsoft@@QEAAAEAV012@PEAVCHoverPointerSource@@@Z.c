/*
 * XREFs of ??4?$ComPtr@VCHoverPointerSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCHoverPointerSource@@@Z @ 0x1800D1F94
 * Callers:
 *     ?ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETHOVERSOURCE@@@Z @ 0x1800D1F3C (-ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETHOVER.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CHoverPointerSource>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a2 + 8) + 8LL))(a2 + 8);
      v4 = *a1;
    }
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 16LL))(v4 + 8);
  }
  return a1;
}
