/*
 * XREFs of _AlpcGetHeaderSize@4 @ 0x4B2E9EE0
 * Callers:
 *     _AlpcInitializeMessageAttribute@16 @ 0x4B2E9E60 (_AlpcInitializeMessageAttribute@16.c)
 *     _AlpcGetMessageAttribute@8 @ 0x4B2E9EA0 (_AlpcGetMessageAttribute@8.c)
 * Callees:
 *     <none>
 */

int __stdcall AlpcGetHeaderSize(int a1)
{
  int result; // eax

  result = ((a1 >> 31) & 0xC) + 8;
  if ( (a1 & 0x40000000) != 0 )
    result = ((a1 >> 31) & 0xC) + 24;
  if ( (a1 & 0x20000000) != 0 )
    result += 20;
  if ( (a1 & 0x10000000) != 0 )
    result += 16;
  if ( (a1 & 0x8000000) != 0 )
    result += 24;
  if ( (a1 & 0x4000000) != 0 )
    result += 4;
  if ( (a1 & 0x2000000) != 0 )
    result += 8;
  return result;
}
