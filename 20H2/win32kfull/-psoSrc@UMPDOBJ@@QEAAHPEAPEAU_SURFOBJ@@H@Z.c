/*
 * XREFs of ?psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0293084
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0071AF8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00721AC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 */

__int64 __fastcall UMPDOBJ::psoSrc(UMPDOBJ *this, struct _SURFOBJ **a2)
{
  return UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 80), a2);
}
