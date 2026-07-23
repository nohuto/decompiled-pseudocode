/*
 * XREFs of HalpPnpInitSystem @ 0x1409A2630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPnpInitSystem(int a1)
{
  if ( a1 == 7 )
    off_140C00AC0[0] = (__int64 (__fastcall *)())HaliInitPnpDriver;
  return 0LL;
}
