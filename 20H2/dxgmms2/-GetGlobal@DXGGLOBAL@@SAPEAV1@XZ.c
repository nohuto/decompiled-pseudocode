/*
 * XREFs of ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011A40
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C006B3DC (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     VidSchCreateProcess @ 0x1C006B5D0 (VidSchCreateProcess.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B740 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     VidSchTerminateProcess @ 0x1C006B870 (VidSchTerminateProcess.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C009011C (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

struct DXGGLOBAL *DXGGLOBAL::GetGlobal(void)
{
  return (struct DXGGLOBAL *)((__int64 (*)(void))DxgCoreInterface[3])();
}
