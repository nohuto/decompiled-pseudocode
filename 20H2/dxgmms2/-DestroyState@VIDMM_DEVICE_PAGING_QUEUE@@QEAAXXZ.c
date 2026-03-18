/*
 * XREFs of ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C0080C38
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0080CBC (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroyDeviceSyncObject @ 0x1C0010C10 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchDestroySyncObject @ 0x1C007FB60 (VidSchDestroySyncObject.c)
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C0080C8C (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::DestroyState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  if ( *((_QWORD *)this + 19) )
  {
    VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA(this);
    v3 = *(_QWORD *)(*((_QWORD *)this + 17) + 32LL);
    if ( v3 )
      VidSchDestroyDeviceSyncObject(*((_QWORD *)this + 19), v3, 1, 0LL);
    VidSchDestroySyncObject(*((_VIDSCH_SYNC_OBJECT **)this + 19), v3, v2);
  }
}
