/*
 * XREFs of ?ThunkStringW@UMPDOBJ@@QAEHPAPAG@Z @ 0x20AAA2
 * Callers:
 *     ?UMPDDrvEnableDriver@@YGHPAGPAPAX@Z @ 0x20B946 (-UMPDDrvEnableDriver@@YGHPAGPAPAX@Z.c)
 *     ?UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@@1PAX@Z @ 0x20B9D7 (-UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDE.c)
 *     ?UMPDDrvStartDoc@@YGHPAU_SURFOBJ@@PAGK@Z @ 0x20E79C (-UMPDDrvStartDoc@@YGHPAU_SURFOBJ@@PAGK@Z.c)
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 */

int __thiscall UMPDOBJ::ThunkStringW(UMPDOBJ *this, unsigned __int16 **Src)
{
  _WORD *v3; // edx
  _WORD *v5; // ebx
  int v6; // ecx
  unsigned int v8; // eax

  v3 = *Src;
  if ( !*Src )
    return 1;
  v5 = v3 + 1;
  v6 = 0;
  while ( *v3++ )
    ;
  v8 = v3 - v5 + 1;
  if ( v8 < 0x7FFFFFFF )
    return UMPDOBJ::ThunkMemBlock(this, (void **)Src, (void *)(2 * v8));
  return v6;
}
