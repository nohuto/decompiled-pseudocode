/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02AF390
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02B6B58 (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
