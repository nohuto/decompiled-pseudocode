/*
 * XREFs of _RtlWnfCompareChangeStamp@8 @ 0x4B33C260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlWnfCompareChangeStamp(unsigned int a1, unsigned int a2)
{
  if ( a1 == a2 )
    return 0;
  else
    return a1 < a2 ? -1 : 1;
}
