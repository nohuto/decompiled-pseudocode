/*
 * XREFs of ?VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0017BCC
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C00DAE14 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(a1 + 8) + 608LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           0LL,
           a8,
           a9);
}
