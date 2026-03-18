/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x18002F858
 * Callers:
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x18002ED7C (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x18002F0C4 (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x18002F1AC (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18002F7F8 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
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
