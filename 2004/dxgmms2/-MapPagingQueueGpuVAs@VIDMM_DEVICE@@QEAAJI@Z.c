/*
 * XREFs of ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1C00B9508
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00959C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1C00B949C (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::MapPagingQueueGpuVAs(VIDMM_DEVICE *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rax

  v3 = 176LL * a2;
  result = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 9)));
  if ( (int)result >= 0 )
  {
    result = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 10)));
    if ( (int)result >= 0 )
    {
      v5 = *((_QWORD *)this + 11);
      if ( !v5 )
        return 0LL;
      result = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v5 + v3));
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
