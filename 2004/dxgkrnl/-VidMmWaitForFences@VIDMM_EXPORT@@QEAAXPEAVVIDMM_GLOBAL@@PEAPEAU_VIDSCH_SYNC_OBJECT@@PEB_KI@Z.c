/*
 * XREFs of ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C003EB98
 * Callers:
 *     ?VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D70B0 (-VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8890 (-VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_EXPORT::VidMmWaitForFences(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct _VIDSCH_SYNC_OBJECT **a3,
        const unsigned __int64 *a4)
{
  (*(void (__fastcall **)(struct VIDMM_GLOBAL *, struct _VIDSCH_SYNC_OBJECT **, const unsigned __int64 *, __int64))(*((_QWORD *)this + 1) + 992LL))(
    a2,
    a3,
    a4,
    1LL);
}
