/*
 * XREFs of ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C006D3C0
 * Callers:
 *     EngHTBlt @ 0x1C006C950 (EngHTBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0072FE0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C010E424 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     <none>
 */

void __fastcall HTSEMOBJ::vRelease(HTSEMOBJ *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
    GreReleaseSemaphoreInternal(ghsemHT);
  }
}
