/*
 * XREFs of _NtGdiSetBitmapAttributes@8 @ 0xE079E
 * Callers:
 *     <none>
 * Callees:
 *     _GreMakeBitmapStock@4 @ 0xE07BA (_GreMakeBitmapStock@4.c)
 */

int __stdcall NtGdiSetBitmapAttributes(int a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapStock(a1);
  else
    return 0;
}
