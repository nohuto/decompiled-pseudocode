/*
 * XREFs of ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C000230C
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0076974 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     VidSchCreateProcess @ 0x1C0076B60 (VidSchCreateProcess.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0076CD0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     VidSchTerminateProcess @ 0x1C0076E00 (VidSchTerminateProcess.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C008FFFC (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCount(DXGGLOBAL *this)
{
  return ((__int64 (__fastcall *)(DXGGLOBAL *))DxgCoreInterface[5])(this);
}
