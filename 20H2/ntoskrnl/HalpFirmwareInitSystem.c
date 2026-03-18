/*
 * XREFs of HalpFirmwareInitSystem @ 0x1409A3E60
 * Callers:
 *     <none>
 * Callees:
 *     HalpFirmwareInitDiscard @ 0x140A71BE0 (HalpFirmwareInitDiscard.c)
 */

__int64 __fastcall HalpFirmwareInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 7 )
    HalpFirmwareInitDiscard(a3);
  return 0LL;
}
