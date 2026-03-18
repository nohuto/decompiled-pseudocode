/*
 * XREFs of ?pCreateXlate@@YGPAVXLATE@@K@Z @ 0x225E3B
 * Callers:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ??0XLATEMEMOBJ@@QAE@VXEPALOBJ@@0@Z @ 0x225896 (--0XLATEMEMOBJ@@QAE@VXEPALOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

struct XLATE *__fastcall pCreateXlate(int a1)
{
  _DWORD *v2; // esi

  if ( 4 * a1 == -64 )
    v2 = 0;
  else
    v2 = (_DWORD *)AllocThreadBufferWithTag(4 * a1 + 64, 1953265735, 0);
  if ( v2 )
  {
    *v2 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
    v2[1] = a1 != 0 ? 2 : 0;
    v2[4] = a1 != 0 ? v2 + 15 : 0;
    v2[14] = a1 != 0 ? 0 : 512;
    v2[8] = -1;
    v2[9] = 0;
    v2[10] = 0;
    v2[11] = 0;
    v2[2] = 0;
    v2[3] = a1;
  }
  return (struct XLATE *)v2;
}
