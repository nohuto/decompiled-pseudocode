/*
 * XREFs of HalpIommuDecreaseAliasTrack @ 0x1403EF81C
 * Callers:
 *     HalpIommuBlockDevice @ 0x1404C7490 (HalpIommuBlockDevice.c)
 * Callees:
 *     IidAreIdsStrictlyEqual @ 0x1405C4B5C (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuDecreaseAliasTrack(__int64 a1, _QWORD *a2)
{
  __int64 *i; // r11
  __int64 v5; // r11

  *a2 = 0LL;
  for ( i = (__int64 *)HalpRidAliasList; ; i = *(__int64 **)v5 )
  {
    if ( i == &HalpRidAliasList )
      return 3221226021LL;
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(i[2], a1) )
      break;
  }
  if ( _InterlockedDecrement64((volatile signed __int64 *)(v5 + 24)) <= -1 )
    __fastfail(0xEu);
  *a2 = v5;
  return 0LL;
}
