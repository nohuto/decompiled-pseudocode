/*
 * XREFs of ?vSpUnhook@@YGXPAU_SPRITESTATE@@@Z @ 0xAD018
 * Callers:
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YGXPAUHDEV__@@H@Z @ 0xACFC2 (-vSpHideSprites@@YGXPAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall vSpUnhook(_DWORD *this)
{
  _DWORD *v1; // edx

  v1 = (_DWORD *)*this;
  this[18] = this[16];
  this[17] = this[15];
  v1[491] = this[188];
  v1[489] = this[189];
  v1[490] = this[190];
  v1[493] = this[192];
  v1[494] = this[193];
  v1[495] = this[194];
  v1[498] = this[195];
  v1[506] = this[196];
  v1[549] = this[197];
  v1[546] = this[198];
  v1[545] = this[199];
  v1[543] = this[200];
  v1[544] = this[202];
  v1[515] = this[201];
  v1[565] = this[203];
  this[168] = 0;
}
