/*
 * XREFs of ?VidMmEnableIoMmuIsolation@@YAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0022380
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B02C8 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmEnableIoMmuIsolation(struct VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::EnableIoMmuIsolation(a1);
}
