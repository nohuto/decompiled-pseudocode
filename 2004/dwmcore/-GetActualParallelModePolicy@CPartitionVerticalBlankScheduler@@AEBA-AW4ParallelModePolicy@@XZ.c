/*
 * XREFs of ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBA?AW4ParallelModePolicy@@XZ @ 0x180033BE8
 * Callers:
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DB10 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180033C64 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18005ACD8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::GetActualParallelModePolicy(__int64 a1)
{
  unsigned int v1; // ebx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v3; // rcx
  __int64 v4; // rax
  char v6[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 1;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*(_QWORD *)(a1 + 64)
                                                                                                + 88LL));
  if ( PrimaryMonitorTarget )
  {
    v3 = (struct IMonitorTarget *)((char *)PrimaryMonitorTarget
                                 + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 8LL)
                                 + 8);
    v4 = (**(__int64 (__fastcall ***)(struct IMonitorTarget *, char *))v3)(v3, v6);
    if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v4 + 8)) )
      return (unsigned int)CCommonRegistryData::m_parallelModePolicy;
  }
  return v1;
}
