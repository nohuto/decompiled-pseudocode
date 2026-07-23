/*
 * XREFs of _PssNtFreeWalkMarker@4 @ 0x4B386C50
 * Callers:
 *     <none>
 * Callees:
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 */

NTSTATUS __stdcall PssNtFreeWalkMarker(int a1)
{
  NTSTATUS result; // eax

  if ( *(_DWORD *)a1 )
  {
    result = NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, *(PVOID *)a1);
    *(_DWORD *)a1 = 0;
  }
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
