/*
 * XREFs of _NtGdiDeleteColorTransform@8 @ 0x21C3A9
 * Callers:
 *     <none>
 * Callees:
 *     ?GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z @ 0x21B852 (-GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z.c)
 */

int __stdcall NtGdiDeleteColorTransform(HDC a1, int a2)
{
  return GreDeleteColorTransform(a1, a2);
}
