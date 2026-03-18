/*
 * XREFs of HalpIommuProcessReservations @ 0x1403B25F8
 * Callers:
 *     HalpIommuInitSystem @ 0x1409A16B0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuProcessReservationsInternal @ 0x1404C81D0 (HalpIommuProcessReservationsInternal.c)
 */

__int64 __fastcall HalpIommuProcessReservations(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  v1 = (__int64 *)HalpIommuList;
  result = 0LL;
  while ( v1 != &HalpIommuList )
  {
    if ( v1[41] )
    {
      result = HalpIommuProcessReservationsInternal(v1, a1);
      if ( (int)result < 0 )
        break;
    }
    v1 = (__int64 *)*v1;
  }
  return result;
}
