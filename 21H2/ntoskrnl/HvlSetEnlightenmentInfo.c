/*
 * XREFs of HvlSetEnlightenmentInfo @ 0x14088E710
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlSetEnlightenmentInfo(__int64 a1, __int64 a2, int a3, char a4)
{
  if ( a4 )
    return 3221225506LL;
  if ( a3 )
    return 3221225712LL;
  return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
}
