/*
 * XREFs of ?bCalcGradientRectOffsets@@YGHPAU_GRADIENTRECTDATA@@@Z @ 0xBF2B0
 * Callers:
 *     ?bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PAU_POINTL@@@Z @ 0xBEA98 (-bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PA.c)
 * Callees:
 *     <none>
 */

int __thiscall bCalcGradientRectOffsets(int *this)
{
  int v1; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // edx
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v10; // [esp+0h] [ebp-14h]
  int v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h]

  v11 = this[1];
  v10 = this[5];
  v12 = v11;
  if ( v11 <= v10 )
    v12 = this[5];
  v1 = this[3];
  if ( v1 >= this[7] )
    v1 = this[7];
  v2 = this[4];
  v13 = *this;
  if ( *this <= v2 )
    v13 = this[4];
  v3 = this[2];
  if ( v3 >= this[6] )
    v3 = this[6];
  v4 = *this - v2;
  v5 = v3 - v13;
  v6 = 0;
  this[8] = v13;
  v7 = v1 - v12;
  this[9] = v12;
  this[10] = v5;
  this[11] = v7;
  if ( v4 <= 0 )
    v4 = 0;
  v8 = v11 - v10;
  this[41] = v4;
  if ( v11 - v10 <= 0 )
    v8 = 0;
  this[42] = v8;
  if ( v5 > 0 && v7 > 0 )
    return 1;
  return v6;
}
