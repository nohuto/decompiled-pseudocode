/*
 * XREFs of ?ComputeMagnificationFactor@@YGXPAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x178D49
 * Callers:
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 * Callees:
 *     <none>
 */

void __thiscall ComputeMagnificationFactor(int *this)
{
  int v2; // ecx
  int v3; // [esp+Ch] [ebp-20h]
  int v4; // [esp+14h] [ebp-18h]
  int v5; // [esp+1Ch] [ebp-10h]
  int v6; // [esp+20h] [ebp-Ch]
  int v7; // [esp+24h] [ebp-8h]
  int v8; // [esp+28h] [ebp-4h]

  v3 = *this;
  v4 = this[2];
  v5 = this[4];
  v6 = this[5];
  v7 = this[6];
  v8 = this[7];
  v2 = this[3] - this[1];
  this[9] = ((v7 - v5) << 8) / (v4 - v3);
  this[10] = ((v8 - v6) << 8) / v2;
}
