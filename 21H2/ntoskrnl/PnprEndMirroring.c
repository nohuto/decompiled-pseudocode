/*
 * XREFs of PnprEndMirroring @ 0x1409AD720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PnprQuiesce @ 0x14050F718 (PnprQuiesce.c)
 *     PnprSwap @ 0x14050FA68 (PnprSwap.c)
 *     PnprWakeProcessors @ 0x1409AEE1C (PnprWakeProcessors.c)
 */

__int64 __fastcall PnprEndMirroring(int a1)
{
  unsigned int v1; // ebx
  int v2; // edi

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = PnprSwap();
      if ( v2 < 0 )
        ((void (__fastcall *)(__int64, _QWORD))off_140C00688[0])(3LL, *(_QWORD *)(PnprContext + 20872));
      PnprWakeProcessors();
      if ( v2 >= 0 )
        return 1073742484;
      return (unsigned int)v2;
    }
  }
  else
  {
    *(_BYTE *)(PnprContext + 208) = 1;
    return (unsigned int)PnprQuiesce();
  }
  return v1;
}
