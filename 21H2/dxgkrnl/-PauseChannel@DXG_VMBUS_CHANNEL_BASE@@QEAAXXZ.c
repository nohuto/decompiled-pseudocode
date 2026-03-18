/*
 * XREFs of ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C036532C
 * Callers:
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0358A24 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::PauseChannel(DXG_VMBUS_CHANNEL_BASE *this)
{
  if ( *(_QWORD *)this )
    ((void (*)(void))qword_1C0131C48)();
}
