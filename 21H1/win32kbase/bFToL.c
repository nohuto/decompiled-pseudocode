/*
 * XREFs of bFToL @ 0x1C002D690
 * Callers:
 *     bCvtPts1 @ 0x1C001A014 (bCvtPts1.c)
 *     efSin @ 0x1C002E270 (efSin.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C002E380 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0076DB0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     bCvtPts @ 0x1C00C3C84 (bCvtPts.c)
 *     bCvtVts @ 0x1C00C5608 (bCvtVts.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0146F78 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0148B88 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C0148C60 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C014C300 (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFToL(float a1, int *a2, unsigned int a3)
{
  signed int v4; // r9d
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx

  v4 = (unsigned __int8)(SLODWORD(a1) >> 23) + ((a3 >> 1) & 4 | 0xFFFFFF8A);
  v5 = 1;
  if ( v4 > 40 )
  {
    return 0;
  }
  else
  {
    v6 = LODWORD(a1) & 0x7FFFFF | 0x800000LL;
    if ( v4 < 0 )
      v7 = v6 >> -(char)v4;
    else
      v7 = v6 << v4;
    v8 = v7 + 0x80000000LL;
    if ( (a3 & 1) != 0 )
      v8 = v7;
    v9 = v8 >> 32;
    v10 = -(int)v9;
    if ( a1 >= 0.0 )
      v10 = v9;
    *a2 = v10;
  }
  return v5;
}
