/*
 * XREFs of ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x1C002CB68
 * Callers:
 *     VidSchiEnsureHwFlipQueueLog @ 0x1C00F60EC (VidSchiEnsureHwFlipQueueLog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *))DxgCoreInterface[21])(
           this,
           a2);
}
