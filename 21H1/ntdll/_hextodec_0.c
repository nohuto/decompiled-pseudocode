/*
 * XREFs of _hextodec_0 @ 0x4B30164A
 * Callers:
 *     __input_s @ 0x4B30166C (__input_s.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl hextodec_0(unsigned __int8 a1)
{
  int v1; // edx

  v1 = (char)a1;
  if ( (_pctype[a1] & 4) == 0 )
    return ((char)a1 & 0xFFFFFFDF) - 7;
  return v1;
}
