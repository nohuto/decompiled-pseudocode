/*
 * XREFs of _PssNtFreeWalkMarker@4 @ 0x4B386C50
 * Callers:
 *     <none>
 * Callees:
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 */

int __stdcall PssNtFreeWalkMarker(int *a1)
{
  int result; // eax

  if ( *a1 )
  {
    result = NtUnmapViewOfSection(-1, *a1);
    *a1 = 0;
  }
  a1[1] = 0;
  return result;
}
