/*
 * XREFs of _IsImmersiveApplicationBandId@4 @ 0xAAF18
 * Callers:
 *     _anonymous_namespace_::EligibleWindow @ 0xF4E24 (_anonymous_namespace_--EligibleWindow.c)
 * Callees:
 *     <none>
 */

int __fastcall IsImmersiveApplicationBandId(int a1)
{
  int result; // eax

  result = 0;
  if ( a1 >= 8 && (a1 <= 11 || a1 == 13) )
    return 1;
  return result;
}
