/*
 * XREFs of _ElapsedDaysToYears@4 @ 0x4B2DCEDF
 * Callers:
 *     _RtlpTimeToTimeFieldsNoLeapSeconds@8 @ 0x4B2DCDB3 (_RtlpTimeToTimeFieldsNoLeapSeconds@8.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ElapsedDaysToYears(unsigned int a1)
{
  return (100 * ((-36524 * ((100 * (a1 % 0x23AB1) + 75) / 0x37BB49) + a1 % 0x23AB1) % 0x5B5) + 75) / 0x8EAD
       + 4
       * ((-36524 * ((100 * (a1 % 0x23AB1) + 75) / 0x37BB49) + a1 % 0x23AB1) / 0x5B5
        + 25 * ((100 * (a1 % 0x23AB1) + 75) / 0x37BB49 + 4 * (a1 / 0x23AB1)));
}
