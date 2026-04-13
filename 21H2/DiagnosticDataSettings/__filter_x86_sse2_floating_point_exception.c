/*
 * XREFs of __filter_x86_sse2_floating_point_exception @ 0x10004C4D
 * Callers:
 *     __except_handler4 @ 0x10004850 (__except_handler4.c)
 * Callees:
 *     <none>
 */

int __cdecl _filter_x86_sse2_floating_point_exception(int a1)
{
  unsigned __int16 v2; // [esp+0h] [ebp-4h]

  if ( __isa_available >= 1 && (a1 == -1073741132 || a1 == -1073741131) )
  {
    v2 = _mm_getcsr();
    if ( (((unsigned __int8)v2 ^ 0x3F) & 0x81) == 0 )
      return -1073741680;
    if ( ((v2 ^ 0x3F) & 0x204) == 0 )
      return -1073741682;
    if ( ((v2 ^ 0x3F) & 0x102) == 0 )
      return -1073741680;
    if ( ((v2 ^ 0x3F) & 0x408) == 0 )
      return -1073741679;
    if ( ((v2 ^ 0x3F) & 0x810) == 0 )
      return -1073741677;
    if ( ((v2 ^ 0x3F) & 0x1020) == 0 )
      return -1073741681;
  }
  return a1;
}
