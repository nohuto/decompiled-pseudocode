/*
 * XREFs of _hextodec_1 @ 0x4B302D54
 * Callers:
 *     __winput_s @ 0x4B302E38 (__winput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl hextodec_1(unsigned __int16 a1)
{
  if ( (a1 & 0xFF00) != 0 || (_pctype[(unsigned __int8)a1] & 4) == 0 )
    return (a1 & 0xFFDF) - 7;
  else
    return a1;
}
