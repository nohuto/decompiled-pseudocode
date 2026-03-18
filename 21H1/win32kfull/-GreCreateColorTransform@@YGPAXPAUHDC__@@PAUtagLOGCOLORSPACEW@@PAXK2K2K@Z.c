/*
 * XREFs of ?GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x21B794
 * Callers:
 *     _NtGdiCreateColorTransform@32 @ 0x21C124 (_NtGdiCreateColorTransform@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInFullScreen@DC@@QAEHXZ @ 0x79454 (-bInFullScreen@DC@@QAEHXZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x1F4A5E (-hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 */

struct HOBJ__ *__userpurge GreCreateColorTransform@<eax>(
        struct tagLOGCOLORSPACEW *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        struct tagLOGCOLORSPACEW *a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        void *a9,
        unsigned int a10)
{
  struct HOBJ__ *v11; // esi
  DC *v13[3]; // [esp+8h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  v11 = 0;
  if ( a1->lcsSignature == 1347637059 && a1->lcsVersion == 1024 && a1->lcsSize == 588 )
  {
    v13[1] = 0;
    v13[2] = 0;
    XDCOBJ::vLock((XDCOBJ *)v13, a2);
    if ( v13[0] )
    {
      if ( DC::bInFullScreen(v13[0]) )
      {
        EngSetLastError(0x57u);
      }
      else
      {
        v14 = 0;
        v11 = COLORTRANSFORMOBJ::hCreate(
                (COLORTRANSFORMOBJ *)&v14,
                (struct XDCOBJ *)v13,
                a1,
                a3,
                (unsigned int)a4,
                a5,
                a6,
                a7,
                a8);
        if ( !v11 )
          EngSetLastError(8u);
        if ( v14 )
          DEC_SHARE_REF_CNT(v14);
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
    }
    else
    {
      EngSetLastError(0x57u);
    }
    return v11;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0;
  }
}
