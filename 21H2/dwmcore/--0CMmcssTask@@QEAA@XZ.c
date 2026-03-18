/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x18002BBE0
 * Callers:
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x18002A558 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18002BCB4 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x18002CA0C (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x18002DCA8 (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800F22B0 (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 * Callees:
 *     <none>
 */

CMmcssTask *__fastcall CMmcssTask::CMmcssTask(CMmcssTask *this)
{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  return this;
}
