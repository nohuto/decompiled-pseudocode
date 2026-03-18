/*
 * XREFs of HalpPnpInitSystem @ 0x140A5B6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPnpInitSystem(int a1)
{
  if ( a1 == 7 )
    off_140C02130[0] = HaliInitPnpDriver;
  return 0LL;
}
