/*
 * XREFs of StorPortWritePortUchar @ 0x1C0038CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall StorPortWritePortUchar(__int64 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  unsigned __int8 result; // al

  result = a3;
  __outbyte(a2, a3);
  return result;
}
