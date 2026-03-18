/*
 * XREFs of _InImmersiveApplicationBand@4 @ 0x1A1E1A
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     <none>
 */

int __thiscall InImmersiveApplicationBand(_DWORD *this)
{
  int v1; // edx
  int v2; // eax

  v1 = 0;
  v2 = *(_DWORD *)(this[5] + 148);
  if ( v2 >= 8 && (v2 <= 11 || v2 == 13) )
    return 1;
  return v1;
}
