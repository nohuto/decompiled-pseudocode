/*
 * XREFs of ?WriteVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C0361120
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiWriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C035DC5C (-DdiWriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::WriteVirtualFunctionConfigBlock(
        ADAPTER_RENDER **this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiWriteVirtualFunctionConfigBlock(this[1], a2, a3);
}
