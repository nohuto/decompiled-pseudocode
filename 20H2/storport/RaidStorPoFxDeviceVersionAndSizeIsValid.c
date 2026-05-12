/*
 * XREFs of RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0037D00
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C003A5CC (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D1F8 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxDeviceVersionAndSizeIsValid(int *a1)
{
  int v2; // ecx
  bool v3; // cf

  v2 = *a1;
  if ( v2 == 1 )
  {
    v3 = (unsigned int)a1[1] < 0x10;
  }
  else
  {
    if ( v2 != 2 && v2 != 3 )
      return (unsigned int)(v2 - 1) <= 2;
    v3 = (unsigned int)a1[1] < 0x18;
  }
  if ( v3 )
    return 0;
  return (unsigned int)(v2 - 1) <= 2;
}
