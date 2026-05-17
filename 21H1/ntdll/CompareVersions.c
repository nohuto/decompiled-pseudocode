/*
 * XREFs of CompareVersions @ 0x4B2ED33E
 * Callers:
 *     _RtlGetProductInfo@20 @ 0x4B2ED220 (_RtlGetProductInfo@20.c)
 * Callees:
 *     <none>
 */

int __stdcall CompareVersions(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  if ( a1 > a5 )
    return 1;
  if ( a1 < a5 )
    return -1;
  if ( a2 > a6 )
    return 1;
  if ( a2 < a6 )
    return -1;
  if ( a3 > a7 )
    return 1;
  if ( a3 < a7 )
    return -1;
  if ( a4 > a8 )
    return 1;
  if ( a4 < a8 )
    return -1;
  return 0;
}
