/*
 * XREFs of FxProbeAndLockForWrite @ 0x1C0091420
 * Callers:
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004E634 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxProbeAndLockForWrite(_MDL *Mdl, char a2)
{
  MmProbeAndLockPages(Mdl, 1, IoWriteAccess);
  return 0LL;
}
