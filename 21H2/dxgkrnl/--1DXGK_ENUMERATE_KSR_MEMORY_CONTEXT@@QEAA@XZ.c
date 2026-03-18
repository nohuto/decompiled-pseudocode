/*
 * XREFs of ??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ @ 0x1C03930BC
 * Callers:
 *     DpiKsrRestore @ 0x1C03941B0 (DpiKsrRestore.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C039431C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT(PVOID *this)
{
  if ( this[33] != this + 1 )
    ExFreePoolWithTag(this[33], 0);
}
