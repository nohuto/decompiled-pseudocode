/*
 * XREFs of _EngSetPointerShape@40 @ 0xD00A2
 * Callers:
 *     ?vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z @ 0x77F4E (-vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0 (-GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 */

ULONG __stdcall EngSetPointerShape(
        SURFOBJ *pso,
        SURFOBJ *psoMask,
        SURFOBJ *psoColor,
        XLATEOBJ *pxlo,
        LONG xHot,
        LONG yHot,
        LONG x,
        LONG y,
        RECTL *prcl,
        FLONG fl)
{
  struct _SURFOBJ *v10; // ecx
  ULONG v11; // esi
  struct _RECTL *v13; // [esp+0h] [ebp-Ch]
  unsigned int v14; // [esp+4h] [ebp-8h]
  int v15; // [esp+8h] [ebp-4h] BYREF

  if ( !g_pDwmState )
    return GdiSetPointerShape(
             psoColor,
             (struct _SURFOBJ *)pxlo,
             (struct _SURFOBJ *)xHot,
             (struct _XLATEOBJ *)yHot,
             x,
             y,
             (int)prcl,
             fl,
             v13,
             v14);
  v15 = *((_DWORD *)pso->hdev + 10);
  GreAcquireSemaphore(v15);
  pso = (SURFOBJ *)_ghsemSprite;
  GreAcquireSemaphore(_ghsemSprite);
  v11 = DwmSetPointerShape(
          psoColor,
          v10,
          (struct _SURFOBJ *)xHot,
          (struct _XLATEOBJ *)yHot,
          x,
          y,
          (int)prcl,
          fl,
          v13,
          v14);
  SEMOBJ::vUnlock((SEMOBJ *)&pso);
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return v11;
}
