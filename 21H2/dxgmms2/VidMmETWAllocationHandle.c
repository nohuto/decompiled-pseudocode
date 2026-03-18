/*
 * XREFs of VidMmETWAllocationHandle @ 0x1C0002D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C0092250 (-ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 */

void *__fastcall VidMmETWAllocationHandle(VIDMM_GLOBAL *a1, unsigned int a2)
{
  return VIDMM_GLOBAL::ETWAllocationHandle(a1, a2);
}
