/*
 * XREFs of ?GetDeviceLocation@DXGK_VIRTUAL_GPU_GPUP@@UEAAXPEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C0360890
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetDeviceLocation@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C035AE90 (-DdiGetDeviceLocation@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_GETDEVICELOCATION@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::GetDeviceLocation(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETDEVICELOCATION *a2,
        __int64 a3)
{
  ADAPTER_RENDER::DdiGetDeviceLocation(this[1], a2, a3);
}
