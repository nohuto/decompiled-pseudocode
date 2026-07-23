/*
 * XREFs of HalpLbrGetInformation @ 0x1403CFE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HalpLbrGetInformation(_DWORD *a1, _DWORD *a2)
{
  if ( !HalpLbrStackSize )
    return 0;
  if ( a1 )
    *a1 = HalpLbrStackSize;
  if ( a2 )
    *a2 = 1023;
  return 1;
}
