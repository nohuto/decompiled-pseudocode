/*
 * XREFs of _IsCSWakeablePointerDevice@4 @ 0x1591BE
 * Callers:
 *     _xxxProcessHidInput@4 @ 0x144ADA (_xxxProcessHidInput@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsCSWakeablePointerDevice(int this)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(this + 276);
  v2 = 0;
  if ( *(_WORD *)(v1 + 22) == 13 && *(_WORD *)(v1 + 20) == 5 )
    return *(char *)(this + 120) < 0;
  return v2;
}
