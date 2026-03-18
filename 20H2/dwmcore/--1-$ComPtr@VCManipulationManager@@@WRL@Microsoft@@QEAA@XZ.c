/*
 * XREFs of ??1?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DB7B0
 * Callers:
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x1801D4B10 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::ComPtr<CManipulationManager>::~ComPtr<CManipulationManager>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
