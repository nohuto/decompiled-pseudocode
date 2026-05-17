/*
 * XREFs of _RtlAbsoluteToSelfRelativeSD@12 @ 0x4B2E6A00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlMakeSelfRelativeSD@12 @ 0x4B2E6A30 (_RtlMakeSelfRelativeSD@12.c)
 */

int __stdcall RtlAbsoluteToSelfRelativeSD(int a1, void *a2, int a3)
{
  if ( *(__int16 *)(a1 + 2) < 0 )
    return -1073741593;
  else
    return RtlMakeSelfRelativeSD(a1, a2, a3);
}
