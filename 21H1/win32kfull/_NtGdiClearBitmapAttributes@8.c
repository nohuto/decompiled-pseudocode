/*
 * XREFs of _NtGdiClearBitmapAttributes@8 @ 0xD2ADC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiClearBitmapAttributes(int a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapNonStock(a1);
  else
    return 0;
}
