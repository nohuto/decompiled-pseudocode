/*
 * XREFs of ?psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0293060
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0071AF8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00721AC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 */

__int64 __fastcall UMPDOBJ::psoMask(UMPDOBJ *this, struct _SURFOBJ **a2)
{
  return UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 96), a2);
}
