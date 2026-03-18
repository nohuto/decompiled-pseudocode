/*
 * XREFs of HvlDisableEnlightenment @ 0x14054310C
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlDisableEnlightenment(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 1 )
    result = 0x2000LL;
  HvlEnlightenments &= result;
  return result;
}
