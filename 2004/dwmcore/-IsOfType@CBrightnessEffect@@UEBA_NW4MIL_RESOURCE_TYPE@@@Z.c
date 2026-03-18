/*
 * XREFs of ?IsOfType@CBrightnessEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180170F20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D2E0 (-IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CBrightnessEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 13 )
    return 1;
  v2 = CFilterEffect::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
