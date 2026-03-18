/*
 * XREFs of ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C03510D8
 * Callers:
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0057A18 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0351070 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DisableVmBusChannel(struct DXGVMBUSCHANNEL *a1)
{
  if ( a1 )
    DXGVMBUSCHANNEL::Disable(a1);
}
