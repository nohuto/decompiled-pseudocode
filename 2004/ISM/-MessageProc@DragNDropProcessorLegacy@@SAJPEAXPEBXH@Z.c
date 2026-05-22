/*
 * XREFs of ?MessageProc@DragNDropProcessorLegacy@@SAJPEAXPEBXH@Z @ 0x180175440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::MessageProc(_QWORD *a1, const void *a2)
{
  unsigned int v3; // ebx
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v3 = CoreUICallReceive(
         a1[9],
         &DragNDropMessageCall::IDragNDrop_Receive<DragNDropProcessorLegacy>::Type,
         &DragNDropMessageCall::Microsoft::CoreUI::MessageCall::DragNDrop_g_parameters_jYHm6nol5KPFMdp6PsnUiTGiODY,
         24LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v5);
  return v3;
}
