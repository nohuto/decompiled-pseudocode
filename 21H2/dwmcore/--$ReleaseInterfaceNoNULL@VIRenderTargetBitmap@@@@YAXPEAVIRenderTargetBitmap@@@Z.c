/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VIRenderTargetBitmap@@@@YAXPEAVIRenderTargetBitmap@@@Z @ 0x180112F02
 * Callers:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801C1710 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801C7888 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterfaceNoNULL<IRenderTargetBitmap>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(int *)(*(_QWORD *)(a1 + 8) + 4LL) + a1 + 8;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
