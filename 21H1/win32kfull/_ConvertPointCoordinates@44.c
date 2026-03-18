/*
 * XREFs of _ConvertPointCoordinates@44 @ 0x13ED36
 * Callers:
 *     _TransformForInputMagnification@12 @ 0x13EFD9 (_TransformForInputMagnification@12.c)
 * Callees:
 *     ?ConvertCoordinatesWithRounding@@YGHJJJJJPAJ@Z @ 0x13E0E8 (-ConvertCoordinatesWithRounding@@YGHJJJJJPAJ@Z.c)
 */

int __thiscall ConvertPointCoordinates(
        int *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // ecx
  int v14; // [esp+0h] [ebp-Ch]
  int v15; // [esp+0h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-8h] BYREF
  int v17; // [esp+8h] [ebp-4h] BYREF

  v16 = 0;
  v17 = 0;
  *this = 0;
  this[1] = 0;
  v12 = ConvertCoordinatesWithRounding(a8, a10, a2, &v16, v14, (int *)v16);
  if ( v12 )
  {
    v12 = ConvertCoordinatesWithRounding(a9, a11, a3, &v17, v15, (int *)v16);
    if ( v12 )
    {
      *this = v16;
      this[1] = v17;
    }
  }
  return v12;
}
