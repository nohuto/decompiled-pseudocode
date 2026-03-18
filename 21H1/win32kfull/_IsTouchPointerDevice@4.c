/*
 * XREFs of _IsTouchPointerDevice@4 @ 0x1591F6
 * Callers:
 *     _SqmPointerDeviceDown@4 @ 0x159486 (_SqmPointerDeviceDown@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsTouchPointerDevice(_DWORD *this)
{
  int v1; // eax
  int v2; // ecx

  v1 = this[3];
  v2 = 1;
  if ( v1 != 1 && v1 != 2 && v1 != 3 )
    return v1 == 4;
  return v2;
}
