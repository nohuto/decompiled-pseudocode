/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FC5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return VirtualDesktopController::QueryInterface((VirtualDesktopController *)(a1 - 16), a2, a3);
}
