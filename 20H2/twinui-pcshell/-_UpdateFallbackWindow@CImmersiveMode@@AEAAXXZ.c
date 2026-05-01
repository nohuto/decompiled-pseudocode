/*
 * XREFs of ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x180161B54
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x1800706D0 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180161164 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveMode::_UpdateFallbackWindow(CImmersiveMode *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 48LL))(
    *((_QWORD *)this + 43),
    (unsigned int)(*((_DWORD *)this + 84) == 1) + 1);
}
