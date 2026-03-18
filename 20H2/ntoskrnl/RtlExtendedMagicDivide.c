/*
 * XREFs of RtlExtendedMagicDivide @ 0x140312B24
 * Callers:
 *     TimeToDaysAndFraction @ 0x140312AD4 (TimeToDaysAndFraction.c)
 *     RtlTimeToSecondsSince1980 @ 0x140394FF0 (RtlTimeToSecondsSince1980.c)
 *     RtlTimeToSecondsSince1970 @ 0x140583920 (RtlTimeToSecondsSince1970.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __stdcall RtlExtendedMagicDivide(LARGE_INTEGER Dividend, LARGE_INTEGER MagicDivisor, CCHAR ShiftCount)
{
  LARGE_INTEGER v3; // r9
  unsigned __int64 v4; // rdx

  v3 = Dividend;
  if ( Dividend.QuadPart < 0 )
    Dividend.QuadPart = -Dividend.QuadPart;
  v4 = (unsigned __int64)(((unsigned __int64)Dividend.QuadPart
                         * (unsigned __int128)(unsigned __int64)MagicDivisor.QuadPart) >> 64) >> ShiftCount;
  if ( v3.QuadPart < 0 )
    return (LARGE_INTEGER)-(__int64)v4;
  return (LARGE_INTEGER)v4;
}
