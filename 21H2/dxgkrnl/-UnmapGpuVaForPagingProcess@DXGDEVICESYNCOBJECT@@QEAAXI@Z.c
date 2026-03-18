/*
 * XREFs of ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x1C03442C4
 * Callers:
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0166608 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000C188 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::UnmapGpuVaForPagingProcess(DXGDEVICESYNCOBJECT *this, unsigned int a2)
{
  __int64 v4; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL);
  MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
  (*(void (__fastcall **)(_QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *, _QWORD))(*(_QWORD *)(v4 + 8) + 984LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
    MonitoredFenceStorage,
    a2);
}
