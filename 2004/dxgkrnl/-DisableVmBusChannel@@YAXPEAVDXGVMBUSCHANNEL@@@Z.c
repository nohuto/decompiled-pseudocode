/*
 * XREFs of ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B4E68
 * Callers:
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0047C24 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B2898 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DisableVmBusChannel(struct DXGVMBUSCHANNEL *a1)
{
  if ( a1 )
    DXGVMBUSCHANNEL::Disable(a1);
}
