/*
 * XREFs of ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0069D64
 * Callers:
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0069F0C (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075620 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B4EC0 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B8C60 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B9144 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00B9650 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0010E40 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_DEVICE::SuspendSchedulerDevice(VIDMM_DEVICE *this)
{
  struct _VIDSCH_DEVICE *v1; // rcx

  v1 = (struct _VIDSCH_DEVICE *)*((_QWORD *)this + 4);
  if ( v1 )
    VidSchSuspendResumeDevice(v1, 1, 0, 0);
}
