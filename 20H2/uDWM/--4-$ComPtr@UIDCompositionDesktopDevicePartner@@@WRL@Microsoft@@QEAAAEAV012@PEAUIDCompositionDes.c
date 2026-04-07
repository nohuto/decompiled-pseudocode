/*
 * XREFs of ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180011F74
 * Callers:
 *     ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180011AA0 (-Initialize@UdwmDcompVisual@@QEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800451BC (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BA4E0 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DC0C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
  return a1;
}
