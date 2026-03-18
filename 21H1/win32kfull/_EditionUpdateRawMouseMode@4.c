/*
 * XREFs of _EditionUpdateRawMouseMode@4 @ 0x4488C
 * Callers:
 *     <none>
 * Callees:
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 */

int __stdcall EditionUpdateRawMouseMode(int a1)
{
  int v1; // esi
  int i; // ecx

  v1 = a1;
  for ( i = 3; i; --i )
    v1 += 4;
  return UpdateRawMouseMode(a1);
}
