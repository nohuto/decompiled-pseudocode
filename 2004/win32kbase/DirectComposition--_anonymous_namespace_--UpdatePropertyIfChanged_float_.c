/*
 * XREFs of DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_ @ 0x1C01EF668
 * Callers:
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01EF970 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(
        float a1,
        float *a2,
        _BYTE *a3)
{
  char result; // al

  result = 0;
  if ( *a2 != a1 )
  {
    result = 1;
    *a2 = a1;
    *a3 = 1;
  }
  return result;
}
