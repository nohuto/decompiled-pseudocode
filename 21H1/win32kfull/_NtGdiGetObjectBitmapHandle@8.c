/*
 * XREFs of _NtGdiGetObjectBitmapHandle@8 @ 0x213176
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreGetObjectBitmapHandle@8 @ 0x21E0A5 (_GreGetObjectBitmapHandle@8.c)
 */

HBRUSH __stdcall NtGdiGetObjectBitmapHandle(HBRUSH a1, ULONG a2)
{
  int ObjectBitmapHandle; // edx
  _DWORD *v4; // ecx

  if ( ((unsigned int)a1 & 0x7F0000) != 0x100000 && ((unsigned int)a1 & 0x7F0000) != 0x500000 )
    return a1;
  ObjectBitmapHandle = GreGetObjectBitmapHandle(a1);
  if ( ObjectBitmapHandle )
  {
    v4 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v4 = (_DWORD *)_MmUserProbeAddress;
    *v4 = 0;
  }
  return (HBRUSH)ObjectBitmapHandle;
}
