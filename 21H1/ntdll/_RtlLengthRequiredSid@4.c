/*
 * XREFs of _RtlLengthRequiredSid@4 @ 0x4B2EC160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlLengthRequiredSid(unsigned int a1)
{
  if ( a1 > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * a1 + 8;
}
