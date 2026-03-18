/*
 * XREFs of _NtGdiUnrealizeObject@4 @ 0x214456
 * Callers:
 *     <none>
 * Callees:
 *     _GreUnrealizeObject@4 @ 0x21E7AB (_GreUnrealizeObject@4.c)
 */

int __stdcall NtGdiUnrealizeObject(int a1)
{
  return GreUnrealizeObject(a1);
}
