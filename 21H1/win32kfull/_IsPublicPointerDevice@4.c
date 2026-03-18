/*
 * XREFs of _IsPublicPointerDevice@4 @ 0x1591DE
 * Callers:
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsPublicPointerDevice(int this)
{
  int v1; // edx

  v1 = 0;
  if ( *(char *)(this + 120) < 0 )
    return *(_DWORD *)(*(_DWORD *)(this + 284) + 12) != 7;
  return v1;
}
