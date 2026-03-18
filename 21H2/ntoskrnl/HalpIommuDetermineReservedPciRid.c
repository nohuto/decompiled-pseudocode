/*
 * XREFs of HalpIommuDetermineReservedPciRid @ 0x14051A924
 * Callers:
 *     HalpIommuProcessReservationsInternal @ 0x14051B720 (HalpIommuProcessReservationsInternal.c)
 * Callees:
 *     HalpPciConvertDevicePathToRid @ 0x1405186B0 (HalpPciConvertDevicePathToRid.c)
 */

__int64 __fastcall HalpIommuDetermineReservedPciRid(unsigned int *a1)
{
  int v2; // r8d
  unsigned int i; // ebx
  unsigned __int16 **v4; // rdx
  unsigned __int16 *v5; // rcx

  v2 = 0;
  for ( i = 0; i < *a1; ++i )
  {
    v4 = *(unsigned __int16 ***)&a1[2 * i + 2];
    v5 = *v4;
    if ( *(_DWORD *)*v4 == 1 )
    {
      if ( v5[7] )
      {
        v2 = HalpPciConvertDevicePathToRid(v5 + 4);
        if ( v2 < 0 )
          break;
      }
    }
  }
  return (unsigned int)v2;
}
