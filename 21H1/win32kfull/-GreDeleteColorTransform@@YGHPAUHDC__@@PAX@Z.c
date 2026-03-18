/*
 * XREFs of ?GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z @ 0x21B852
 * Callers:
 *     _NtGdiDeleteColorTransform@8 @ 0x21C3A9 (_NtGdiDeleteColorTransform@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInFullScreen@DC@@QAEHXZ @ 0x79454 (-bInFullScreen@DC@@QAEHXZ.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0x1F4909 (-bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 */

int __fastcall GreDeleteColorTransform(HDC a1, int a2)
{
  int v2; // esi
  int v4; // edx
  DC *v6[3]; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  v6[1] = 0;
  v6[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    if ( DC::bInFullScreen(v6[0]) )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      LOBYTE(v4) = 14;
      v7 = HmgShareLockCheck(a2, v4);
      if ( v7 )
      {
        v2 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v7, (struct XDCOBJ *)v6, 0);
        if ( v7 )
          DEC_SHARE_REF_CNT(v7);
      }
    }
    if ( v6[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v2;
}
